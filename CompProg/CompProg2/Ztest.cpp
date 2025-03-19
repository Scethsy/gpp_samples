#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
  string str;
  ofstream filestream("sample.txt");
  cout <<" Enter a text : ";
  getline(cin, str);
  if (filestream.is_open()) {
    filestream << str;
    filestream.close();
  } else {
    cout << "No Such File created.";
  }

  return 0;
}