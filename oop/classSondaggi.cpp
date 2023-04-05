#include <iostream>
using namespace std;

class Sondaggi {
    protected:
        int n_intervistati;
    public:
        Sondaggi(int n);
        ~Sondaggi() { cout << "distruttore."; }
        int getIntervistati() { return n_intervistati; }
    };

Sondaggi::Sondaggi(int n){
    n_intervistati = n;
}

class Referendum : public Sondaggi {
    protected:
        int n_si;
        int n_no;
    public:
        Referendum(int n, int si, int no);
        float getPerc(string richiesta);
        void setVoti(int nuovo_si, int nuovo_no);
    };

Referendum::Referendum(int n, int si, int no): Sondaggi(n){
    n_si = si;
    n_no = no;
}

float Referendum::getPerc(string richiesta){
    if(richiesta == "si"){
        return n_si * 100 / n_intervistati;
    }
    else {
        if(richiesta == "no"){
            return n_no * 100 / n_intervistati;
        }
        else{
            cout << "richiesta invalida";
            return 0;

        }
    }
}

void Referendum::setVoti(int nuovo_si, int nuovo_no){
    if(nuovo_si + nuovo_no == n_intervistati){
        n_si = nuovo_si;
        n_no = nuovo_no;
    }
    else {
        cout << "i voti inseriti sono invalidi. si (" << nuovo_si << ") + no (" << nuovo_no << ") != intervistati (" << n_intervistati << ").";
    }
}

class Liste : public Sondaggi {
    protected:
        int voti_lista1;
        int voti_lista2;
        int voti_lista3;
    public:
        Liste(int n, int voti1, int voti2, int voti3);
        void setVoti(int nuovo_1, int nuovo_2, int nuovo_3);
    };

Liste::Liste(int n, int voti1, int voti2, int voti3) : Sondaggi(n) {
    voti_lista1 = voti1;
    voti_lista2 = voti2;
    voti_lista3 = voti3;
}

void Liste::setVoti(int nuovo_1, int nuovo_2, int nuovo_3){
    if(nuovo_1 + nuovo_2 + nuovo_3 == n_intervistati){
        voti_lista1 = nuovo_1;
        voti_lista2 = nuovo_2;
        voti_lista3 = nuovo_3;
    }
    else {
        cout << "Voti forniti invalidi, la somma non da il numero totale di intervistrati (" << n_intervistati << ").";
    }
}

int main() {
    int intervistati, voti_si, voti_no;

    do {
        cout << "inserire numero di intervistati: ";
        cin >> intervistati;
    } while(intervistati < 1);

    do {
        cout << "inserire voti si: ";
        cin >> voti_si;
        cout << "inserire voti no: ";
        cin >> voti_no;
    } while(voti_no + voti_si != intervistati);

    Referendum sondaggio_referendum_1(intervistati, voti_si, voti_no);
    cout << endl << "percentuale di si: " << sondaggio_referendum_1.getPerc("si") << "%" << 
    endl << "percentuale di no: " << sondaggio_referendum_1.getPerc("no") << "%";

    int voto_nuovo_si, voto_nuovo_no;
    cout << endl << endl << "inserire i nuovi voti per il referendum: " << endl;
    do {
        cout << "si: ";
        cin >> voto_nuovo_si;
        cout << "no: ";
        cin >> voto_nuovo_no;
    } while(voto_nuovo_si + voto_nuovo_no != sondaggio_referendum_1.getIntervistati());

    sondaggio_referendum_1.setVoti(voto_nuovo_si, voto_nuovo_no);
    cout << endl << "percentuale nuova di si: " << sondaggio_referendum_1.getPerc("si") << "%" << 
    endl << "percentuale nuova di no: " << sondaggio_referendum_1.getPerc("no") << "%";

    cout << endl << endl;
    return 0;
}