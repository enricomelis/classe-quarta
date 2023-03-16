#include <iostream>
#include <string>
using namespace std;

class Pezzo {
    protected: 
        string nome;
        bool colore; //0: bianco, 1:nero
        int posizione_x;
        int posizione_y;
    public: 
        Pezzo(string no, bool co, int x, int y);
        ~Pezzo();
};

Pezzo::Pezzo(string no, bool co, int x, int y){
    nome = no;
    colore = co; 
    posizione_x = x;
    posizione_y = y;
}

Pezzo::~Pezzo(){
    cout << "distruttore";
}

class Alfiere : public Pezzo {
    public: 
        Alfiere(string no, bool co, int x, int y);
        string getSimbolo();
};

Alfiere::Alfiere(string no, bool co, int x, int y): Pezzo(no, co, x, y){}

string Alfiere::getSimbolo(){
        return "B";
}

class Cavallo : public Pezzo {
    public: 
        Cavallo(string no, bool co, int x, int y);
        string getSimbolo();
};

Cavallo::Cavallo(string no, bool co, int x, int y): Pezzo(no, co, x, y){}

string Cavallo::getSimbolo(){
        return "N";
}

class Torre : public Pezzo {
    public: 
        Torre(string no, bool co, int x, int y);
        string getSimbolo();
};

Torre::Torre(string no, bool co, int x, int y): Pezzo(no, co, x, y){}

string Torre::getSimbolo(){
        return "R";
}

class Regina : public Pezzo {
    public: 
        Regina(string no, bool co, int x, int y);
        string getSimbolo();
};

Regina::Regina(string no, bool co, int x, int y): Pezzo(no, co, x, y){}

string Regina::getSimbolo(){
        return "Q";
}

class Re : public Pezzo {
    public: 
        Re(string no, bool co, int x, int y);
        string getSimbolo();
};

Re::Re(string no, bool co, int x, int y): Pezzo(no, co, x, y){}

string Re::getSimbolo(){
        return "K";
}

class Scacchiera {
    private: 
        string matrice[8][8];
    public: 
        Scacchiera(); //da completare+
        void crea_pezzi(); //da completare
        ~Scacchiera();


};

//main da finire