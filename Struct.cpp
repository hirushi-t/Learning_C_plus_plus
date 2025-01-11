#include <iostream>
#include <string>
using namespace std;

// Struct
// Collection of variables, functions, and arrays

// There are different ways to create structures
// Method 1
struct Movie {
    string name;
    int tickets_sold;
};

// Method 2
// Notice, how there's a ; at the end
// Better practise
struct Person {
    string name;
    int age;
} person1, person2;

// Method 3
// Creating struct variables using an alias
typedef struct School {
    string name;
    int num_students;
} sch;

int main() {
    // Method 1
    struct Movie movie1;
    struct Movie movie2;
    movie1.name = "Interstellar";
    movie2.name = "Zero Dark Thirty";
    movie1.tickets_sold = 20;
    movie2.tickets_sold = 10;
    cout << movie1.name << " sold " << movie1.tickets_sold << " tickets." << endl;
    cout << movie2.name << " sold " << movie2.tickets_sold << " tickets." << endl;

    // we can also initialise variables on 1 line
    // We also don't need to define the struct keyword
    Movie movie3 = {"Life of Pi", 50};
    cout << movie3.name << " sold " << movie3.tickets_sold << " tickets." << endl;

    // Method 2
    person1.age = 25;
    person2.age = 30;
    person1.name = "John";
    person2.name = "Lucy";
    cout << person1.name << " is " << person1.age << " years old." << endl;
    cout << person2.name << " is " << person2.age << " years old." << endl;  

    // Initialise struct variable with inputs
    string your_name;
    int your_age;
    cout << "What is your name?" << endl;
    getline(cin, your_name);
    cout << "What is your age?" << endl;
    cin >> your_age;
    struct Person person3 = {your_name, your_age};
    cout << endl;
    cout << person3.name << " is " << person3.age << " years old." << endl; 

    // Method 3
}
