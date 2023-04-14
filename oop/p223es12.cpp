#include <iostream>
#include <string>
#include <map> //implementazione del dizionario (liste non indicizzate di coppie key: value)
using namespace std;

//definizione Classi

class Pizza {
    protected: 
        map <string, string> ingredienti;
        int calorieTotali;
        float prezzo;
    public:
        Pizza(int calTot, float price); 

        void getIngredienti();
        string getTipoIngrediente(string ingrediente) { return ingredienti[ingrediente]; }
        int getCalorieTotali() { return calorieTotali; }

        void setIngredienti();
        void setCalorieTotali(int nuovo) { calorieTotali = nuovo; }
        void setPrezzo(int nuovo) { prezzo = nuovo; }


        float getPrezzo() { return prezzo; }

        ~Pizza() { cout << "distruttore."; }
};

int main(){

    Pizza prima_pizza(800, 8);
    cout << "La prima pizza ha " << prima_pizza.getCalorieTotali() << " kcal." << endl << endl;
    prima_pizza.setIngredienti();

    cout << endl << "----------- Gli ingredienti e la loro origine -----------" << endl;
    prima_pizza.getIngredienti();


    cout << endl;
    return 0;
}

// definizione metodi classe Pizza

Pizza::Pizza(int calTot, float price){
    calorieTotali = calTot;
    prezzo = price;
}

void Pizza::getIngredienti(){
    for (auto element: ingredienti){
        cout << element.first << ": " << element.second << endl;
    }
}

void Pizza::setIngredienti(){
    bool stop = true;
    string ingrediente, tipo, risposta;

    while(stop){
        //ipotizzo inizialmente che gli input siano sempre coerenti, 
        // il controllo lo farò poi
        cout << "Inserire ingrediente: ";
        cin >> ingrediente;
        cout << "Inserire tipo ingrediente: ";
        cin >> tipo;

        ingredienti[ingrediente] = tipo;
        cout << "Continuare l\'inserimento? (s/n)";
        cin >> risposta;
        if(risposta == "n"){
            stop = false;
        }
    }
}
