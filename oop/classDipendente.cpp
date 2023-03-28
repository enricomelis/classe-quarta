#include <iostream>
#include <string>
using namespace std;

class Dipendente {
protected: 
    string nome;
    string ruolo;
    float stipendio;
public:
    Dipendente(string no, string ru, float st);
    void setStipendio(float nuovoStipendio);
    void stampa();
    ~Dipendente();
};

Dipendente::Dipendente(string no, string ru, float st) {
    nome = no;
    ruolo = ru;
    stipendio = st;
}

void Dipendente::setStipendio(float nuovoStipendio) {
    stipendio = nuovoStipendio;
}

void Dipendente::stampa(){
    cout << "Nome: " << nome << 
    endl << "Ruolo: " << ruolo << 
    endl << "Stipendio: " << stipendio << " euro/ora";
}

Dipendente::~Dipendente() {
    cout << "distruttore dipendente";
}

class Dirigente : public Dipendente {
public: 
    Dirigente(string no, string ru, float st);
};

Dirigente::Dirigente(string no, string ru, float st) : Dipendente(no, ru, st) {}

class Impiegato : public Dipendente {
public: 
    Impiegato(string no, string ru, float st);
};

Impiegato::Impiegato(string no, string ru, float st) : Dipendente(no, ru, st) {}

class Operaio : public Dipendente {
public: 
    Operaio(string no, string ru, float st);
};

Operaio::Operaio(string no, string ru, float st) : Dipendente(no, ru, st) {}

int main() {
    string nome_dipendente;
    float stipendio_dipendente;
    float incremento_stipendio = 0.1;

    cout << "come si chiama il primo operario? ";
    cin >> nome_dipendente;
    cout << "quanto e' lo stipendio del primo operario? ";
    do {
        cin >> stipendio_dipendente;
    } while(stipendio_dipendente < 0);

    Operaio esempio(nome_dipendente, "operario", stipendio_dipendente);
    esempio.stampa();

    cout << endl << endl << "I dirigente hanno deciso di aumentare lo stipendio degli operai del " << incremento_stipendio * 100 << "%";
    esempio.setStipendio(stipendio_dipendente + stipendio_dipendente * incremento_stipendio);
    esempio.stampa();
    cout << endl;
    return 0;
}
