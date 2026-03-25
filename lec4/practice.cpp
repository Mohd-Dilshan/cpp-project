#include<iostream>
using namespace std;

int main () {

    // for (int i = 0; i<n-1 ; i++) {
    //     for (int j =1; j<=i+1; j++ ) {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    //inverted triangle

    int n = 4;
    int num = 1;

    for (int i = 0; i<n; i++){
        //spaces
        for (int j =0; j<i; j++) {
            cout << " ";
        }
        //NUMS
        for (int j =0; j<n-i; j++){
            cout << (i+1);
        }
        cout << endl;
    }

    return 0;
}