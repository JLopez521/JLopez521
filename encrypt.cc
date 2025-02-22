#include "encrypt.h"
#include <fstream>
#include <cctype>

using namespace std;

bool performCaesarCipher(string& content, bool encrypt){
    int shift = encrypt ? 3 : -3;

    for (char& ch: content) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
        }
    }

bool encryptFile(const string& filename, bool encrypt) {
    ifstream inFile(filename);
    if (!inFile) {
        return false;
    }

    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    if (performCaesarCipher(content, encrypt)) {
       ofstream outFile(encrypt ? "encrypted_" + filename : "decrypted_" + filename);
       if (!outFile) {
           return false;
       }
      outFile << content;

      outFile.close();

      return true;
    }
  }
}
