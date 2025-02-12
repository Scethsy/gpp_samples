#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct student {

  int studentID;
  char firstName[50];
  char lastName[50];
  float GPA;

};

void choices_menu() {
  const char* choices[] = {"1.Add a student", "2.Display all students", "3.Calculate the average GPA", "4.Find students by last name", "5.Exit"};
  for(int i = 0; i < 5; i++) {
    cout<<"      "<< choices[i] << endl;
  }
}

void isnum(int &x) {
  while(!(cin >> x)) {
    cout << "Error! Invalid input. Please enter a valid integer number.\n";
    cin.clear();
    cin.ignore(1214, '\n');
  }
}

void InputValidation(int &x) {
  while (true) {
    if (!(cin >> x)) {
    cout << "Error! Invalid input. Please enter a valid integer number.\n";
    cin.clear();
    cin.ignore(1214, '\n');
  } else if (x < 0 || x > 5) {
    cout << "Error! Invalid input. Please enter a number from the choices (1-5).\n";
  } else {
    break;
    }
  }
}
//Case 1 Function
/*void addStudent(student students[], int &numStudents) {
  cout<<"\nEnter Student ID: ";
  isnum(students[numStudents].studentID);
  cout<<"\nEnter First Name: ";
  cin>>students[numStudents].firstName;
  //cin.getline(students[numStudents].firstName, 50);
  cout<<"\nEnter Last Name: ";
  //cin.getline(students[numStudents].lastName, 50);
  cin>>students[numStudents].lastName;
  cout<<"\nEnter GPA: ";
  cin>>students[numStudents].GPA;
  numStudents++;

}*/
void addStudent(student students[], int &numStudents) {
  cout<<"\nEnter Student ID: ";
  isnum(students[numStudents].studentID);
  cout<<"\nEnter First Name: ";
  cin.ignore();
  cin.getline(students[numStudents].firstName, 50);
  cout<<"\nEnter Last Name: ";
  cin.getline(students[numStudents].lastName, 50);
  cout<<"\nEnter GPA: ";
  cin>>students[numStudents].GPA;
  numStudents++;

}
//Case 2 Function
void displayStudents(const student students[], int numStudents) {
  char fn[100], str1[100], str2[100];
  cout<<"Displaying all Students Inside The Database: \n";
  for(int i = 0; i < numStudents; i++) {
    strcpy(str1, students[i].firstName);
    strcpy(str2, students[i].lastName);
    strcat(str1," ");
    strcat(str1, str2);
    cout<<endl<<i+1<<". \tName: "<< str1 <<endl;
    cout<<"\tStudent's ID: " << students[i].studentID<<endl;
    cout<<"\tStudent's GPA: "<<students[i].GPA<<endl;
  }
}
//Case 3 Function
float calculateAverageGPA(const student students[], int numStudents) {
  float average = 0;
  for(int i = 0; i < numStudents; i++) {
    average += students[i].GPA;
  }
  average /= numStudents;
  return average;
}
//Case 4 Function
void findStudentsByLastName(const student students[], int numStudents, const char lastName[]) {
  for(int i = 0; i < numStudents; i++) {
    if(strcmp(students[i].lastName, lastName) == 0) {
      cout<<i+1<<"\n\tName: "<< students[i].firstName << " " << students[i].lastName<<endl;
      cout<<"\tStudent's ID" << students[i].studentID<<endl;
      cout<<"\tStudent's GPA: "<<students[i].GPA<<endl;
    }
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

int main() {
  int choice;
  student s[100];
  int i = 0;
  char ln[50];
  do {
  menu();
  choices_menu();
  InputValidation(choice);

  switch (choice) {
    case 1://Prompt the user to input details for a new student and store them in the array.
      addStudent(s, i);
      break;

    case 2://Display the details of all students in a tabular format.
      displayStudents(s, i);
      break;

    case 3://Calculate and return the average GPA of all students.
      cout<<"\nThe Overall Average GPA of all students is: " << calculateAverageGPA(s, i) <<endl;
      break;

    case 4://Display the details of students whose last name matches the input.
      cout<<"\nEnter student's Last Name"<<endl;
      cin.getline(ln, 50);
      findStudentsByLastName(s, i, ln);
      break;

    case 5://Exit
      cout<<"\nBye bye, Run the Program to try again."<<endl;
      break;

    default:

      cout<<"Something went wrong"<<endl;
      break;
  }

  } while (choice != 5);
  return 0;
}


