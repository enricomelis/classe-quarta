#include <iostream>
#include <string> 
using namespace std;

// classe strumenti

class Strumenti {
    protected: 
        string nome;
        string materiale;
        string tipo;
        float costo;
        string scala; 
    public: 
        Strumenti(string nom, string mat, string tip, float cos, string sca);
        void stampa();
        void setMaterial(string ma);
        ~Strumenti();
};

Strumenti::Strumenti(string nom, string mat, string tip, float cos, string sca){
    nome = nom;
    materiale = mat;
    tipo = tip;
    costo = cos;
    scala = sca;
}

void Strumenti::stampa(){
    cout << "Nome: " << nome <<
    endl << "Materiale: " << materiale << 
    endl << "Tipo: " << tipo <<
    endl << "Costo: " << costo << "€" <<
    endl << "Scala: " << scala;
}

void Strumenti::setMaterial(string ma){
    materiale = ma;
}

Strumenti::~Strumenti(){
    cout << "distruttore strumenti";
}

class Corda : public Strumenti{
    protected: 
        int n_corda;
    public: 
        Corda(string nom, string mat, string tip, float cos, string sca, int num);
        void stampa();
};

Corda::Corda(string nom, string mat, string tip, float cos, string sca, int num): Strumenti(nom, mat, tip, cos, sca){
    n_corda = num;
}

void Corda::stampa(){
    cout << "Strumento a corda: " << endl << "---------------" << endl;
    cout << "Nome: " << nome <<
    endl << "Materiale: " << materiale << 
    endl << "Tipo: " << tipo <<
    endl << "Costo: " << costo << "€" << 
    endl << "Scala: " << scala <<
    endl << "Numero corde: " << n_corda;
}

int main(){
    string nome_strumento, materiale_strumento, scala_strumento, tipo_strumento;
    int numero_corde;
    float prezzo_strumento;

    cout << "Strumento a corda: " << endl << "----------------------" << endl;
    cout << "Inserire il nome dello strumento: ";
    cin >> nome_strumento;
    cout << "Inserire il materiale dello strumento: ";
    cin >> materiale_strumento;
    do{
        cout << "Inserire il costo dello strumento: ";
        cin >> prezzo_strumento;
    } while(prezzo_strumento <= 0);
    tipo_strumento = "corda";
    cout << "Inserire la scala suonata: ";
    cin >> scala_strumento;
    do{
        cout << "Inserire il numero delle corde: ";
        cin >> numero_corde;
    } while(numero_corde < 1);

    class Corda strumento(nome_strumento, materiale_strumento, tipo_strumento, prezzo_strumento, scala_strumento, numero_corde);
    cout << endl;
    strumento.stampa();

    string risposta;
    cout << endl << "Vuoi cambiare materiale? (si / no): ";
    cin >> risposta;
    if(risposta == "si"){
        string nuovo_materiale;
        cout << endl << "Inserire nuovo materiale: ";
        cin >> nuovo_materiale;
        strumento.setMaterial(nuovo_materiale);
        cout << endl;
        strumento.stampa();
    }


    cout << endl;
    return 0;
}