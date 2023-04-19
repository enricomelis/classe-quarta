//programma non concluso e non funzionante

#include <iostream>
#include <string>
using namespace std;

const int dim = 2;

class Docente {
    public: // i metodi da una riga di codice li dichiaro dentro per comodità
        string nome;
        string cognome;
        string codice;
        int eta;

        Docente(){}

        Docente(string no, string co, string cod, int et){
            nome = no;
            cognome = co;
            codice = cod;  
            eta = et;
        }

        string getNome() { return nome; }
        string getCognome() { return cognome; }
        string getCodice() { return codice; }
        int getEta() { return eta; }
        ~Docente() { cout << "distruttore. "; }
};

class Universita {
    public:
        Docente lista[dim];
        Universita() {}
        int etaMinima();
};

int main(){
    string nome, cognome, codice;
    int eta;

    Universita a();

    for(int i=0; i<dim; i++){
        // a.lista[i] = new Docente(nome, cognome, codice, eta);
        
    }

    cout << endl;
    return 0;
}

int Universita::etaMinima()
{
    int min = lista[0].eta;
    for(int i=0; i<dim; i++){
        if(lista[i].eta < min){
            min = lista[i].eta;
        }
    }
    return min;
}
