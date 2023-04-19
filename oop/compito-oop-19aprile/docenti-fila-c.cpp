#include <iostream>
#include <string>
using namespace std;

const int DIM = 10;
/* 
si potrebbe inserire anche una dimensione a piacere, 
basterebbe chiederla nel main e poi passarla come parametro alle funzioni.
*/

class Docente {
    public:
        string nome;
        string cognome;
        string codice;
        int eta;
        
        Docente(string n, string c, string co, int e) {
            nome = n;
            cognome = c;
            codice = co;
            eta = e;
        }
        string getNome() { return nome; }
        string getCognome() { return cognome; }
        string getCodice() { return codice; }
        int getEta() { return eta; }
        ~Docente(){ cout << "distruttore."; }
};

class Universita {
    private: 
        Docente *d[DIM];
    public: 
        Universita(){}
        void setDocenti();
        void stampa();
        int etaMinima();
};

int main(){
    string nome, cognome, codice;
    int eta;

    Universita u;
    u.setDocenti();

    u.stampa();

    cout << "Fra i docenti inseriti, l\'eta minima e': " << u.etaMinima() << endl;

    cout << endl;
    return 0;
}

void Universita::setDocenti(){
    string n, c, co;
    int e;
    for(int i=0; i<DIM; i++){
        cout << "--- Docente" << i+1 << " ---" << endl;
        cout << "Inserire nome: ";
        cin >> n;
        cout << "Inserire cognome: ";
        cin >> c;
        cout << "Inserire codice: ";
        cin >> co;
        do {
            cout << "Inserire eta: ";
            cin >> e;
        } while(e < 0);
        
        d[i] = new Docente(n, c, co, e);
        cout << "Docente inserito." << endl << endl;
    }
}

void Universita::stampa(){
    for(int i=0; i<DIM; i++){
        cout << "Docente " << i+1 << endl;
        cout << "Nome: " << d[i]->nome << endl;
        cout << "Cognome: " << d[i]->cognome << endl;
        cout << "Codice: " << d[i]->codice << endl;
        cout << "Eta: " << d[i]->eta << endl;
        cout << endl;
    }
}

int Universita::etaMinima(){
    int min = d[0]-> eta;
    for(int i=0; i<DIM; i++){
        if(d[i]-> eta < min){
            min = d[i]-> eta;
        }
    }
    return min;
}