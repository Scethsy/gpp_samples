#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>
#include <cctype>

using namespace std;

// Structure for Student
struct Student {
    string studentID;
    string fullName;
    string birthday;
    string address;
    string gender;
    string degreeProgram;
    int yearLevel;
};

// Structure for Node in the Linked List
struct Node {
    Student student;
    Node* next;
};

// Head of the Linked List
Node* head = nullptr;

// Function to Insert a Student into the Linked List
void insertStudent(const Student& newStudent) {
    Node* newNode = new Node;
    newNode->student = newStudent;
    newNode->next = head;
    head = newNode;
}

// Function to Save the Linked List to a File
void saveToFile(const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Error opening file for writing!\n";
        return;
    }
    Node* temp = head;
    while (temp) {
        file << temp->student.studentID << "|"
             << temp->student.fullName << "|"
             << temp->student.birthday << "|"
             << temp->student.address << "|"
             << temp->student.gender << "|"
             << temp->student.degreeProgram << "|"
             << temp->student.yearLevel << "\n";
        temp = temp->next;
    }
    file.close();
}

// Function to Load Student Records from a File into the Linked List
void loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "No existing records found. Starting fresh.\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        Student s;
        getline(ss, s.studentID, '|');
        getline(ss, s.fullName, '|');
        getline(ss, s.birthday, '|');
        getline(ss, s.address, '|');
        getline(ss, s.gender, '|');
        getline(ss, s.degreeProgram, '|');
        ss >> s.yearLevel;

        insertStudent(s);
    }
    file.close();
}

// Function to Add a Student (Both to Linked List and File)
void addRecord(const Student& newStudent, const string& filename) {
    insertStudent(newStudent); 
    saveToFile(filename);       
    cout << "Record added successfully!" << endl;
}

// Function to Display All Students from the Linked List
void displayAllRecords() {
    Node* temp = head;
    bool found = false;

    cout << "Student Records:\n";
    while (temp) {
        if (temp->student.studentID.empty()) { // Skip empty or invalid records
            temp = temp->next;
            continue;
        }

        cout << "\nStudent ID: " << temp->student.studentID;
        cout << "\nFull Name: " << temp->student.fullName;
        cout << "\nBirthday: " << temp->student.birthday;
        cout << "\nAddress: " << temp->student.address;
        cout << "\nGender: " << temp->student.gender;
        cout << "\nDegree Program: " << temp->student.degreeProgram;
        cout << "\nYear Level: " << temp->student.yearLevel;
        cout << "\n----------------------";
        
        found = true; 
        temp = temp->next;
    }

    if (!found) {  
        cout << "No student records to display!\n";
    }
}


// Function to Search for a Student by ID in the Linked List
void searchRecord(const string& searchID) {
    Node* temp = head;
    bool found = false;
    while (temp) {
        if (temp->student.studentID == searchID) {
            cout << "\nStudent Found!";
            cout << "\nStudent ID: " << temp->student.studentID;
            cout << "\nFull Name: " << temp->student.fullName;
            cout << "\nBirthday: " << temp->student.birthday;
            cout << "\nAddress: " << temp->student.address;
            cout << "\nGender: " << temp->student.gender;
            cout << "\nDegree Program: " << temp->student.degreeProgram;
            cout << "\nYear Level: " << temp->student.yearLevel;
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (!found){
         cout << "Student ID " << searchID << " not found!\n";
    }
    }
   

// Function to Display a Specific Student by ID
void displaySpecificRecord(const string& studentID) {
    Node* temp = head;
    while (temp) {
        if (temp->student.studentID == studentID) {
            cout << "\nStudent ID: " << temp->student.studentID;
            cout << "\nFull Name: " << temp->student.fullName;
            cout << "\nBirthday: " << temp->student.birthday;
            cout << "\nAddress: " << temp->student.address;
            cout << "\nGender: " << temp->student.gender;
            cout << "\nDegree Program: " << temp->student.degreeProgram;
            cout << "\nYear Level: " << temp->student.yearLevel;
            cout << "\n----------------------";
            return;
        }
        temp = temp->next;
    }
    cout << "Student ID \"" << studentID << "\" not found!\n";
}

// Function to Delete a Student by ID from the Linked List
void deleteRecord(const string& studentID, const string& filename) {
    Node* temp = head, *prev = nullptr;
    
    while (temp && temp->student.studentID != studentID) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {
        cout << "Student ID \"" << studentID << "\" not found!\n";
        return;
    }

    if (!prev) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
    saveToFile(filename);  // Save changes to file
    cout << "Student ID " << studentID << " deleted successfully!\n";
}

Student userInput() {
    Student s;
    cin.ignore();

    // Validate Student ID (Only numbers)
    cout << "Enter Student ID (numbers only): ";
    while (true) {
        getline(cin, s.studentID);
        bool isValid = true;
        for (char c : s.studentID) {
            if (!isdigit(c)) {
                isValid = false;
                break;
            }
        }
        if (isValid && !s.studentID.empty()) break;
        cout << "Invalid input! Student ID must contain numbers only. Try again: ";
    }

    // Validate Full Name (Only letters and spaces)
    cout << "Enter Full Name: ";
    while (true) {
        getline(cin, s.fullName);
        bool isValid = true;
        for (char c : s.fullName) {
            if (!isalpha(c) && !isspace(c)) {
                isValid = false;
                break;
            }
        }
        if (isValid && !s.fullName.empty()) break;
        cout << "Invalid input! Full Name must contain letters only. Try again: ";
    }

    // Validate Birthday (YYYY-MM-DD format)
    cout << "Enter Birthday (YYYY-MM-DD): ";
    while (true) {
        getline(cin, s.birthday);
        if (s.birthday.length() == 10 && s.birthday[4] == '-' && s.birthday[7] == '-') {
            bool isValid = true;
            for (int i = 0; i < s.birthday.length(); i++) {
                if (i == 4 || i == 7) continue;  // Skip '-' characters
                if (!isdigit(s.birthday[i])) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) break;
        }
        cout << "Invalid format! Use YYYY-MM-DD. Try again: ";
    }

    // Validate Address (Cannot be empty)
    cout << "Enter Address: ";
    while (true) {
        getline(cin, s.address);
        if (!s.address.empty()) break;
        cout << "Address cannot be empty. Try again: ";
    }

    // Validate Gender (Must be "Male" or "Female")
    cout << "Enter Gender (Male/Female): ";
    while (true) {
        getline(cin, s.gender);
        if (s.gender == "Male" || s.gender == "Female") break;
        cout << "Invalid gender! Type 'Male' or 'Female': ";
    }

    // Validate Degree Program (Only letters and spaces)
    cout << "Enter Degree Program: ";
    while (true) {
        getline(cin, s.degreeProgram);
        bool isValid = true;
        for (char c : s.degreeProgram) {
            if (!isalpha(c) && !isspace(c)) {
                isValid = false;
                break;
            }
        }
        if (isValid && !s.degreeProgram.empty()) break;
        cout << "Invalid input! Degree Program must contain letters only. Try again: ";
    }

    // Validate Year Level (Must be a positive number)
    cout << "Enter Year Level (Number only): ";
    while (!(cin >> s.yearLevel && s.yearLevel > 0)) {
        cout << "Invalid input! Enter a valid year level: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(); // Clear input buffer

    return s;
}

// Main Function
int main() {
    string filename = "StudentInformationSystem.txt";
    
    loadFromFile(filename);  // Load existing records into linked list
    
    while (true) {
        cout << "\n========== Group Marcolites Student Information System ==========\n";
        cout << "1. Add New Record\n";
        cout << "2. Search Record\n";
        cout << "3. Display All Records\n";
        cout << "4. Display a Specific Record\n";
        cout << "5. Delete Record\n";
        cout << "6. Exit\n";
        
        string choice;
        cout << "Type your selection here: ";
        cin >> choice;

        if (choice.length() != 1 || choice[0] < '1' || choice[0] > '6') {
            cout << "Invalid Input! Only enter a number between 1 and 6.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear bad input
            continue;
        }
    
        switch (choice[0]) {
            case '1':
                addRecord(userInput(), filename);
                break;
            case '2': {
                string searchID;
                cin.ignore();
                cout << "Enter Student ID to search: ";
                getline(cin, searchID);
                searchRecord(searchID);
                break;
            }
            case '3':
                displayAllRecords();
                break;
            case '4': {
                string studentID;
                cin.ignore();
                cout << "Enter Student ID to display: ";
                getline(cin, studentID);
                displaySpecificRecord(studentID);
                break;
            }
            case '5': {
                string deleteID;
                cin.ignore();
                cout << "Enter Student ID to delete: ";
                getline(cin, deleteID);
                deleteRecord(deleteID, filename);
                break;
            }
            case '6':
                cout << "Exiting Program...\nDeveloped by Group Marcolites.\n";
                return 0;
            default:
                cout << "Invalid Input, only enter from 1-6.\n";
        }
    }
}