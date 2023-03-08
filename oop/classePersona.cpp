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
    cout << endl << "distruttore";
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

// classe sportivo 

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

// classe calciatore

class Calciatore : public Sportivo {
    protected:
        string squadra;
        string ruolo;
    public: 
        Calciatore(string no, string co, string sp, string sq, string ru);
        void stampa();

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

int main(){
    string nome, cognome, sport, squadra, ruolo;

    cout << "Persona: " << endl;
    cout << "inserire nome: ";
    cin >> nome;
    cout << "inserire cognome: ";
    cin >> cognome;
    class Persona persona(nome, cognome);

    cout << endl << "Sportivo: " << endl;
    cout << "inserire nome: ";
    cin >> nome;
    cout << "inserire cognome: ";
    cin >> cognome;
    cout << "inserire sport: ";
    cin >> sport;
    class Sportivo sportivo(nome, cognome, sport);

    cout << endl << "Calciatore" << endl;
    cout << "inserire nome: ";
    cin >> nome;
    cout << "inserire cognome: ";
    cin >> cognome;
    sport = "calcio";
    cout << "inserire squadra: ";
    cin >> squadra;
    cout << "inserire ruolo: ";
    cin >> ruolo;
    class Calciatore calciatore(nome, cognome, sport, squadra, ruolo);
    
    cout << endl << "Persona: " << endl;
    persona.stampa();

    cout << endl << endl << "Sportivo: " << endl;
    sportivo.stampa();

    cout << endl << endl << "Calciatore: " << endl;
    calciatore.stampa();

    cout << endl;
    return 0;
}