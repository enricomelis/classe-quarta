#include <iostream>
#include <string>
using namespace std;

class Pezzo {
    protected: 
        string nome;
        bool colore; //0: bianco, 1:nero
    public: 
        Pezzo(string no, bool co);
        ~Pezzo();
};

Pezzo::Pezzo(string no, bool co){
    nome = no;
    colore = co; 
}

Pezzo::~Pezzo(){
    cout << "distruttore";
}

class Pedone : public Pezzo {
    public: 
        Pedone(string no, bool co);
        string getSimbolo();
};

Pedone::Pedone(string no, bool co): Pezzo(no, co){}

string Pedone::getSimbolo(){
        return "P";
}

class Alfiere : public Pezzo {
    public: 
        Alfiere(string no, bool co);
        string getSimbolo();
};

Alfiere::Alfiere(string no, bool co): Pezzo(no, co){}

string Alfiere::getSimbolo(){
        return "B";
}

class Cavallo : public Pezzo {
    public: 
        Cavallo(string no, bool co);
        string getSimbolo();
};

Cavallo::Cavallo(string no, bool co): Pezzo(no, co){}

string Cavallo::getSimbolo(){
        return "N";
}

class Torre : public Pezzo {
    public: 
        Torre(string no, bool co);
        string getSimbolo();
};

Torre::Torre(string no, bool co): Pezzo(no, co){}

string Torre::getSimbolo(){
        return "R";
}

class Regina : public Pezzo {
    public: 
        Regina(string no, bool co);
        string getSimbolo();
};

Regina::Regina(string no, bool co): Pezzo(no, co){}

string Regina::getSimbolo(){
        return "Q";
}

class Re : public Pezzo {
    public: 
        Re(string no, bool co);
        string getSimbolo();
};

Re::Re(string no, bool co): Pezzo(no, co){}

string Re::getSimbolo(){
        return "K";
}

class Scacchiera {
    private: 
        string matrice[8][8];
    public: 
        Scacchiera(string sym); 
        void crea_pezzi(); //da completare
        void stampa_scacchiera();
        ~Scacchiera();


};

Scacchiera::Scacchiera(string sym){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            matrice[i][j] = sym;
        }
    }
}

void Scacchiera::crea_pezzi(){
    for(int i=0; i<8; i++){
        class Pedone pedone_bianco("Pedone", "Bianco");
        matrice[1][i] = pedone_bianco.getSimbolo();
        class Pedone pedone_nero("Pedone", "Nero");
        matrice[6][i] = pedone_nero.getSimbolo();

        class Torre torre_1("Torre", "Bianco");
        matrice[0][0] = torre_1.getSimbolo();
        class Torre torre_2("Torre", "Bianco");
        matrice[0][7] = torre_2.getSimbolo();
        class Torre torre_3("Torre", "Nero");
        matrice[7][0] = torre_3.getSimbolo();
        class Torre torre_4("Torre", "Nero");
        matrice[7][7] = torre_4.getSimbolo();

        class Cavallo Cavallo_1("Cavallo", "Bianco");
        matrice[0][1] = Cavallo_1.getSimbolo();
        class Cavallo Cavallo_2("Cavallo", "Bianco");
        matrice[0][6] = Cavallo_2.getSimbolo();
        class Cavallo Cavallo_3("Cavallo", "Nero");
        matrice[7][1] = Cavallo_3.getSimbolo();
        class Cavallo Cavallo_4("Cavallo", "Nero");
        matrice[7][6] = Cavallo_4.getSimbolo();

        class Alfiere Alfiere_1("Alfiere", "Bianco");
        matrice[0][2] = Alfiere_1.getSimbolo();
        class Alfiere Alfiere_2("Alfiere", "Bianco");
        matrice[0][5] = Alfiere_2.getSimbolo();
        class Alfiere Alfiere_3("Alfiere", "Nero");
        matrice[7][2] = Alfiere_3.getSimbolo();
        class Alfiere Alfiere_4("Alfiere", "Nero");
        matrice[7][5] = Alfiere_4.getSimbolo();

        class Regina Regina_1("Regina", "Bianco");
        matrice[0][3] = Regina_1.getSimbolo();
        class Regina Regina_2("Regina", "Nero");
        matrice[7][3] = Regina_2.getSimbolo();

        class Re Re_1("Re", "Bianco");
        matrice[0][4] = Re_1.getSimbolo();
        class Re Re_2("Re", "Nero");
        matrice[7][4] = Re_2.getSimbolo();
    }

}

void Scacchiera::stampa_scacchiera(){
    for(int i=-1; i<8; i++){
        for(int j=0; j<8; j++){
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}

Scacchiera::~Scacchiera(){
    cout << "distruttore scacchiera";
}

int main(){
    class Scacchiera tavola_1(".");

    tavola_1.crea_pezzi();
    tavola_1.stampa_scacchiera();

    

    cout << endl;
    return 0;
}