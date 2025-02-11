#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[100];
  int i, length;
  bool isPalindrome = true;

  cout << "***************" << endl;
  cout << "PALINDROME" << endl;
  cout << "***************" << endl;

  cout << "Enter a word: ";

  cin.getline(str, 200);

  length = strlen(str);

  for (i = 0; i < length / 2; i++) {  

    if (str[i] != str[length - i - 1]) {
      isPalindrome = false; 
      break;
    }

  }

  if (isPalindrome) {
    cout << str << " is a palindrome" << endl;
  } else {
    cout << str << " is not a palindrome" << endl;
  }

  return 0;
}