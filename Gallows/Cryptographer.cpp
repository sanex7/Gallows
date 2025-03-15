#include <fstream>
#include <string>

class Cryptographer
{
public:
    static std::string Encrypt(const std::string& word, const std::string& key)
    {
        std::string encrypted_word = word;
        for (size_t i = 0; i < word.length(); i++)
        {
            encrypted_word[i] = word[i] ^ key[i % key.length()];
        }
        return encrypted_word;
    }

    static std::string Decrypt(const std::string& encrypted_word, const std::string& key)
    {
        return Encrypt(encrypted_word, key);
    }

    static void SaveEncryptedWordToFile(const std::string& word, const std::string& filename, const std::string& key)
    {
        std::fstream output(filename, std::ios::out);
        if (output.is_open())
        {
            std::string encrypted_word = Encrypt(word, key);
            output << encrypted_word;
        }
        output.close();
    }

    static std::string LoadEncryptedWordFromFile(const std::string& filename, const std::string& key)
    {
        std::fstream input(filename, std::ios::in);
        std::string encrypted_word;
        if (input.is_open())
        {
            std::getline(input, encrypted_word);
        }
        input.close();
        return Decrypt(encrypted_word, key);
    }
};
