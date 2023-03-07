#include <iostream>
#include <string>
#include "calciatore.h"
using namespace std;

int main(){
    string nome, cognome, sport, squadra, ruolo;
    cout << "inserire nome: ";
    cin >> nome;
    cout << "inserire cognome: ";
    cin >> cognome;
    cout << "inserire sport: ";
    cin >> sport;
    cout << "inserire squadra: ";
    cin >> squadra;
    cout << "inserire ruolo: ";
    cin >> ruolo;

    class Calciatore primo(nome, cognome, sport, squadra, ruolo);
    cout << endl;

    primo.stampa();
    cout << endl;
    return 0;
}