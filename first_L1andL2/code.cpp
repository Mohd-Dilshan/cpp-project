// #include <iostream>
// using namespace std;

// int main (){
//     return 0;
// }

//BoilerPlate code -comment
//This is the basic structure of a C++ program. It includes the necessary header file for input and output operations, and defines the main function which is the entry point of the program. The main function currently does nothing and returns 0, indicating that the program ended successfully.

#include <iostream>
using namespace std;
// Variables and Data Types in C++
// int main (){
//     int age = 25;
//     char grade = 'A';
//     float PI = 3.14f;
//     double price = 100.99;
//     bool isSafe =  false; 
//     cout << age << endl;
//     cout << grade << endl;
//     cout << PI << endl;
//     cout << price << endl;
//     cout << isSafe << endl; 
//     cout << sizeof(age) << endl; // size of int is 4 bytes
//     return 0;
// }

// Type Casting in C++

// int main (){
//     char grade = 'A';
//     int value = grade; // Implicit type casting
//     cout << value <<endl; // Output: 65 (ASCII value of 'A')

//     double price = 100.99;
//     int newPrice = (int) price; // Explicit type casting
//     cout << newPrice << endl;

//     return 0;
// }


// Taking input from the user in C++

// int main (){
//     double price ;
//     cout << "Enter your price :";
//     cin >> price;
//     cout << "Your PRICE is :" << price << endl;

//     return 0;
// }


//Opeators in C++
//1. Arithmetic Operators: +, -, *, /, %
// int main (){
//     int a =11, b = 5;
//     cout << "Sum=" << (a+b) << endl;
//     cout << "Diff = " << (a-b) << endl;
//     cout << "Product = " << (a*b) << endl;
//     cout << "Quotient = " << (a/b) << endl; //2
//     cout << "Modulo = " << (a%b) << endl; //1

//     cout << (5/  (double)2) << endl;
//     int m = (5/  (double)2); //2.5 but m is an integer so it will store only 2
//     cout << m << endl; //2
//     return 0;
// }

//2. Relational Operators: ==, !=, >, <, >=, <=
// int main (){

//     cout << (3 < 5 ) << endl; // true(1)
//     cout << (3 > 5) << endl; // false(0)
//     // cout << (3 <= 3) << endl;
//     cout << (3 != 3) << endl; // false(0)
//     return 0;
// }

//3. Logical Operators: &&, ||, !
// int main (){
//     cout << !(3 < 1) << endl;  // logical NOT
//     cout << ((3 < 1) || (3 < 5)) << endl; // logical OR
//     cout << ((3 > 1) && (3 < 1)) << endl; // logical AND
//     return 0;
// }

//Qs.Sum of two number

// int main (){
//     int x ,y;
//     cout << "Enter the value of x =";
//     cin >> x;
//     cout << "Enter the value of y =";
//     cin >> y;
//     int sum = x + y;
//     cout << (sum) << endl; 
//     return 0;
// }


// Unary operators: ++, --

// int main (){
//     cout << "Post increment" << endl;
//     int a = 10;
//     int b = a++; // Post-increment: b gets the value of a (10), then a is incremented to 11
//     cout << "Value of b: " << b << endl;
//     cout << "Value of a: " << a << endl;

//     cout << "Pre increment" << endl;
    
//     int c = 20;
//     int d = ++c;  // Pre-increment: c is incremented to 21, then d gets the value of c (21)
//     cout << "Value of d:" << d << endl;
//     cout << "Value of c: " << c << endl;

//     cout << "pre decrement" << endl;

//     int e = 30;
//     int f = --e; // Pre-decrement: e is decremented to 29, then f gets the value of e (29)
//     cout << "Value of f:" << f <<endl;
//     cout << "Value of e:" << e << endl;

//     cout << "Post decrement" << endl;

//     int g = 40;
//     int h = g--; // Post-decrement: h gets the value of g (40), then g is decremented to 39
//     cout << "Value of h: " << h << endl;
//     cout << "Value of g:" << g << endl;



//     return 0;
// }


//Qs. Caluculator using  +, -, *, /, % operators

int main (){
    int a, b;
    cout << "Enter the value of a =";
    cin >> a;
    cout << "Enter the value of b =";
    cin >> b;
    cout << "Sum =" << (a+b) << endl;
    cout << "Div =" << (a-b) << endl;
    cout << "Mul =" << (a*b) << endl;
    cout << "Quotient =" << (a/b) << endl;
    cout << "Modulo =" << (a%b) << endl;
    return 0;
}





