/*
dopo un seggio elettorale, raccoglimento dati
- numero di infervistati
- numero dei sì
- numero dei no
- relative percentuali
classe per sondaggio al referendum
derivare classe nel caso in cui il sondaggio riguardi le elezioni con scelta fra quattro liste
*/

#include <iostream>
#include <string>
using namespace std;

class Sondaggio {
    private: 
        int n_si;
        int n_no;
        float percentuale_si;
        float percentuale_no;
    protected: 
        int n_intervistati;
    public: 
        Sondaggio(int intervistati, int si, int no);
        int getSi();
        int getNo();
        float getPercentuale();
        ~Sondaggio();
};

Sondaggio::Sondaggio(int intervistati, int si, int no){
    n_intervistati = intervistati;
    n_si = si;
    n_no = no;
    percentuale_si = n_si * 100 / n_intervistati;
    percentuale_no = n_no * 100 / n_intervistati;
}

int Sondaggio::getSi(){return n_si;}
int Sondaggio::getNo(){return n_no;}

float Sondaggio::getPercentuale(){
    string richiesta;
    cout << "quale percentuale si vuole avere (si / no)? ";
    cin >> richiesta;

    if(richiesta == "si"){
        return percentuale_si;
    }
    else {
        if(richiesta == "no"){
            return percentuale_no;
        }
        else {
            cout << "richiesta invalida.";
        }
    }
}

Sondaggio::~Sondaggio(){
    cout << "distruttore sondaggio";
}

class Liste : public Sondaggio {
    protected: 
        int lista_1;
        int lista_2;
        int lista_3;
        int lista_4;
    public: 
        Liste(int intervistati, int si, int no, int l1, int l2, int l3, int l4);
        int getL1();
        int getL2();
        int getL3();
        int getL4();
};

Liste::Liste(int intervistati, int si, int no, int l1, int l2, int l3, int l4): Sondaggio(intervistati, si, no){
    lista_1 = l1;
    lista_2 = l2;
    lista_3 = l3;
    lista_4 = l4;
}

int Liste::getL1(){return lista_1;}
int Liste::getL2(){return lista_2;}
int Liste::getL3(){return lista_3;}
int Liste::getL4(){return lista_4;}

int main(){
    int numero_intervistati, numero_si, numero_no, voti_1, voti_2, voti_3, voti_4;

    cout << "Sondaggio: Referendum." << endl << "----------------" << endl;
    cout << "quanti sono gli intervistati? ";
    do{
        cin >> numero_intervistati;
    } while(numero_intervistati < 1);

    do{
        cout << "inserire voti \"si\": ";
        cin >> numero_si;
        cout << "inserire voti \"no\": ";
        cin >> numero_no;
    } while ((numero_si + numero_no) != numero_intervistati);

    Sondaggio primo_sondaggio(numero_intervistati, numero_si, numero_no);

    cout << endl << primo_sondaggio.getPercentuale() << "%";


    cout << endl << endl << "Sondaggio: 4 Liste." << endl << "----------------" << endl;
    cout << "quanti sono gli intervistati? ";
    do{
        cin >> numero_intervistati;
    } while(numero_intervistati < 1);

    do{
        cout << "inserire voti lista 1: ";
        cin >> voti_1;
        cout << "inserire voti lista 2: ";
        cin >> voti_2;
        cout << "inserire voti lista 3: ";
        cin >> voti_3;
        cout << "inserire voti lista 4: ";
        cin >> voti_4;
    } while ((voti_1 + voti_2 + voti_3 + voti_4) != numero_intervistati);

    Liste primo_sondaggio_liste(numero_intervistati, 0, 0, voti_1, voti_2, voti_3, voti_4);
    
    int richiesta = 4;
    /*
    do {
        cout << "di quale lista si vogliono sapere i voti? ";
        cin >> richiesta;
    } while(richiesta < 0 || richiesta > 4);
    */
    cout << "i voti della lista " << richiesta << " sono: " << primo_sondaggio_liste.getL4();




    cout << endl;
    return 0;
}
