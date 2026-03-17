#include<iostream>
using namespace std;
 int main () {
   int n = 50;
   int sum =0;
   

   // while (sum <= 3 ) {
   //    sum += 1;
   // }
   // cout << "Sum = " << sum << endl;
   for(int i = 1; i<=n; i++) {
      sum += i;
      if (i ==  5) {
         break;
      }
   }
   cout << "Sum = " << sum << endl;


   return 0; 
}