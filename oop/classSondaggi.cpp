/*
manca: 
- setVoti();
- test con classe Liste
*/

#include <iostream>
using namespace std;

class Sondaggi {
    protected:
        int n_intervistati;
    public:
        Sondaggi(int n);
        ~Sondaggi() {cout << "distruttore.";}
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
    public:
        Liste(int n, int voti1, int voti2);
    };

Liste::Liste(int n, int voti1, int voti2) : Sondaggi(n) {
    voti_lista1 = voti1;
    voti_lista2 = voti2;
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
    cout << "la percentuale di si: " << sondaggio_referendum_1.getPerc("si") << "%";

    sondaggio_referendum_1.setVoti(intervistati-8, 10);
    cout << endl << "la percentuale di si: " << sondaggio_referendum_1.getPerc("si") << "%";

    cout << endl << endl;
    return 0;
}

