#include <iostream>

using namespace std;

class HPCurrency {
    public:

        int galCount = 0, sickCount = 0, knutCount = 0;

        float convert() {
            return (getGals() + getSick() + getKnut());
        }
};

class RedditHPCurrencyConversion : public HPCurrency {
    public:
        float convert() {
            return (getGals() * 25) + (getSick() * 1.5) + (getKnut() * 0.05);
        }
};

class WikiaHPCurrencyConversion : public HPCurrency {
    public:
        float convert() {
            return (getGals() * 7.35) + (getSick() * 0.46) + (getKnut() * 0.02);
        }
};

int main() {
    int usrGals = 0, usrSicks = 0, usrKnuts = 0;

    cout << "How many Golden Galleons do you have?" << endl;
    cin >> usrGals;
    
    cout << "How many Silver Sickles do you have?" << endl;
    cin >> usrSicks; 

    cout << "How many Bronze Knuts do you have?" << endl;
    cin >> usrKnuts;

    HPCurrency HPMoney;

    HPMoney.setGals(usrGals);
    HPMoney.setSick(usrSicks);
    HPMoney.setKnut(usrKnuts);

    RedditHPCurrencyConversion RedditMoney;

    RedditMoney.setGals(usrGals);
    RedditMoney.setSick(usrSicks);
    RedditMoney.setKnut(usrKnuts);

    WikiaHPCurrencyConversion WikiaMoney;

    WikiaMoney.setGals(usrGals);
    WikiaMoney.setSick(usrSicks);
    WikiaMoney.setKnut(usrKnuts);

   cout << "Base money: " << HPMoney.convert() << "\n"
        << "Reddit conversion: " << RedditMoney.convert() << "\n" <<
        "Wikia Conversion: " << WikiaMoney.convert()  << endl;

    return 0;
}
