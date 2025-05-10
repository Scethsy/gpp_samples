#include <iostream>
using namespace std;

class Array1D {
  private:
    int capacity;
    int size;
    int *array;

  public:
    Array1D(int cap = 10) {
      capacity = cap;
      size = 0;
      array = new int[capacity];
    };

    ~Array1D(){ 
      delete [] array;
    };

    int GetSize();
    bool isEmpty() const;
    bool isFull() const;
    void InsertItem(int pos,int val);
    void RemoveItem(int pos);
    void AddItem(int val);
    void DisplayElements();
};

int Array1D::GetSize() {
  return size;
};

bool Array1D::isEmpty() const {
  return size == 0;
}

bool Array1D::isFull() const {
  return size == capacity;
}

void Array1D::InsertItem(int pos,int val) {
  if (isFull()) {
    cout << "Array is already full! Cannot insert item." << endl;
    return;
  } else if (pos < 0 || pos > size) {
    cout << "Invalid Position" << endl;
    return;
  } else {
    for (int i = size; i > pos; i--) {
      array[i] = array [i-1];
    }
    array[pos] = val;
    size++;
  }
}

void Array1D::RemoveItem(int pos) {
  if (pos < 0 || pos > size) {
    cout << "Invalid Position" << endl;
    return;
  } else {
    for (int i = pos; i < size - 1; ++i) {
      array[i] = array[i + 1];
    }
    size--;
  }
}

void Array1D::AddItem(int val) {
  if (isFull()) {
    cout << "Array is already full! Cannot add another item." << endl;
    return;
  } else {
    array[size++] = val;
  }
}

void Array1D::DisplayElements() {
  cout <<"Array Contents: ";
  for (int i = 0; i < size; i++) {
    cout <<array[i] << " ";
  }
  cout << endl;
}

int main() {
  Array1D arr(5);

  arr.AddItem(10);
  arr.AddItem(20);
  arr.AddItem(30);
  arr.DisplayElements();
  arr.InsertItem(1, 15);
  arr.DisplayElements();
  arr.AddItem(40);
  arr.DisplayElements();
  arr.AddItem(50);
  arr.RemoveItem(0);
  arr.DisplayElements();
  cout << "Array size: " << arr.GetSize() << endl;
  if (arr.isEmpty()) {
    cout << "Array is empty!" << endl;
  }
  else {
    cout << "Array is not empty!" << endl;
  }

  return 0;
}

