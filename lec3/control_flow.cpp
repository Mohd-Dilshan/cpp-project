//Control flow statements in C++

#include <iostream>
using namespace std;

int main (){

    // int age;
    // cout << "Enter your age ";
    // cin >> age;
    // if (age >= 18) {
    //     cout << "You are eligible for vote\n";
    // } else {
    //     cout << "You are not eligible for vote\n";
    // }
     
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n>=90) {
    //     cout << "A\n";
    // } else if (n >=80 && n < 90) {
    //     cout << "B\n";
    // } else if (n >= 70 && n < 80) {
    //     cout << "C\n";
    // } else if (n >= 60 && n < 70) {
    //     cout << "D\n";
    // } else {
    //     cout << "F\n";
    // }

    char ch;
    cout << "Enter a char : ";
    cin >> ch;

    // if ((ch) >= 'a'  &&  (ch) <= 'z') {
    //     cout << "Lowercase\n";
    // } else if ((ch) >= 'A' && (ch) <= 'Z'){
    //     cout << "Uppercase\n";
    // } else {
    //     cout << "Special character\n";
    // }

    if (ch >=65  && ch <= 90) { //implicit type conversion
        cout << "Uppercase\n";
    } else {
        cout << "Lowercase\n";
    }
     
    return 0;
}




