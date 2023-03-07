#include <iostream>
#include <string>
using namespace std;
#include "sportivo.h"

class Calciatore : public Sportivo {
    protected:
        string squadra;
        string ruolo;
    public: 
        Calciatore(string no, string co, string sp, string sq, string ru);
        void stampa();
        ~Calciatore();

};

Calciatore::Calciatore(string no, string co, string sp, string sq, string ru): Sportivo(no, co, sp){
    squadra = sq;
    ruolo = ru;
}

void Calciatore::stampa(){
    cout << "Nome: " << nome <<
    endl << "Cognome: " << cognome <<
    endl << "Sport: " << sport <<
    endl << "Squadra: " << squadra << 
    endl << "Ruolo: " << ruolo;
}

Calciatore::~Calciatore(){
    cout << endl << "distruttore calciatore";
}