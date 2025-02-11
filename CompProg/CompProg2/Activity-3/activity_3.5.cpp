#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

  char str[100];

  cout << "Enter some string: ";
  
  cin.getline(str, 100);

  bool newWord = true;

  for (int i = 0; i < strlen(str); i++) {
    
    if (isspace(str[i])) {
      newWord = true;
    } else if (newWord) {
      str[i] = toupper(str[i]);
      newWord = false;
    } else {
      str[i] = tolower(str[i]);
    }
  }

  cout << "Capitalized string: " << str << endl;

  return 0;
}
