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

  cout<<"\n Enter 2 Best Played Scores: ";
  InputValidation2(arr[i].bestscore[0]);
  InputValidation2(arr[i].bestscore[1]);
}

void displaydata(player arr[]) {
  int number_p = 0;
  if(arr[0].name.empty()) {
    cout <<"No players found in the data." << endl;
  } else {
    for(int z = 0; z < 5; z++) {
      if (!arr[z].name.empty()) {
          cout<<z+1<<". "<<"      "<< arr[z].name << endl;
          number_p += 1;
      }
    }
  }
}
void displayplayerdata(player arr[], int i) {
  cout<<"\nNickname: "<< arr[i].name << endl;
  cout<<"Age: "<< arr[i].age << endl;
  cout<<"Best Scores: "<< arr[i].bestscore[0] << " & " << arr[i].bestscore[1] << endl;
}

void displayplayer (player arr[], int i, const string& highlow) {
  cout<<"The "<< highlow <<" best score player(s) is/are: \n\n";
  for(int j = 0; j < 5; j++) {
    for(int b = 0; b < 2; b++) {
      if(i == arr[i].bestscore[b]) {
        cout<<arr[i].name <<": "<<arr[i].bestscore[b];
      }
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
int main() {
  int x;
  player arr[5] = {};
  do {
  menu();
  choices_menu();
  InputValidation(x);
  switch (x) {
    case 1://Add Record
      for(int i = 0, j = 0; i < 5; i++) {
        if (arr[i].name.empty()) {
          addrecord(arr, i);
          break;
        } else {
          cout <<"Reached Maximum number of players entered\n";
          cout <<"\nWould you like to replace other player's data? (Type 1 if yes and any other key otherwise)";
          InputValidation(j);
          if (j == 1) {
            displaydata(arr);
            cout<<"Select a number to choose to alter data.\n";
            int alter;
            InputValidation(alter);
            addrecord(arr, alter-1);
            break;
          }
        }
      }
    break;
    case 2://view record
      cout<<"Who's record would you like to view?\n";
      displaydata(arr);
      int view;
      InputValidation(view);
      displayplayerdata(arr, view-1);
      break;
    case 3://Get average best score
      float ave;
      ave = average(arr);
      cout<<"\nThe average best scores of all players are: "<< ave;
      break;
    case 4://get players who got highest scores
      for(int i = 0; i < 5; i++) {
        int highest = 0;
        //get highest bestscore
        if(!(arr[i].name.empty())) {
          for(int j = 0; j < 2; j++) {
            if (highest < arr[i].bestscore[j]) {
              highest = arr[i].bestscore[j];
            }
          }
        }
        displayplayer(arr, highest, "highest");
      }
      break;
    case 5://get players who got lowest scores
      for(int i = 0; i < 5; i++) {
        int lowest = 0;
        //get highest bestscore
        if(!(arr[i].name.empty())) {
          for(int j = 0; j < 2; j++) {
            if (lowest > arr[i].bestscore[j]) {
              lowest = arr[i].bestscore[j];
            }
          }
        }
        displayplayer(arr, lowest, "lowest");
      }
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