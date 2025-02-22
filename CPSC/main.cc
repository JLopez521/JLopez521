#include <iostream>
#include <fstream>
#include <string>
#include "encrypt.h"
#include <bits/stdc++.h>

using namespace std;


int main() {
  string filename;
  int choice;
  cout << "Enter the file name: ";
  getline(cin >> ws, filename);

  cout << "1. Encrypt a file\n" << "2. Decrypt a file\n" << "Enter your choice: ";
  cin >> choice;

  if (choice == 1) {
    if (encryptFile(filename, true)) {
        cout << "Encryption completed successfully." << endl;
    } else {
        cerr << "Error: Unable to perform encryption." << endl;
    }
  } else if (choice == 2) {
      if (encryptFile(filename, false)) {
          cout << "Decryption completed successfully." << endl;
      } else {
          cerr << "Error: Unable to perform decryption." << endl;
      }
  } else {
      cerr << "Error: Invalid input. Please choose 1 for encryption or 2 for decryption." << endl;
  }
  return 0;
}
