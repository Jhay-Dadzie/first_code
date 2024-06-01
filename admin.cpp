#include <iostream>
using namespace std;
int main() {
    char update;
    int item;
    cout << "Do you want to update:(y/n)";
    cin >> update;
    cout << "Select number to update respective item";
    cout << endl << "1. Car \n2. Bicycle \n3. Aeroplane";
    cin >> item;
    if (item == 1) {
        cout << "You have successfully updated the car";
    }
    else if(item ==2 ) {
        cout << "You have successfully updated the bicycle";
    }
    else if(item == 3) {
        cout << "You have successfully updated the aeroplane";
    }
    else {
        cerr << "Invalid entry!";
    }
    return 0;
}