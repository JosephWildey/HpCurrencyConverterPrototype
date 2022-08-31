#include <iostream>

using namespace std;

class HPCurrency {
    public:

        int getGals(void) {
        
            return galsCount;
        }

        void setGals(int g) {
            
            galsCount = g;
        }

        int getSick(void) {

            return sickCount;
        }

        void setSick(int s) {
         
            sickCount = s;

        }

        int getKnut(void) {

            return knutCount;
        
        }

        void setKnut(int k) {

            knutCount = k;

        }

        float convert() {
            return (getGals() + getSick() + getKnut());
        }

    protected:
        int galsCount = 0;
        int sickCount = 0;
        int knutCount = 0;
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

    RedditHPCurrencyConversion RedditMoney;

    RedditMoney.setGals(usrGals);
    RedditMoney.setSick(usrSicks);
    RedditMoney.setKnut(usrKnuts);

    WikiaHPCurrencyConversion WikiaMoney;

    WikiaMoney.setGals(usrGals);
    WikiaMoney.setSick(usrSicks);
    WikiaMoney.setKnut(usrKnuts);

   cout << "Reddit conversion: " << RedditMoney.convert() << "\n" <<
        "Wikia Conversion: " << WikiaMoney.convert()  << endl;

    return 0;
}
