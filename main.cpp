#include <iostream>
#include <iomanip>

using namespace std;

// Conversion rates
const double BTC_CONVERSION = 0.00012;
const double CAD_CONVERSION = 1.33;
const double MXN_CONVERSION = 19.57;

// Convert dollars to bitcoin, handling the
// service fee.
double dollarsToBTC(double dollars) {
    double fee;
    // Calculate the service fee
    // BTC service fee:  5% of first $1000, 2.5% after
    if (dollars <= 1000) {
            // The service fee is only calculated as:
            // 5% * 1000
            fee = 0.05 * dollars;
    } else {
            // The service fee is calculated as:
            fee = 0.025 * dollars;
    }

    dollars -= fee;
    //Do the conversion
    dollars = 0.00012 * dollars;
    //Return the converted amount
    return dollars;
}

double dollarsToCAD(double dollars) {
    double fee;
    // Calculate the service fee
    // CAD service fee:  7% of first $1500, 5% after
    if (dollars <= 1500) {
            // The service fee is only calculated as:
            // 7% * 1500
            fee = 0.07 * dollars;
    } else {
            // The service fee is calculated as:
            fee = 0.05 * dollars;
    }

    dollars -= fee;
    //Do the conversion
    dollars = 1.33 * dollars;
    //Return the converted amount
    return dollars;
}

double dollarsToMXN(double dollars) {
    double fee;
    // Calculate the service fee
    // CAD service fee:  6% of first $1200, 3.5% after
    if (dollars <= 1200) {
            // The service fee is only calculated as:
            // 6% * 1200
            fee = 0.06 * dollars;
    } else {
            // The service fee is calculated as:
            fee = 0.035 * dollars;
    }

    dollars -= fee;
    //Do the conversion
    dollars = 19.57 * dollars;
    //Return the converted amount
    return dollars;
}

int main()
{
    double amount;

    cout << "Welcome to the Currency Exchange Service. " << endl;
    cout << "I can exchange dollars for bitcoin,"
         << " Canadian dollars, or Mexican pesos." << endl;

    while (true) {
        cout << "Please input the amount in USD to "
             << "exchange (-1 to quit): ";
        cin >> amount;
        if (amount == -1)
            break;

        cout << fixed << setprecision(2) << endl;
        cout << "$" << amount << " can be exchanged for: " << endl;
        cout << "BTC: " << dollarsToBTC(amount) << endl;
        cout << "CAD: " << dollarsToCAD(amount) << endl;
        cout << "MXN: " << dollarsToMXN(amount) << endl; 
    }

    cout << "Exiting..." << endl;
    return 0;
}
