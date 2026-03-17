#include<iostream>
using namespace std; 

int main () {
    int n;
    cout << "enter num = ";
    cin >> n;
    int oddSum = 0;

    for (int i=1; i<= n; i++) {
        if (i%2!= 0) {
            oddSum += i;
        }
    }
    cout << "Sum of odd nums = " << oddSum <<endl;
    
    return 0;
}
