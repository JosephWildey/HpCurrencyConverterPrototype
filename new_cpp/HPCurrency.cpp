#include <iostream>

using namespace std;

// Base class from which the child classes will inherit their members and features
class HPCurrency {
    public:

        // Gets the amount of Gold Galleons the user has as an integer  
        int getGals(void) {
        
            return galsCount;
        }

       // Sets the amount of Gold Galleons the user has as an integer
        void setGals(int g) {
            
            galsCount = g;
        }

        // Gets the amount of Silver Sickles the user has
        int getSick(void) {

            return sickCount;
        }

        // Sets the amount of Silver Sickles a user has
        void setSick(int s) {
         
            sickCount = s;

        }

        // Gets the amount of Bronze Knuts a user has
        int getKnut(void) {

            return knutCount;
        
        }

        // Sets the amount of Bronze Knuts a user has
        void setKnut(int k) {

            knutCount = k;

        }

        // Provides a way to convert the currency into USD in the derivative/child classes
        float convert() {
            return (getGals() + getSick() + getKnut());
        }

    protected:
        // Instantiates the values of each currency in a limited scope
        int galsCount = 0;
        int sickCount = 0;
        int knutCount = 0;
};

// Derivative/child class of HP Currency that uses the Reddit conversion rate for converting HP currency into USD
class RedditHPCurrencyConversion : public HPCurrency {
     public:
         // Converts the HP Currency using Reddit's conversion rates into USD and returns the value as a decimal/float
         float convert() {
             return (getGals() * 25) + (getSick() * 1.5) + (getKnut() * 0.05);
         }
};

// Derivative/child class of HP Currency that uses a fan Wikia conversion rate for converting HP currency into USD
class WikiaHPCurrencyConversion : public HPCurrency {
    public:
        // Converts the HP Currency using a fan Wikia's conversion rates into USD and returns the value as a decimal/float
        float convert() {
            return (getGals() * 7.35) + (getSick() * 0.46) + (getKnut() * 0.02);
        }
};

int main() {
    // instantiate the variables for user input to 0 for later use
    int usrGals = 0, usrSicks = 0, usrKnuts = 0;

    // Get user input and record their inventory
    cout << "How many Golden Galleons do you have?" << endl;
    cin >> usrGals;
    
    cout << "How many Silver Sickles do you have?" << endl;
    cin >> usrSicks; 

    cout << "How many Bronze Knuts do you have?" << endl;
    cin >> usrKnuts;

    // Default constructor for RedditHPCurrencyConversion, so it does not take any arguments.
    RedditHPCurrencyConversion RedditMoney;

    // The setter methods were inherited from the base/parent class.
    RedditMoney.setGals(usrGals);
    RedditMoney.setSick(usrSicks);
    RedditMoney.setKnut(usrKnuts);

    WikiaHPCurrencyConversion WikiaMoney;

    WikiaMoney.setGals(usrGals);
    WikiaMoney.setSick(usrSicks);
    WikiaMoney.setKnut(usrKnuts);

    // Output the total conversion from the Reddit and Wikia methods
   cout << "Reddit conversion: " << RedditMoney.convert() << "\n" <<
        "Wikia Conversion: " << WikiaMoney.convert()  << endl;

    return 0;
}
