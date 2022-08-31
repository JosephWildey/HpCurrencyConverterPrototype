
# This class takes in amounts of Harry Potter currency and serves as a base class
class HPCurrency:

    usrGal = 0
    usrSick = 0
    usrKnut = 0

    def __init__(self, usrG, usrS, usrK):
        self.usrGal = usrG
        self.usrSick = usrS
        self.usrKnut = usrK

    def currency(self):
        print("There are two types of conversion into USD")

# This is a child class that converts HP money into USD using a Reddit calculation
class HPRedditConversion(HPCurrency):

    redditGal = 0
    redditSick = 0
    redditKnut = 0

    def __init__(self, HPCurrency):
        self.redditGal = HPCurrency.usrGal * 25
        self.redditSick = HPCurrency.usrSick * 1.5
        self.redditKnut = HPCurrency.usrKnut * 0.05

    def currency(self):
        print("USD In Gals: {}\nUSD in Sicks: {}\nUSD in Knuts: {}".format(self.redditGal,
                                                                           self.redditSick,
                                                                           self.redditKnut))

# This is a child class that converts HP Currency into USD using a Wikia calculation
class HPWikiaConversion(HPCurrency):

    redditGal = 0
    redditSick = 0
    redditKnut = 0

    def __init__(self, HPCurrency):
        self.redditGal = HPCurrency.usrGal * 7.35
        self.redditSick = HPCurrency.usrSick * 0.46
        self.redditKnut = HPCurrency.usrKnut * 0.02

    def currency(self):
        print("USD In Gals: {}\nUSD in Sicks: {}\nUSD in Knuts: {}".format(self.redditGal,
                                                                           self.redditSick,
                                                                           self.redditKnut))

# This method basically does all the heavy lifting
def conversion():
    inputGal = 0.0
    inputSick = 0.0
    inputKnut = 0.0

    print("How many golden Galleons do you have?")
    inputGal = float(input())

    print("How many silver Sickles do you have?")
    inputSick = float(input())

    print("How many Bronze Knuts do you have?")
    inputKnut = float(input())

    Money = HPCurrency(inputGal, inputSick, inputKnut)

    print("Please enter either Reddit or Wikia for conversion method")

    usrChoice = input()

    if usrChoice == 'Reddit':
        Conversion = HPRedditConversion(Money)
        print(Conversion.currency())
    else:
        Conversion = HPWikiaConversion(Money)
        print(Conversion.currency())

# Press the green button in the gutter to run the script.
if __name__ == '__main__':

    conversion()

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
