#include <iostream>
#include <string>
using namespace std;

class Persona{
    protected:
        string nome;
        string cognome;
    public:
        Persona(string no, string co);
        void stampa();
        void setNome(string a);
        void setCognome(string a);
        ~Persona();
};

Persona::Persona(string no, string co){
    nome = no;
    cognome = co;
}

void Persona::stampa(){
    cout << "Nome: " << nome <<
    endl << "Cognome: " << cognome;
}

void Persona::setNome(string a){
    nome = a;
}

void Persona::setCognome(string a){
    cognome = a;
}

Persona::~Persona(){
    cout << endl << "distruttore persona";
}