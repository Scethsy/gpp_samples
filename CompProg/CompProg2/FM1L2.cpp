#include <iostream>
using namespace std;
#define Pi 3.141592653589793;

void InputValidation(int &x) {
  while (true) {
    if (!(cin >> x)) {
      cout << "Error! Invalid Input, Please enter a valid integer number" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    } else if (x > 5 || x < 0) {
      cout << "Error! Invalid Input, Please enter a number from the choices" << endl;
    } else {
      break;
    }
  }
}
void InputValidation2(int &x) {
  while (true) {
    if (!(cin >> x)) {
      cout << "Error! Invalid Input, Please enter a valid integer number" << endl;
      cin.clear();
      cin.ignore(1214, '\n');
    } else if (x < 0) {
      cout << "Error! Invalid Input, Please enter a postiive value." << endl;
    } else {
      break;
    }
  }
}

void menu () {
  int length = 40;
  for(int i = 0; i < length; i++) {
    cout <<"*";
  }
  cout<< endl;
  int x = (length - 4) / 2;
  for (int i = 0; i < length; i++) {
      if (i == x) {
          cout << "MENU";
          i += 3;
      } else {
          cout << " ";
      }
  }
  cout<< endl;
  for(int i = 0; i < length; i++) {
    cout <<"*";
  }
  cout<<"\n";
}

void operations() {
  const char* choices[] = {"[1] - Area of Square", "[2] - Area of Rectangle", "[3] - Area of Triangle", "[4] - Area of Circle", "[5] - Exit"};
  for(int i = 0; i < 5; i++) {
    cout<<"      "<< choices[i] << endl;
  }
  for(int i = 0; i < 21; i++) {
    cout<<"-";
  }
  cout<<endl;
}
int Calculator(int x) {
  int area = 0, s = 0, l = 0, w = 0, b = 0, h = 0, r = 0;
  switch(x) {
    case 1: //Square
      cout<<"AREA OF SQUARE"<<endl;
      for(int i = 0; i < 21; i++) {
        cout<<"-";
      }
      cout<<endl;
      cout<<"Enter the side of the Square: ";
      InputValidation2(s);
      area = s*s;
      break;
    case 2://Rectangle
      cout<<"AREA OF RECTANGLE"<<endl;
      for(int i = 0; i < 21; i++) {
        cout<<"-";
      }
      cout<<endl;
      cout<<"Enter the length and width of the Rectangle: ";
      InputValidation2(l);
      InputValidation2(w);
      area = l*w;
      break;
    case 3://Triangle
      for(int i = 0; i < 21; i++) {
        cout<<"-";
      }
      cout<<endl;
      cout<<"Enter the base and height of the Triangle: ";
      InputValidation2(b);
      InputValidation2(h);
      area = h*b/2;
      break;
    case 4://Circle
      cout<<"AREA OF CIRCLE"<<endl;
      for(int i = 0; i < 21; i++) {
        cout<<"-";
      }
      cout<<endl;
      cout<<"Enter the radius of the Circle: ";
      InputValidation2(r);
      area = r*r*Pi;
      break;
    case 5://Exit
      cout <<"Thank you!\n Press any key to continue . . ."<<endl;
      break;
    default:
      cout <<"Something went wrong";
      break;
  }
  return area;
}

int main() {
  int x = 0, a = 0;
  menu();
  operations();
  cout <<"Enter your choice(1-5): ";
  InputValidation(x);
  a = Calculator(x);
  if (x != 5) {
    cout << "The Area is " << a << " sq. units." << endl;
  }

  return 0;
}

