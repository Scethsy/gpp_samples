#include <iostream>
#include <cstring>

using namespace std;

// Define the Item structure
struct Item {
  int itemID;
  char itemName[50];
  int quantity;
  float price;
};

// Function prototypes
void addItem(Item items[], int &numItems) {
  cout << "Enter item ID: ";
  cin >> items[numItems].itemID;
  cout << "Enter item name: ";
  cin >> items[numItems].itemName;
  cout << "Enter quantity: ";
  cin >> items[numItems].quantity;
  cout << "Enter price: ";
  cin >> items[numItems].price;
  numItems++;
}

//
void displayInventory(const Item items[], int numItems) {
  cout << "Item ID\tItem Name\tQuantity\tPrice" << endl;
  for (int i = 0; i < numItems; i++) {
    cout << items[i].itemID << "\t\t" << items[i].itemName << "\t\t" << items[i].quantity << "\t\t" << items[i].price << endl;
  }
}

//
float calculateTotalValue(const Item items[], int numItems) {
  float totalValue = 0;
  for (int i = 0; i < numItems; i++) {
    totalValue += items[i].quantity * items[i].price;
  }
  return totalValue;
}

//
void updateItemQuantity(Item items[], int numItems, int itemID, int newQuantity) {
  for (int i = 0; i < numItems; i++) {
    if (items[i].itemID == itemID) {
      items[i].quantity = newQuantity;
      break;
    }
  }
}

// Start program
int main() {
  Item items[100];
  int numItems = 0;
  int choice;
  int itemID;
  int newQuantity;

  do {
    cout << "1. Add an item" << endl;
    cout << "2. Display inventory" << endl;
    cout << "3. Calculate total value" << endl;
    cout << "4. Update item quantity" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        addItem(items, numItems);
        break;
      case 2:
        displayInventory(items, numItems);
        break;
      case 3:
        cout << "Total value: " << calculateTotalValue(items, numItems) << endl;
        break;
      case 4:
        cout << "Enter item ID: ";
        cin >> itemID;
        cout << "Enter new quantity: ";
        cin >> newQuantity;
        updateItemQuantity(items, numItems, itemID, newQuantity);
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
