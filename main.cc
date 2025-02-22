#include <iosream>
#include <fstream>
#include <string>
#include "encrypt.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
  string filename;
  char mode;
  cout << "Enter the file name: ";
  getline(cin >> ws, filename);

  cout << "1. Encrypt a file\n" << "2. Decrypt a file\n";
  cin >> mode;

  if (mode == '1' || mode == '2')
