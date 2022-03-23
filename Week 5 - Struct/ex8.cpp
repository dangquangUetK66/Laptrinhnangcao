#include <iostream>

using namespace std;

struct customer {
    string name, account_number;
    int balance;

    customer () {}
    customer (string n, string an, int b) {
        name = n;
        account_number = an;
        balance = b;
    }
};

void func1 (int num_customers, customer array[]) {
    for (int i = 0; i < num_customers; i++) {
        if (array[i].balance < 200) {
            cout << "Customer " << array[i].name << " has a balance less than 200." << endl;
        }
    }
}

void func2 (int num_customers, customer array[]) {
    for (int i = 0; i < num_customers; i++) {
        if (array[i].balance > 1000) {
            array[i].balance = array[i].balance + 100;
            cout << "Customer " << array[i].name << " has the incremented balance of " << array[i].balance << "." << endl;        
        }
    }
}
int main () {
    int num_customers;
    cin >> num_customers;

    customer array[num_customers];
    for (int i = 0; i < num_customers; i++) {
        cin >> array[i].name >> array[i].account_number >> array[i].balance;
    }

    func1 (num_customers, array);

    cout << endl;

    func2 (num_customers, array);

    return 0;
}