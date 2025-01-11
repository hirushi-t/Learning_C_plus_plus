#include <iostream>
using namespace std;

// We can have functions in our structures
struct Salary {
    double income;
    double tax;

    double total_salary() {
        double total = income - tax;
        return total;
    }
};

struct Spending {
    double clothes;
    double bills;
    double food;
};

// We can also have a structure as an argument of a function
string find_largest_expense(struct Spending spending) {
    if ((spending.clothes > spending.bills) && (spending.clothes > spending.food)) {
        return "clothes";
    }
    else if ((spending.bills > spending.clothes) && (spending.bills > spending.food)) {
        return "bills";
    }
    else {
        return "food";
    }
}

int main() {
    Salary salary1 = {1000, 350.50};
    cout << "Total Salary: " << salary1.total_salary() << endl;

    Spending spending = {100, 500, 20};
    cout << "Largest expense is " << find_largest_expense(spending);
}
