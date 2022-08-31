
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

    def __init__(self, HPCurrency):
        self.usrGal = HPCurrency.usrGal * 25
        self.usrSick = HPCurrency.usrSick * 1.5
        self.usrKnut = HPCurrency.usrKnut * 0.05

    def currency(self):
        print("According to Reddit:\nUSD In Gals: {}\nUSD in Sicks: {}\nUSD in Knuts: {}".format(self.usrGal,
                                                                           self.usrSick,
                                                                           self.usrKnut))

# This is a child class that converts HP Currency into USD using a Wikia calculation
class HPWikiaConversion(HPCurrency):

    def __init__(self, HPCurrency):
        self.usrGal = HPCurrency.usrGal * 7.35
        self.usrSick = HPCurrency.usrSick * 0.46
        self.usrKnut = HPCurrency.usrKnut * 0.02

    def currency(self):
        print("According to the Wikia:\nUSD In Gals: {}\nUSD in Sicks: {}\nUSD in Knuts: {}".format(self.usrGal,
                                                                           self.usrSick,
                                                                           self.usrKnut))

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

    print("Input Reddit for Reddit conversion, Wikia conversion is the default")

    usrChoice = input().upper()

    if usrChoice == "REDDIT":
        Conversion = HPRedditConversion(Money)
        Conversion.currency()
    else:
        Conversion = HPWikiaConversion(Money)
        Conversion.currency()
