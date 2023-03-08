#include <iostream>
#include <string>
using namespace std;
#include "persona.h"

class Sportivo : public Persona {
    protected:
        string sport;
    public: 
        Sportivo(string no, string co, string sp);
        void stampa();
};

Sportivo::Sportivo(string no, string co, string sp) : Persona(no, co){
    sport = sp;
}

void Sportivo::stampa(){
    cout << "Nome: " << nome <<
    endl << "Cognome: " << cognome <<
    endl << "Sport: " << sport;
}
