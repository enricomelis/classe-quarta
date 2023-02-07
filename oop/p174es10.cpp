#include <iostream>
#include <string>
using namespace std;

class Libro{
    private:
        string nome;
        float prezzo;
        int numeroScaffale;
        int numeroPagine;
        string casaEditrice;
    public:
        void inizializza(string name, float price, int scaffale, int pagine, string editore);
        void stampa();
        void applicaSconto();
} libro;

void Libro::inizializza(string name, float price, int scaffale, int pagine, string editore){
    nome = name;
    prezzo = price;
    numeroScaffale = scaffale;
    numeroPagine = pagine;
    casaEditrice = editore;
}

void Libro::stampa(){
    cout << "Nome: " << nome << 
    endl << "Prezzo: " << prezzo <<
    endl << "Scaffale: " << numeroScaffale << 
    endl << "Pagine: " << numeroPagine << 
    endl << "Editore: " << casaEditrice << endl;    
}

void Libro::applicaSconto(){
    float nuovoPrezzo = prezzo * 0.9;
    cout << "Il prezzo scontato: " << nuovoPrezzo;
}

int main(){
    string nomeLibro, editore;
    float prezzo;
    int nScaffale, nPagine;
    cout << "Inserire nome del libro: ";
    cin >> nomeLibro;
    do{
        cout << "Inserire il prezzo del libro: ";
        cin >> prezzo;
    } while(prezzo < 0);
    do{
        cout << "Inserire il numero dello scaffale: ";
        cin >> nScaffale;
    } while (nScaffale < 0);
    do{
        cout << "Inserire il numero delle pagine: ";
        cin >> nPagine;
    } while (nPagine < 0);
    cout << "Inserire la casa editrice: ";
    cin >> editore;

    libro.inizializza(nomeLibro, prezzo, nScaffale, nPagine, editore);
    libro.stampa();
    libro.applicaSconto();
    

    cout << endl;
    return 0;
}