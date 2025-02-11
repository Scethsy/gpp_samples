#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str1[100], str2[100];
  cout << "***************" << endl;
  cout << "STRING COMPARE" << endl;
  cout << "***************" << endl;
  cout << "Enter a first word (str1): ";
  cin >> str1;
  cout << "Enter a second word (str2): ";
  cin >> str2;
  if (strcmp(str1, str2) == 0) {
    cout << "equal" << endl;
  } else if (strcmp(str1, str2) > 0) {
    cout << "positive" << endl;
  } else {
    cout << "negative" << endl;
  }
  return 0;
}

