#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

struct Employee {
  int employeeID;
  char name[100];
  float salary;
};

// Function prototypes
void addEmployee(Employee employees[], int &numEmployees) {
  cout << "Enter employee ID: ";
  cin >> employees[numEmployees].employeeID;
  cout << "Enter employee name: ";
  cin >> employees[numEmployees].name;
  cout << "Enter salary: ";
  cin >> employees[numEmployees].salary;
  numEmployees++;
}

//
void displayEmployees(const Employee employees[], int numEmployees) {
  cout << "Employee ID\tEmployee Name\tSalary" << endl;
  for (int i = 0; i < numEmployees; i++) {
    cout << employees[i].employeeID << "\t\t" << employees[i].name << "\t\t" << employees[i].salary << endl;
  }
}

//
void findEmployeeByID(const Employee employees[], int numEmployees, int employeeID) {
  cout << "Employee ID\tEmployee Name\tSalary" << endl;
  for (int i = 0; i < numEmployees; i++) {
    if (employees[i].employeeID == employeeID) {
      cout << employees[i].employeeID << "\t\t" << employees[i].name << "\t\t" << employees[i].salary << endl;
      return;
    }
  }
  cout << "Employee not found" << endl;
}

//
float calculateAverageSalary(const Employee employees[], int numEmployees) {
  float totalSalary = 0;
  for (int i = 0; i < numEmployees; i++) {
    totalSalary += employees[i].salary;
  }
  return totalSalary / numEmployees;
}

// Start program
int main() {
  Employee employees[100];
  int numEmployees = 0;
  int choice;
  int employeeID;

  do {
    cout << "Employee Record System" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display Employees" << endl;
    cout << "3. Find Employee by ID" << endl;
    cout << "4. Calculate Average Salary" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        addEmployee(employees, numEmployees);
        break;
      case 2:
        displayEmployees(employees, numEmployees);
        break;
      case 3:
        cout << "Enter employee ID: ";
        cin >> employeeID;
        findEmployeeByID(employees, numEmployees, employeeID);
        break;
      case 4:
        cout << "Average salary: " << calculateAverageSalary(employees, numEmployees) << endl;
        break;
      case 5:
        cout << "Exiting program..." << endl;
        break;
      default:
        cout << "Invalid choice" << endl;
    }
  } while (choice != 5);

  return 0;
}