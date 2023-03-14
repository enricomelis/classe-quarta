class Strumenti:
    def __init__(self, name):
        self.name = name

    def showName(self):
        print("Instrument name: " + self.name)
    
s1 = Strumenti("Violino")
s1.showName()

class Corda(Strumenti):
    def __init__(self, name, type):
        super().__init__(name)