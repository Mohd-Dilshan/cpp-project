#include<iostream>
using namespace std;

int main () {
    int n = 4;

    for (int i  = 0; i <n; i++) {
        for (int j = 0; j<i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }


    int m = 4;
    for (int k = 0; k<m; k++) {
        for (int l = 0; l<k+1; l++) {
            cout << k+1;
        }

        cout << endl;
    }

    return 0;
}