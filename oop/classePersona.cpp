//pagina 207
#include <iostream>
#include <string>
using namespace std;

// classe persona

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

// classe studente

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

// classe sportivo 

class Sportivo : public Persona {
    protected:
        string sport;
    public: 
        Sportivo(string no, string co, string sp);
        void stampa();
        ~Sportivo();
};

Sportivo::Sportivo(string no, string co, string sp) : Persona(no, co){
    sport = sp;
}

void Sportivo::stampa(){
    cout << "Nome: " << nome <<
    endl << "Cognome: " << cognome <<
    endl << "Sport: " << sport;
}

Sportivo::~Sportivo(){
    cout << endl << "distruttore sportivo";
}

// classe calciatore

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

int main(){
    string nome, cognome, sport, squadra, ruolo;
    cout << "inserire nome: ";
    cin >> nome;
    cout << "inserire cognome: ";
    cin >> cognome;
    cout << "inserire sport: ";
    cin >> sport;
    cout << "inserire squadra: ";
    cin >> squadra;
    cout << "inserire ruolo: ";
    cin >> ruolo;

    class Calciatore primo(nome, cognome, sport, squadra, ruolo);
    cout << endl;

    primo.stampa();
    cout << endl;
    return 0;
}