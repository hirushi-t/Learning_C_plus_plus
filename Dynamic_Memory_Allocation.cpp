#include <iostream>
#include <string>
using namespace std;

/*
Dynamic memory allocation
Allows us to allocate memory during run-time (as opposed to at compile time)
Also known as memory management in C++
*/

// new, delete are operators we use following operators

int main() {
    // Example 1
    // dynamically allocate memory 
    int* ptr = new int;

    // assign value to memory
    *ptr = 256;

    cout << ptr << endl;
    cout << *ptr << endl;

    // deallocate the memory
    delete ptr;

    /*
    This is known as a dangling pointer
    It still holds the memory address of the deallocated memory
    Accessing deallocated memory is undefined behaviour
    Memory is not immediately overwritten
    May work, may crash program, may print out gargage value
    To prevent accessing a dangling pointer, we use a nullptr
    Easier to debug than a dangling pointer 
    */

    ptr = nullptr;

    // Example 2
    string* name = new string;
    cout << "Give me a string variable: " ;
    getline(cin, *name);
    cout << *name << ", " << name << endl;
    delete name;
    name = nullptr;

    // Example 3
    int* marks = new int[5];
    cout << "Enter marks: " << endl;

    for (int i=0; i<5; ++i) {
        // Store value at allocated memory
        cin >> *(marks+i);
    }

    // free allocated memory
    delete[] marks;
    marks = nullptr;

    /*
    Example 4
    - Reallocating memory
    - allocate new memory using a new pointer
    - copy contents into new memory
    - deallocate memory assigned to original array
    - use the new dynamic array from that point
    */

}


