// -----------------------------------------------------------------------------
// Write a program for a subscription-based video service. 
// Read N users and the monthly fee for each user. If fee > 1000 mark the user as “Premium”. 
// Print total revenue and number of premium users. Use variables, loops, input/output and conditions.
// -----------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int N;          
    float fee;      
    float total = 0; // Total money collected
    int premium = 0; // How many users pay more than 1000

    cout << "Enter number of users: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Enter monthly fee: ";
        cin >> fee;

        total += fee;

        if (fee > 1000) {
            premium++;  
        }
    }

    cout << "Total Revenue = " << total << endl;
    cout << "Premium Users = " << premium << endl;

    return 0;
}