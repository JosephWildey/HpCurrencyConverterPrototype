#include <iostream>

using namespace std;

double CurrencyConversion(char choice, int gal, int sick, int knut) {
    double usrGal, usrSick, usrKnut, usrVal;
    if(choice == 'r') {
        usrGal = (gal * 25);
        usrSick = (sick * 1.5);
        usrKnut = (knut * 0.05);
        usrVal = usrGal + usrSick + usrKnut;
    } else if (choice == 'w') {
        usrGal = (gal * 7.35);
        usrSick = (sick * 0.46);
        usrKnut = (knut * 0.02);
        usrVal = usrGal + usrSick + usrKnut;
    }
    return usrVal;
}

int main()
{
    char choice, anyKey;
    double usrGals, usrSicks, usrKnuts;
    cout << "This program will convert HP currency into USD." << endl;
    cout << "Do you prefer the Reddit or Wikia method? Please use r/w: " << endl;
    cin >> choice;
    cout << "How many Galleons do you have? " << endl;
    cin >> usrGals;
    cout << "How many Sickles do you have? " << endl;
    cin >> usrSicks;
    cout << "How many Knuts do you have? " << endl;
    cin >> usrKnuts;
    cout << "You have: " << "$" << CurrencyConversion(choice, usrGals, usrSicks, usrKnuts) << endl;
    cout << "Please press any key to quit.";
    cin >> anyKey;

    return 0;
}
