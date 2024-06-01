#include <iostream>
using namespace std;
int main() {
    cout << "Hello world";
    int age;
    string name;
    cout << "What is your name";
    cin >> name;
    cout << "How old are you?";
    cin >> age;
    cout << "Your name is " << name << endl;
    cout << "You are " << age << " years old.";

    return 0;
}