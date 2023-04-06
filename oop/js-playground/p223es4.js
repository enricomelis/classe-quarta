class Circus {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }

    get getName() { return this.name; }
    get getPrice() { return this.price; }
    
    set setName(newName) { this.name = newName; }
    set setPrice(newPrice) { this.price = newPrice; }
}

class Animals extends Circus {
    constructor(name, price, species, thoughness){
        super(name, price);
        this.species = species;
        this.thoughness = thoughness;
    }
    get getName() { return this.name; }
    get getPrice() { return this.price; }
    get getSpecies () { return this.species; }
    get getThoughness () { return this.thoughness; }
}

class Actors extends Circus {
    constructor(name, price, specialization){
        super(name, price);
        this.specialization = specialization;
    }
}



circoPrimo = new Circus("Melis", 12);
console.log(`The price of the ${circoPrimo.getName} Circus is ${circoPrimo.getPrice}€.`);

lukLion = new Animals("Luk", 300, "Lion", 10);
console.log(
    `The thoughest animal in the ${circoPrimo.getName} Circus is the ${lukLion.getSpecies} named ${lukLion.getName}, with a toughness of ${lukLion.getThoughness}/10.`);