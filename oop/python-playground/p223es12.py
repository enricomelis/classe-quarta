class Pizza:
    def __init__(self, name, toppings, kcal_tot, price):
        self.name = name
        self.toppings = toppings
        self.kcal_tot = kcal_tot
        self.price = price
    # get declarations
    def getName(self):
        return self.name
    def getToppings(self):
        return self.toppings
    def getKcal(self):
        return self.kcal_tot
    def getPrice(self):
        return self.price
    # set declarations
    def setName(self, name):
        self.name = name
    def setToppings(self, toppings):
        self.toppings = toppings
    def setKcal(self, kcal_tot):
        self.kcal_tot = kcal_tot
    def setPrice(self, price):
        self.price = price
    
def insertToppings(pizza, topping, origin):
    pizza.toppings.append(topping, origin)

name = "margherita"
totalCalories = 750
price = 6
toppings = {
    "pomodoro": "vegetable",
    "mozzarella": "animale",
    "basilico": "vegetable",
}

prima_pizza = Pizza (name, toppings, totalCalories, price)
print(prima_pizza.getToppings())