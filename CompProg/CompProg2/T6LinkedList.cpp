#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

void isnum(int &x) {
  while (true) {
    if (!(cin >> x)) {
      cout << "Error! Invalid input. Please enter a valid integer number.\n";
      cin.clear();
      cin.ignore(1214, '\n');
      continue;
    } else if (x <= 0) {
      cout << "Error! Please enter a valid number of nodes: \n";
      cin.clear();
      cin.ignore(1214, '\n');
      continue;
    } else {
      break;
    }
  }
}

void isint(int &x) {
  while (!(cin >> x)) {
    cout << "Error! Invalid input. Please enter a valid integer number.\n";
    cin.clear();
    cin.ignore(1214, '\n');
  }
}

int main() {
  int x;
  cout << "Enter number of nodes: ";
  isnum(x);

  Node *head = nullptr, *tail = nullptr;

  for (int i = 0; i < x; i++) {
    int n;
    cout << "Enter a number for " << x - i << " more nodes: \n";
    isint(n);

    Node* newNode = new Node();
    newNode->data = n;
    newNode->next = nullptr;

    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  cout << "The Linked List's value/s:\n";
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;

  return 0;
}
