#include <iostream>
#include <string>
#include "calciatore.h"
using namespace std;

int main(){
    string nome, cognome, sport, squadra, ruolo;

    cout << "Persona: " << endl;
    cout << "inserire nome: ";
    cin >> nome;
    cout << "inserire cognome: ";
    cin >> cognome;
    class Persona persona(nome, cognome);

    cout << endl << "Sportivo: " << endl;
    cout << "inserire nome: ";
    cin >> nome;
    cout << "inserire cognome: ";
    cin >> cognome;
    cout << "inserire sport: ";
    cin >> sport;
    class Sportivo sportivo(nome, cognome, sport);

    cout << endl << "Calciatore" << endl;
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
    class Calciatore calciatore(nome, cognome, sport, squadra, ruolo);
    
    cout << endl;
    persona.stampa();

    cout << endl << endl;
    sportivo.stampa();

    cout << endl << endl;
    calciatore.stampa();

    cout << endl;
    return 0;
}