#include <iostream>
#include <string>
#include <map> //implementazione del dizionario (liste non indicizzate di coppie key: value)
using namespace std;

//definizione Classi

class Pizza {   
    protected: 
        string nome;
        map <string, string> ingredienti;
        int calorieTotali;
        float prezzo;
    public:
        Pizza(string name, int calTot, float price); 
        // tutte le get();
        void stampa(); // get globale
        void stampaIngredienti(); 
        int getCalorieTotali() { return calorieTotali; }
        float getPrezzo() { return prezzo; }
        string getNome() { return nome; }
        string getOrigineIngrediente(string ingrediente) { return ingredienti[ingrediente]; }
        // tutte le set();
        void setIngredienti();
        void removeIngrediente(string remove);
        void setCalorieTotali(int nuovo) { calorieTotali = nuovo; }
        void setPrezzo(int nuovo) { prezzo = nuovo; }
        ~Pizza() { cout << "distruttore."; }
};

int main(){
    int kcal_pizza, prezzo_pizza;
    string nome_pizza;

    cout << "Inserire nome della pizza: ";
    cin >> nome_pizza;

    do {
        cout << "Inserire calorie della pizza: ";
        cin >> kcal_pizza;
    } while(kcal_pizza < 0);

    do {
        cout << "Inserire prezzo della pizza: ";
        cin >> prezzo_pizza;
    } while(prezzo_pizza < 0);
    

    Pizza prima_pizza(nome_pizza, kcal_pizza, prezzo_pizza);
    prima_pizza.setIngredienti();

    string da_rimuovere;
    cout << "Inserire ingrediente da rimuovere: ";
    cin >> da_rimuovere;
    prima_pizza.removeIngrediente(da_rimuovere);

    prima_pizza.stampa();

    cout << endl << endl;
    prima_pizza.stampa();


    cout << endl;
    return 0;
}

// definizione metodi classe Pizza

Pizza::Pizza(string name, int calTot, float price){
    nome = name;
    calorieTotali = calTot;
    prezzo = price;
}

void Pizza::stampaIngredienti(){
    for (auto element: ingredienti){
        cout << element.first << " (" << element.second << ")" << endl;
    }
    // element.first = chiave, element.second = valore
}

void Pizza::setIngredienti(){
    bool stop = false;
    string ingrediente, origine;

    cout << "Inserimento ingredienti (ingrediente = 0 per terminare):  " << endl;
    while(!stop){
        cout << "Inserire ingrediente: ";
        cin >> ingrediente;

        if(ingrediente == "0"){
            stop = true;
        }
        else {
            cout << "Inserire origine ingrediente: ";
            cin >> origine;
            ingredienti[ingrediente] = origine;
        }
    }
}

void Pizza::removeIngrediente(string remove){
    ingredienti.erase(remove);
}

void Pizza::stampa(){
    cout << "-------- ";
    cout << "Pizza: " << nome << 
    endl << "Calorie: " << calorieTotali <<
    endl << "Prezzo: " << prezzo << " euro" <<
    endl << "Ingredienti: " << endl;
    stampaIngredienti();
}