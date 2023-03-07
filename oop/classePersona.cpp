//pagina 207
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

class Studente: public Persona {
    protected:
        float media;
    public: 
        Studente(string no, string co, float me);
        void stampa();
        void setNome(string a);
        void setCognome(string a);
        ~Studente();
};

Studente::Studente(string no, string co, float me) : Persona(no, co){
    media = me;
}

void Studente::stampa(){
    cout << "Nome: " << nome <<
    endl << "Cognome: " << cognome <<
    endl << "Media: " << media;
}

void Studente::setNome(string a){
    nome = a;
}

void Studente::setCognome(string a){
    cognome = a;
}

Studente::~Studente(){
    cout << endl << "distruttore studente";
}

int main(){
    class Studente enricomelis("Enrico", "Melis", 8);
    enricomelis.stampa();

    cout << endl;
    return 0;
}