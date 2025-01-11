#include <iostream>
using namespace std;

int main() {
    int nums[4] = {10,20,30,40};
    cout << '\n';

    // Note how each memory address has a difference of 4 bytes
    // Because int types have a size of 4 bytes
    for (int i=0; i<4; ++i) {
        cout << i << "th index address: " << &nums[i] << endl;
    }

    // When you print out the array, you get the address of the 1st element
    // nums = &nums[0]
    // Array names decay (gets converted) to pointers 
    // Pointers are used to access elements of the array
    // This is why the array address is the 1st element address
    cout << '\n';
    cout << "Array address: " << &nums << endl;
    cout << nums << endl;

    // This means we can access the first element using *(numbers)
    // Second element is *(numbers+1)
    cout << '\n';
    cout << "1st element: " << *nums << endl;
    cout << "2nd element: " << *(nums+1) << endl;
    cout << "3rd element: " << *(nums+2) << endl; 
}















