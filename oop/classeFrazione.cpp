#include <iostream>
using namespace std;

class Frazione{
    private:
        int numeratore;
        int denominatore;

    public:
    /*
        costruttore: pubblico, non ha tipo di ritorno*, ha lo stesso nome della classe
        *ritorna un oggetto della classe

        Frazione(int n, int m);    <- costruttore
        setglobale(int n, int m);
    */
        void setNumeratore(int n);
        void setDenominatore(int n);
        int mcd(int a, int b);
        void semplifica();
        void stampa();
    /*
        ALT126Frazione();   <- distruttore, pulizia della memoria
    */
} f1;

/*
Frazione::Frazione(int n, int m){

}

void Frazione::setglobale(int n, int m){

}

Frazione::ALT126Frazione(){
    cout << endl << "sto distruggendo l'oggetto";
}
*/

void Frazione::setNumeratore(int n){
    numeratore = n;
}

void Frazione::setDenominatore(int n){
    denominatore = n;
}

int Frazione::mcd(int a, int b){
    int c, resto;
    if (b > a ) {
        c = a;
        a = b;
        b = c;      
    }
    do {
        resto = a % b;
        a = b;
        b = resto;
    } while (resto != 0);
    return a;
}

void Frazione::semplifica(){
    int min = mcd(numeratore, denominatore);
    numeratore = numeratore / min;
    denominatore = denominatore / min;
}

void Frazione::stampa(){
    semplifica();
    if(numeratore == 0){
        cout << numeratore;
    }
    else{
        if(denominatore != 1){
            cout << numeratore << " / " << denominatore;
        }
        else{
            cout << numeratore;
        }
    }
    
}

int main(){
    int num, den;
    cout << "inserire numeratore: ";
    cin >> num;
    do{
        cout << "inserire denominatore: ";
        cin >> den;
    } while (den == 0);
    

    f1.setNumeratore(num);
    f1.setDenominatore(den);


    f1.stampa();
    cout << endl;
    return 0;
}