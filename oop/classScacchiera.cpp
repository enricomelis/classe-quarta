#include <iostream>
#include <string>
using namespace std;

class Pezzo {
    protected: 
        string nome;
        string abbreviazione;
        string colore;
        int valore;
        int posizione_riga;
        int posizione_colonna; 
/*la scacchiere ha una notazione 8 x 8, 
esempio a1 (posizione della torre bianca di sinistra) */ 
    public:
        Pezzo(string no, string ab, string co, int va, int row, int col);
        ~Pezzo();
};

Pezzo::Pezzo(string no, string ab, string co, int va, int row, int col){
    nome = no;
    abbreviazione = ab;
    colore = co;
    valore = va;
    posizione_riga = row;
    posizione_colonna = col;
}

Pezzo::~Pezzo(){
    cout << "distruttore";
}

class Pedone: public Pezzo {
    public:
        Pedone(string no, string ab, string co, int va, int row, int col);
};

Pedone::Pedone(string no, string ab, string co, int va, int row, int col): Pezzo(no, ab, co, va, row, col){
}

class Alfiere: public Pezzo {
    public:
        Alfiere(string no, string ab, string co, int va, int row, int col);
};

Alfiere::Alfiere(string no, string ab, string co, int va, int row, int col): Pezzo(no, ab, co, va, row, col){
}

class Cavallo: public Pezzo {
    public:
        Cavallo(string no, string ab, string co, int va, int row, int col);
};

Cavallo::Cavallo(string no, string ab, string co, int va, int row, int col): Pezzo(no, ab, co, va, row, col){
}

class Torre: public Pezzo {
    public:
        Torre(string no, string ab, string co, int va, int row, int col);
};

Torre::Torre(string no, string ab, string co, int va, int row, int col): Pezzo(no, ab, co, va, row, col){
}

class Regina: public Pezzo {
    public:
        Regina(string no, string ab, string co, int va, int row, int col);
};

Regina::Regina(string no, string ab, string co, int va, int row, int col): Pezzo(no, ab, co, va, row, col){
}

class Re: public Pezzo {
    public:
        Re(string no, string ab, string co, int va, int row, int col);
};

Re::Re(string no, string ab, string co, int va, int row, int col): Pezzo(no, ab, co, va, row, col){
}

class Scacchiera {
    public:
        Scacchiera();
        ~Scacchiera();
        void crea_pezzi();
        
};

Scacchiera::Scacchiera(){
    cout << "creazione scacchiera";
}

Scacchiera::~Scacchiera(){
    cout << "distruzione scacchiera";
}

void Scacchiera::crea_pezzi(){
    class Pedone pedone_1("Pedone", "P", "Nero", 1, 1, 0);
    class Pedone pedone_2("Pedone", "P", "Bianco", 1, 1, 1);
    class Pedone pedone_3("Pedone", "P", "Bianco", 1, 1, 2);
    class Pedone pedone_4("Pedone", "P", "Bianco", 1, 1, 3);
    class Pedone pedone_5("Pedone", "P", "Bianco", 1, 1, 4);
    class Pedone pedone_6("Pedone", "P", "Bianco", 1, 1, 5);
    class Pedone pedone_7("Pedone", "P", "Bianco", 1, 1, 6);
    class Pedone pedone_8("Pedone", "P", "Bianco", 1, 1, 7);

    class Pedone pedone_9("Pedone", "P", "Nero", 1, 1, 0);
    class Pedone pedone_10("Pedone", "P", "Nero", 1, 1, 1);
    class Pedone pedone_11("Pedone", "P", "Nero", 1, 1, 2);
    class Pedone pedone_12("Pedone", "P", "Nero", 1, 1, 3);
    class Pedone pedone_13("Pedone", "P", "Nero", 1, 1, 4);
    class Pedone pedone_14("Pedone", "P", "Nero", 1, 1, 5);
    class Pedone pedone_15("Pedone", "P", "Nero", 1, 1, 6);
    class Pedone pedone_16("Pedone", "P", "Nero", 1, 1, 7);

    class Alfiere alfiere_1("Alfiere", "B", "Bianco", 3, 0, 2);
    class Alfiere alfiere_2("Alfiere", "B", "Bianco", 3, 0, 5);

    class Alfiere alfiere_3("Alfiere", "B", "Nero", 3, 7, 2);
    class Alfiere alfiere_4("Alfiere", "B", "Nero", 3, 7, 5);

    class Cavallo cavallo_1("Cavallo", "N", "Bianco", 3, 0, 1);
    class Cavallo cavallo_2("Cavallo", "N", "Bianco", 3, 0, 6);

    class Cavallo cavallo_3("Cavallo", "N", "Nero", 3, 7, 1);
    class Cavallo cavallo_4("Cavallo", "N", "Nero", 3, 7, 6);

    class Torre torre_1("Torre", "R", "Bianco", 5, 0, 0);
    class Torre torre_2("Torre", "R", "Bianco", 5, 0, 7);

    class Torre torre_3("Torre", "R", "Nero", 5, 7, 0);
    class Torre torre_4("Torre", "R", "Nero", 5, 7, 7);

    class Regina regina_1("Regina", "Q", "Bianco", 9, 0, 3);
    class Regina regina_2("Regina", "Q", "Nero", 9, 7, 3);

    class Re re_1("Re", "K", "Bianco", 0, 0, 4);
    class Re re_2("Re", "K", "Nero", 0, 7, 4);
}

int main(){


    cout << endl;
    return 0;
}