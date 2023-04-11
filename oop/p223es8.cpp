#include <iostream>
#include <string>
using namespace std;

class Pedaggio {
    protected:
        string tipo; // "festivo", "feriale"
        float prezzo;
    public:
        Pedaggio(string type, float price){
            tipo = type;
            prezzo = price;
        }
        string getTipo(){ return tipo; }
        float getPrezzo() { return prezzo; }
        void setTipo(string nuovo) { tipo = nuovo; }
        void setPrezzo(float nuovo) { prezzo = nuovo; }
        ~Pedaggio(){ cout << "distruttore. "; }
};

class Casello : public Pedaggio {
    protected: 
        string mezzo; //usato nel moltiplicatore del prezzo in base al mezzo
        float percorso; //km percorsi
    public:
        Casello(string type, float price, string vehicle, float road) : Pedaggio(type, price){
            mezzo = vehicle;
            percorso = road;
        }
        string getMezzo() { return mezzo; }
        float getPercorso() { return percorso; }
        void setMezzo(string nuovo) { mezzo = nuovo; }
        void setPercorso(float nuovo) { percorso = nuovo; }

        float calcolaScontrino();
};

float Casello::calcolaScontrino(){
    float moltiplicatore = 0;
    if(mezzo == "ciclomotore"){
        moltiplicatore = 1.5;
    }
    else {
        if(mezzo == "automobile"){
            moltiplicatore = 2.0;
        }
        else {
            if(mezzo == "pesante"){
                moltiplicatore = 2.5;
            }
        }
    }
    return prezzo + percorso * moltiplicatore;
}


int main(){
    string tipo_casello, mezzo_richiesta;
    float prezzo_casello, prezzo_casello_calcolato, percorso_richiesta;

    // richiesta del giorno, se feriale il prezzo aumenta di 1.5€ altrimenti di 1€.
    do {
        cout << "inserire il tipo di casello (festivo / feriale): ";
        cin >> tipo_casello;
    } while(tipo_casello != "feriale" && tipo_casello != "festivo");

    // inserimento del prezzo base al quale viene aggiunto il festivo/feriale.
    do {
        cout << "inserire il prezzo base del casello: ";
        cin >> prezzo_casello;
    } while (prezzo_casello < 0);

    // calcolo dell'aumento di prezzo per poterlo inserire.
    if (tipo_casello == "festivo"){
        prezzo_casello_calcolato = prezzo_casello + 1;
    }
    else {
        prezzo_casello_calcolato = prezzo_casello + 1.5;
    }

    // inserimento del mezzo, hanno rispettivamente un moltiplicatore di 1.5x 2.0x 2.5x.
    do {
        cout << "inserire il tipo di mezzo (ciclomotore / automobile / pesante): ";
        cin >> mezzo_richiesta;
    } while(mezzo_richiesta != "ciclomotore" && mezzo_richiesta != "automobile" && mezzo_richiesta != "pesante");

    // inserimento dei km percorsi che verranno moltiplicati in base al mezzo.
    do {
        cout << "inserire lo spazio percorso in km: ";
        cin >> percorso_richiesta;
    } while(percorso_richiesta < 0);

    Casello primo_scontrino(tipo_casello, prezzo_casello_calcolato, mezzo_richiesta, percorso_richiesta);

    cout << endl << "-------------" << endl;
    cout << "Con i dati forniti, lo scontrino ammonta a " << primo_scontrino.calcolaScontrino() << " euro.";

    cout << endl << endl;
    return 0;
}