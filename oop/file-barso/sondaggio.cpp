#include <iostream>
#include <string>
using namespace std;

class Referendum{
	protected:
		float  num_int;
		float  num_s;
		float  num_n;
	public:
		Referendum(float  ni, float  ns, float  nn);
		float Perc_si();
		float Perc_no();
		void set();
		void stampa();
};

Referendum::Referendum(float  ni, float  ns, float  nn){
	num_int = ni;
	num_s = ns;
	num_n = nn;
}

float Referendum::Perc_si(){
	return (num_s/num_int)*100;
}

float Referendum::Perc_no(){
	return (num_n/num_int)*100;
}

void Referendum::set(){
	float  ni, ns, nn, check;
	do{
		cout << "Inserire numero intervistati: ";
		cin >> ni;
	}while (ni<=0);
	do{
		cout << "Inserire numero si': ";
		cin >> ns;
	}while (ns>ni);
	do{
		cout << "Inserire numero no: ";
		cin >> nn;
		check = ns+nn;
	}while (check!=ni);
	
	num_int = ni;
	num_s = ns;
	num_n = nn;
}

void Referendum::stampa(){
	cout << endl << "Referendum: ";
	cout << endl << num_int  << " votanti";
	cout << endl << Perc_si() << "% si' (" << num_s << " voti)";
	cout << endl << Perc_no() << "% no (" << num_n << " voti)" << endl;
}

class Elezioni : public Referendum{
	private:
		float num_A;
		float num_B;
		float num_C;
		float num_D;
	public:
		Elezioni(float ni, float ns, float nn, float nA, float nB, float nC, float nD);
		float Perc_A();
		float Perc_B();
		float Perc_C();
		float Perc_D();
		void set();
		void stampa();
};

Elezioni::Elezioni(float ni, float ns, float nn, float nA, float nB, float nC, float nD) : Referendum (ni, ns, nn){
	num_A = nA;
	num_B = nB;
	num_C = nC;
	num_D = nD;
}

float Elezioni::Perc_A(){
	return (num_A/num_int)*100;
}

float Elezioni::Perc_B(){
	return (num_B/num_int)*100;
}

float Elezioni::Perc_C(){
	return (num_C/num_int)*100;
}

float Elezioni::Perc_D(){
	return (num_D/num_int)*100;
}

void Elezioni::set(){
	float ni, na, nb, nc, nd, check;
	do{
		cout << "Inserire numero intervistati: ";
		cin >> ni;
	}while (ni<=0);
	do{
		cout << "Inserire numero A: ";
		cin >> na;
	}while (na>ni);
	do{
		cout << "Inserire numero B: ";
		cin >> nb;
		check = na+nb;
	}while (check>ni);
	do{
		cout << "Inserire numero C: ";
		cin >> nc;
		check = na+nb+nc;
	}while (check>ni);
	do{
		cout << "Inserire numero D: ";
		cin >> nd;
		check = na+nb+nc+nd;
	}while (check!=ni);
	
	num_int = ni;
	num_A = na;
	num_B = nb;
	num_C = nc;
	num_D = nd;
}

void Elezioni::stampa(){
	cout << endl << "Elezioni: ";
	cout << endl << num_int  << " votanti";
	cout << endl << Perc_A() << "% lista A' (" << num_A << " voti)";
	cout << endl << Perc_B() << "% lista B' (" << num_B << " voti)";
	cout << endl << Perc_C() << "% lista C' (" << num_C << " voti)";
	cout << endl << Perc_D() << "% lista D' (" << num_D << " voti)";
}

main(){
	float inter, si, no, check;
	char s;
	
	//inserimento dati referendum
	cout << "REFERENDUM" << endl;
	do{
		cout << "Inserire numero intervistati: ";
		cin >> inter;
	}while (inter<=0);
	do{
		cout << "Inserire numero si': ";
		cin >> si;
	}while (si>inter);
	do{
		cout << "Inserire numero no: ";
		cin >> no;
		check = si+no;
	}while (check!=inter);
	
	//creazione referendum
	Referendum r(inter, si, no);
	
	//domanda per modificare i dati del referendum
	do{
		cout << endl << "Vuoi cambiare i dati inseriti ('s' per si', 'n' per no)? ";
		cin >> s;
	}while (s!='s' && s!='n');
	if (s == 's'){
		r.set();
	}
	
	//stampa dati
	r.stampa();
	
	//inserimento dati elezioni
	cout << endl << endl << "ELEZIONI" << endl;
	float a,b,c,d;
	do{
		cout << "Inserire numero intervistati: ";
		cin >> inter;
	}while (inter<=0);
	do{
		cout << "Inserire voti per la lista A: ";
		cin >> a;
	}while (a>inter);
	do{
		cout << "Inserire voti per la lista B: ";
		cin >> b;
		check = a+b;
	}while (check>inter);
	do{
		cout << "Inserire voti per la lista C: ";
		cin >> c;
		check = a+b+c;
	}while (check>inter);
	do{
		cout << "Inserire voti per la lista D: ";
		cin >> d;
		check = a+b+c+d;
	}while (check!=inter);
	
	//creazione oggetto elezioni
	Elezioni e(inter, si, no, a,b,c,d);
	
	//domanda per modificare i dati delle elezioni
	do{
		cout << endl << "Vuoi cambiare i dati inseriti ('s' per si', 'n' per no)? ";
		cin >> s;
	}while (s!='s' && s!='n');
	if (s == 's'){
		e.set();
	}
	
	//stampa elezioni
	e.stampa();
}