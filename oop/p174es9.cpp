#include <iostream>
#include <string>
using namespace std;

class ContoCorrente{
    private:
        string nome;
        string codiceConto;
        float saldo;
    public:
        void set(string name, string code, float balance);
        float currentBalance();
} conto;

void ContoCorrente::set(string name, string code, float balance){
    nome = name;
    codiceConto = code;
    saldo = balance;
}

float ContoCorrente::currentBalance(){
    return saldo;
}

int main(){
    string nome, codice;
    float saldo;
    cout << "Inserire il nome del conto: ";
    cin >> nome;
    cout << "Inserire il codice del conto: ";
    cin >> codice;
    do{
        cout << "Inserire il saldo del conto: ";
        cin >> saldo;
    } while(saldo < 0);
    conto.set(nome, codice, saldo);

    cout << endl << "Il saldo corrente del conto " << nome << " e': " << conto.currentBalance();

    cout << endl;
    return 0;
}
