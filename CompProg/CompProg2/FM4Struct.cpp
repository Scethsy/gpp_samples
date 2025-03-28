#include <iostream>
#include <string>
using namespace std;

void InputValidation(int &x) {
  while (true) {
    if (!(cin >> x)) {
    cout << "Error! Invalid input. Please enter a valid integer number.\n";
    cin.clear();
    cin.ignore(1214, '\n');
  } else if (x < 0 || x > 6) {
    cout << "Error! Invalid input. Please enter a number from the choices (0-6).\n";
  } else {
    break;
    }
  }
}

void InputValidation2(int &x) {
  while (!(cin >> x)) {
    cout << "Error! Invalid Input, Please enter a valid integer number" << endl;
    cin.clear();
    cin.ignore(1214, '\n');
  }
}

void menu () {
  int length = 40;
  cout<< endl;
  for(int i = 0; i < length; i++) {
    cout <<"=";
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
    cout <<"=";
  }
  cout<<"\n";
}

struct player{
  string name;
  int age;
  int bestscore[2];
  float average;
};

void choices_menu() {
  const char* choices[] = {"1.Add record", "2.View players records", "3.Compute for the average", "4.Show the player(s) who gets the max average", "5.Show the player(s) who gets the min average.", "6.Exit"};
  for(int i = 0; i < 6; i++) {
    cout<<"      "<< choices[i] << endl;
  }
}

void addrecord(player arr[], int i) {
  cout<<"\nEnter the nickname of the player: ";
  cin >>arr[i].name;

  cout<<"\nEnter age: ";
  InputValidation2(arr[i].age);

  cout<<"\nEnter 2 Best Played Scores: ";
  InputValidation2(arr[i].bestscore[0]);
  InputValidation2(arr[i].bestscore[1]);
  arr[i].average = (arr[i].bestscore[0] + arr[i].bestscore[1]) / 2;
}

void displaydata(player arr[], int total) {
  int number_p = 0;
  if(arr[0].name.empty()) {
    cout <<"No players found in the data." << endl;
  } else {
    cout<<"Who's record would you like to view?(choices 1-"<<total<<")\n";
  }
  for(int z = 0; z < 5; z++) {
    if (!arr[z].name.empty()) {
        cout<<z+1<<". "<<"      "<< arr[z].name<< endl;
        number_p += 1;
    }
  }
}
void displayplayerdata(player arr[], int i) {
  cout<<"\nNickname: "<< arr[i].name << endl;
  cout<<"Age: "<< arr[i].age << endl;
  cout<<"Best Scores: "<< arr[i].bestscore[0] << " & " << arr[i].bestscore[1] << endl;
  cout<<"Average Best Score: "<< arr[i].average << endl;
}

void displayplayer (player arr[], float limit, const string& highlow) {
  cout<<"The "<< highlow <<" best score player(s) is/are: \n\n";
  for(int i = 0; i < 5; i++) {
    if (arr[i].average == limit) {
      cout<<arr[i].name <<": "<<arr[i].average;
    }
  }
}

float average(player arr[]) {
  float deno = 0, nomi = 0, ans = 0;
  for(int j = 0; j < 5; j++) {
    if(!(arr[j].name.empty())) {
      deno += 2;
      nomi += arr[j].bestscore[0];
      nomi += arr[j].bestscore[1];
    }
    ans = nomi/deno;
  }
  return ans;
}

int totalplayers(player arr[]) {
  int total = 0;
  for(int i = 0; i < 5; i++) {
    if(!(arr[i].name.empty())) {
      total += 1;
    }
  }
  return total;
}

int main() {
  player arr[5] = {};
  int x;
  do {
  menu();
  choices_menu();
  InputValidation(x);
  int total = totalplayers(arr);
  int highest = arr[0].average;
  int lowest = arr[0].average;
  
  switch (x) {
    case 1://Add Record

      if(total < 5) {
        addrecord(arr, total);
        total += 1;
      } else {
        cout<<"The maximum number of players has been reached."<<endl;
      }
      
      break;

    case 2://view record
      displaydata(arr, total);
      if(!arr[0].name.empty()) {
        int view;
        InputValidation(view);
        displayplayerdata(arr, view-1);
      }
      break;
    case 3://Get average best score
      float ave;
      ave = average(arr);
      cout<<"\nThe average best scores of all players are: "<< ave;
      break;
    case 4://get players who got highest scores

      for(int i = 0; i < total; i++) {

        if(arr[i].average > highest){
          highest = arr[i].average;
        }
        
      }
      displayplayer(arr, highest, "Maximum");
      break;
    case 5://get players who got lowest scores

      for(int i = 0; i < total; i++) {

        if(arr[i].average < lowest){
          lowest = arr[i].average;
        }
        
      }
      displayplayer(arr, lowest, "Minimum");
      break;
    case 6://exit;
      break;
    default:
      cout<<"Something went wrong";
      break;
  }
  } while (x != 6);
  return 0;
}