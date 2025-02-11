#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "***************" << endl;
    cout << "STRING CONCATENATION" << endl;
    cout << "***************" << endl;

    cout << "Enter a first word (str1): ";
    cin.getline(str1, 100);

    cout << "Enter a second word (str2): ";
    cin.getline(str2, 100);

    strcat(str1, " ");
    strcat(str1, str2);

    cout << "new string value for str1: " << str1 << endl;

    return 0;
}
