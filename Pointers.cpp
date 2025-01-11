#include <iostream>
using namespace std;

// Pointer stores the address of a variable
// Access address by &var_name
// Declaring a pointer variable -> var_type* pt 
// Obtaining the variable at a specific memory address -> *pt (dereferencing a pointer)

// Pointers can be arguments or returned  from a function

int main() {
    // The pointer variable data type is the same as the variable data type
    int var1 = 10;
    int* pt1 = &var1;
    cout << "Value of variable 1: " << var1 << endl;
    cout << "Memory address of variable: " << pt1 << endl; 

    string var2 = "hello world";
    string* pt2 = &var2;
    cout << "Value of variable 2: " << var2 << endl;
    cout << "Memory address of variable: " << pt2 << endl; 
    cout << "Variable associated with this memory addess (pointer): " << *pt2 << endl;

    
    // Change the variable at a memory address
    // Note, that new data as to be the same type as the type of data already in that memory addressed (we declared when defining the ptr)
    // So var2 is now changed
    *pt2 = "bye world";
    cout << "New variable associated with this memory addess (pointer): " << var2 << endl;

    // Can also declare pointers like this
    int c, *pt_c;
    c = 200;
    pt_c = &c;
    cout << pt_c;
}