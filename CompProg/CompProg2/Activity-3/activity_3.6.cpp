#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin.getline(str, 100);

  char *token = strtok(str, " ");
  char *words[100];
  int count = 0;

  while (token != NULL) {
    words[count] = token;
    count++;
    token = strtok(NULL, " ");
  }

  for (int i = count - 1; i >= 0; i--) {
    cout << words[i] << endl;
  }

  return 0;
}