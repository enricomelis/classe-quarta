#include <iostream>
#include <string> 
using namespace std;

// classe strumenti

class Strumenti {
    protected: 
        string materiale;
        float costo;
        string scala; 
    public: 
        Strumenti(string mat, float cos, string sca);
        void stampa();
        ~Strumenti();
};

Strumenti::Strumenti(string mat, float cos, string sca){
    materiale = mat;
    costo = cos;
    scala = sca;
}

void Strumenti::stampa(){
    cout << "Materiale: " << materiale << 
    endl << "Costo: " << costo << 
    endl << "Scala: " << scala;
}

Strumenti::~Strumenti(){
    cout << "distruttore strumenti";
}

class Corda : public Strumenti{
    protected: 
        int n_corda;
    public: 
        Corda(string mat, float cos, string sca, int num);
        void stampa();
};

Corda::Corda(string mat, float cos, string sca, int num): Strumenti(mat, cos, sca){
    n_corda = num;
}

void Corda::stampa(){
    cout << "Materiale: " << materiale << 
    endl << "Costo: " << costo << 
    endl << "Scala: " << scala <<
    endl << "Numero corde: " << n_corda;
}
