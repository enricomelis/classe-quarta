#include <iostream>
#include <string> 
using namespace std;

// classe strumenti

class Strumenti {
    protected: 
        string nome;
        string materiale;
        float costo;
        string scala; 
    public: 
        Strumenti(string nom, string mat, float cos, string sca);
        void stampa();
        ~Strumenti();
};

Strumenti::Strumenti(string nom, string mat, float cos, string sca){
    nome = nom;
    materiale = mat;
    costo = cos;
    scala = sca;
}

void Strumenti::stampa(){
    cout << "Nome: " << nome <<
    endl << "Materiale: " << materiale << 
    endl << "Costo: " << costo << "€" <<
    endl << "Scala: " << scala;
}

Strumenti::~Strumenti(){
    cout << "distruttore strumenti";
}

class Corda : public Strumenti{
    protected: 
        int n_corda;
    public: 
        Corda(string nom, string mat, float cos, string sca, int num);
        void stampa();
};

Corda::Corda(string nom, string mat, float cos, string sca, int num): Strumenti(nom, mat, cos, sca){
    n_corda = num;
}

void Corda::stampa(){
    cout << "Strumento a corda: " << endl << "---------------" << endl;
    cout << "Nome: " << nome <<
    endl << "Materiale: " << materiale << 
    endl << "Costo: " << costo << "€" << 
    endl << "Scala: " << scala <<
    endl << "Numero corde: " << n_corda;
}

int main(){
    string nome_strumento, materiale_strumento, scala_strumento;
    int numero_corde;
    float prezzo_strumento;

    cout << "Strumento a corda: " << endl << "----------------------" << endl;
    cout << "Inserire il nome dello strumento: ";
    cin >> nome_strumento;
    cout << "Inserire il materiale dello strumento: ";
    cin >> materiale_strumento;
    cout << "Inserire il costo dello strumento: ";
    cin >> prezzo_strumento;
    cout << "Inserire la scala suonata: ";
    cin >> scala_strumento;
    cout << "Inserire il numero delle corde: ";
    cin >> numero_corde;

    class Corda strumento(nome_strumento, materiale_strumento, prezzo_strumento, scala_strumento, numero_corde);
    cout << endl;
    strumento.stampa();

    cout << endl;
    return 0;
}