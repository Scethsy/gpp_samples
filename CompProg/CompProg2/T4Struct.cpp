#include <iostream>
#include <cstring>
using namespace std;

struct WeeklyTemp {
  char cityname[100];
  float temp[7];
};

void isnum(int &x) {
  while(!(cin >> x)) {
    cout << "Error! Invalid input. Please enter a valid integer number.\n";
    cin.clear();
    cin.ignore(1214, '\n');
  }
}
void isfloat(float &x) {
  while(!(cin >> x)) {
    cout << "Error! Invalid input. Please enter a valid float number.\n";
    cin.clear();
    cin.ignore(1214, '\n');
  }
}

float calculateAverage(const WeeklyTemp &WeeklyTemp) {
  float average = 0;
  for(int i = 0; i < 7; i++) {
    average += WeeklyTemp.temp[i];
  }
  average /= 7.00;
  return average;
}

int main() {
  int x;
  float average = 0;
  WeeklyTemp WeeklyTemp;
  const char* days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  cout<<"Enter City: ";
  cin.getline(WeeklyTemp.cityname, 100);

  cout<<"\nEnter temperature for Monday to Sunday: \n";
  for(int i = 0; i < 7; i++) {

    cout<<"\nEnter "<< days[i]<<"'s Temperature: ";
    isfloat(WeeklyTemp.temp[i]);

  }
  average = calculateAverage(WeeklyTemp);
  cout<<"Average temperature in "<<WeeklyTemp.cityname<<" is: "<<average<<endl;
  return 0;

}


