#include <iostream>
using namespace std;

void IV (int &x) {
  while (true) {
    if (!(cin >> x)) {
      cout << "Error! Invalid Input, Please enter a valid number" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    } else if (x < 0 || x > 4) {
      cout << "Error! Invalid Input, Please enter a number from the choice (1-4)" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    } else {
      break;
    }
  }
  cin.ignore(); //test if okay lng
}

void menu () {
  cout << "What would you like to do?" << endl;
  cout << "1. Find the string length" << endl;
  cout << "2. Compare two strings" << endl;
  cout << "3. Concatenate two strings" << endl;
  cout << "4. Exit" << endl;
  cout << "Enter your choice: ";
}

//find string length
void one (char *str) {
  int l = 0;
  while (*(str + l) != '\0') {
    l++;
  }
  cout << "Length of the String is: " << l <<endl;
}

//Compare two strings
void two (char *str1, char *str2) {
  int x = 0, y = 0;
  while (*str1 != '\0') {
    x++;
    str1++;
  }
  while (*str2 != '\0') {
    y++;
    str2++;
  }
  if (x == y) {
    cout << "Strings are Equal." << endl;
  } else  if (x > y) {
    cout << "First string is longer" << endl;
  } else {
    cout << "First string is smaller" << endl;
  }
}

//Concatenate
void three (char *str1, char *str2) {
  char *p = str1;
  while (*p != '\0') {
    p++;
  }
  
  while (*str2 != '\0') {
    *p = *str2;
    p++;
    str2++;
  }
  *p = '\0';
  cout << "Concatenated String: " << str1 << endl;
}



int main() {
  int choice;
  char tryagain;
  do {
    menu();
    IV(choice);
    cout << endl;
    char str1 [100], str2 [100];
    switch (choice) {
      case 1:
        cout <<"Enter a String: ";
        cin.getline(str1, 100);
        one(str1);
        break;

      case 2:
        cout <<"Enter the first String: ";
        cin.getline(str1, 100);
        cout <<"Enter the second String: ";
        cin.getline(str2, 100);
        two(str1, str2);
        break;

      case 3:
        cout <<"Enter the first String: ";
        cin.getline(str1, 100);
        cout <<"Enter the second String: ";
        cin.getline(str2, 100);
        three(str1, str2);
        break;

      case 4:
        return 0;
        break;

      default:
        cout << "Enter a number from (1-4) only." << endl;
        break;
    }
    cout <<"\nTry again? Enter Y";
    cin >> tryagain;
    cin.ignore();
  } while (tryagain == 'y' || tryagain == 'Y');

  return 0;
}

