 //direttive di preprocessore
#include <cstdlib>
#include <iostream>
#include <iomanip>
//namespace inserito da dev C++
using namespace std;
//definizione di una classe
class Frazione {
  private:
    //definizione attributi di classe
    int numeratore;
    int denominatore;
  public:
    //metodi set
    void setNumeratore(int n) {
      numeratore = n;}
    void setDenominatore(int n) {
      denominatore = n;}
    //definizione metodi
    //metodo che stampa a video la frazione
    void stampa() {
      // quando l'invocazione di un metodo è all'interno della
      // classe non usiamo la dot notation
      semplifica();
      cout << numeratore << "/" << denominatore;}
     
    // metodo che semplifica gli argomenti della frazione
    void semplifica() {  
      int min;
      //invocazione metodo che calcola l'MCD tra due valori
      min = MCD(numeratore, denominatore);
      numeratore = numeratore / min;
      denominatore = denominatore / min;
    }
    // metodo che calcola il MCD (algoritmo di Euclide)
    int MCD(int a, int b) {
      int c, resto;
      if (b > a ) {
        c = a;
        a = b;
        b = c;      
      }
      do {
        resto = a % b;
        a = b;
        b = resto;
      }while (resto != 0);
      return a;
   }
};
//funzione principale
main() {
  Frazione f1; //creazione del primo oggetto della classe
  //creazione della prima istanza della classe
  f1.setNumeratore(12);
  f1.setDenominatore(3);
  //semplificazione automatica: f1 vale 4
  f1.stampa();
 }
