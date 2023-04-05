#include <iostream>
#include <string>
using namespace std;

class Circo {
    protected:
        float prezzo;
    public:
        Circo(float p) {
            prezzo = p;
        }
        float getPrezzo() { return prezzo; }
        void setPrezzo(float nuovo) { prezzo = nuovo; }
        ~Circo(){ cout << "distruttore. "; }
};

class Animali : public Circo {
    protected:
        string nome;
        string razza;
    public:
        Animali(string n, float p, string r) : Circo(p) { nome = n; razza = r; }
        void setPrezzo(float nuovo) { prezzo = nuovo; }
        void setNome(string n) { nome = n; }
        string getNome() { return nome; }
        string getRazza() { return razza; }
};

class Artisti : public Circo {
    protected:
        string nome;
        string specialita;
    public:
        Artisti(string n, string s, float p) : Circo(p) { nome = n; specialita = s; }
        void setNome(string n) { nome = n; }
        string getNome() { return nome; }
        string getSpecialita() { return specialita; }
};

int main() {
    Animali a("Leone", 10.0, "Felino");
    
    Artisti b("Luca", "Giocoliere", 15.0);
    
    cout << endl << "-------------- Animali --------------" << endl;
    cout << "Animale: " << a.getNome() << 
    endl << "Prezzo: " << a.getPrezzo() << " euro. " << 
    endl << "Razza: " << a.getRazza() << endl;
    
    cout << endl << "-------------- Artisti -------------- " << endl;
    cout << "Artista: " << b.getNome() << 
    endl << "Specialita: " << b.getSpecialita() << 
    endl << "Prezzo: " << b.getPrezzo() << " euro." << endl;
    
    cout << endl << endl;
    return 0;
}