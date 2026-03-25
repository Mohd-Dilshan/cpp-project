#include<iostream>
using namespace std;

int main () {
    int n = 3;

    char ch = 'A';

    for (int i =0; i <n; i++) {
        for (int j = 0; j<n; j++) { //inner starts from 0 to n-1
            cout << ch;
            ch = ch +1;
        }
        cout << endl;
    }
    cout << "...End\n"<<endl;

    return 0;
}