#include <iostream>
using namespace std;

int main() {

  int num = 10, *ptr = &num;

  cout <<"Initial value of num: " << num<<endl;
  cout <<"Memory address of num (&num): "<< &num<<endl;
  cout <<"Value stored in ptr (address of num): "<< ptr<< endl;
  cout <<"Value accessed via ptr (*ptr): "<<*ptr <<endl<<endl;

  *ptr = 14;
  cout <<"After modifying value through ptr: "<<endl;
  cout <<"Updated value of num: "<< num<<endl;
  cout <<"Value accessed via ptr (*ptr): "<< *ptr<<endl;

  return 0;
}


