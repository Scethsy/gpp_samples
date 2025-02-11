#include <iostream>
#include <cstring>
#include <string>

using namespace std;


// Define the Student structure
struct Student {
	int studentID;
	char firstName[50];
	char lastName[50];
	float GPA;
};


// Function prototypes
void addStudent(Student students[], int &numStudents) {
	cout << "Enter student ID: ";
	cin >> students[numStudents].studentID;
	cout << "Enter first name: ";
	cin >> students[numStudents].firstName;
	cout << "Enter last name: ";
	cin >> students[numStudents].lastName;
	cout << "Enter GPA: ";
	cin >> students[numStudents].GPA;
	numStudents++;
}

//
void displayStudents(const Student students[], int numStudents) {
	cout << "Student ID\tFirst Name\tLast Name\tGPA" << endl;
	for (int i = 0; i < numStudents; i++) {
		cout << students[i].studentID << "\t\t" << students[i].firstName << "\t\t" << students[i].lastName << "\t\t" << students[i].GPA << endl;
	}
}

//
float calculateAverageGPA(const Student students[], int numStudents) {
	float totalGPA = 0;
	for (int i = 0; i < numStudents; i++) {
		totalGPA += students[i].GPA;
	}
	return totalGPA / numStudents;
}

//
void findStudentsByLastName(const Student students[], int numStudents, const char lastName[]) {
	cout << "Student ID\tFirst Name\tLast Name\tGPA" << endl;
	for (int i = 0; i < numStudents; i++) {
		if (strcmp(students[i].lastName, lastName) == 0) {
			cout << students[i].studentID << "\t\t" << students[i].firstName << "\t\t" << students[i].lastName << "\t\t" << students[i].GPA << endl;
		}
	}
}

// Start program
int main() {
	Student students[100];
	int numStudents = 0;
	int choice;
	char lastName[50];

	do {
		cout << "Student Database Management System" << endl;
		cout << "1. Add a student" << endl;
		cout << "2. Display all students" << endl;
		cout << "3. Calculate average GPA" << endl;
		cout << "4. Find students by last name" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			addStudent(students, numStudents);
			break;
		case 2:
			displayStudents(students, numStudents);
			break;
		case 3:
			cout << "Average GPA: " << calculateAverageGPA(students, numStudents) << endl;
			break;
		case 4:
			cout << "Enter last name: ";
			cin >> lastName;
			findStudentsByLastName(students, numStudents, lastName);
			break;
		case 5:
			cout << "Exiting program..." << endl;
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
		}
	} while (choice != 5);

	return 0;
}