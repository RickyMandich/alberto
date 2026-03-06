#include <iostream>
#include <cstring> // necessaria per funzioni su stringhe
using namespace std;

int main(){

// ========================
// Modulo 1: Tipi di dati e variabili
// Spiegazione: int = numeri interi, float = numeri decimali, double = numeri decimali più precisi, char = singolo carattere, bool = vero/falso.
// Variabili = contenitori modificabili, costanti = valori fissi.
// ========================
/*
Es. 1: Scrivi un programma che dichiari variabili di tutti i tipi sopra e stampi il loro contenuto.
*/

// variabile contenente un numero intero
int x;
cout << "inserisci un numero intero" << endl;
//cin >> x;
x = 15;
cout << x << endl << endl;

// variabile contente un numero con la virgola
float y;
cout << "inserisci un numero decimale" << endl;
// cin >> y;
y = 1.5;
cout << y << endl << endl;

// variabile contente un carattere
char character = '&';
cout << character << endl << endl;

// variabile contente un bool
bool boolean = 5 < 10;
cout << boolean << endl << endl;

system("cls");

// ========================
// Modulo 2: Operazioni aritmetiche
// Spiegazione: + somma, - sottrazione, * moltiplicazione, / divisione intera, % modulo (resto della divisione)
// I booleani possono derivare da confronti tra variabili (>, <, ==, !=, >=, <=)
// ========================
/*
Es. 2: Chiedi due numeri interi all'utente e calcola:
- somma
- differenza
- prodotto
- divisione intera
- resto
Mostra anche se il primo è maggiore del secondo usando un booleano.
*/

int int1, int2;
int res1;
cout << "inserisci due numeri interi (uno alla volta)" << endl;
int1 = 15, int2 = 5;
//cin >> int1;
//cin >> int2;
res1 = int1 + int2;
cout << "num1 + num2 = " << res1 << endl;
res1 = int1 - int2;
cout << "num1 - num2 = " << res1 << endl;
res1 = int1 * int2;
cout << "num1 * num2 = " << res1 << endl;
res1 = int1 / int2;
cout << "num1 / num2 = " << res1 << endl;
res1 = int1 % int2;
cout << "num1 % num2 = " << res1 << endl;
bool res2 = int1 > int2;
cout << "num1 > num2 = " << res2 << endl;

system("cls");

// ========================
// Modulo 3: Struttura condizionale if
// Spiegazione: if() controlla una condizione; se vera esegue il blocco. if-else permette alternativa.
// ========================
int eta;
if (eta > 18){
	// puoi entrare a vedere il film
} else if (eta > 16) {
	// puoi entrare a vedere il film se vieni accompagnato da un adulto
} else {
	// non puoi vedere il film
}
/*
Es. 3: Chiedi un voto (0-10) e stampa il giudizio:
- "Insufficiente" <6
- "Sufficiente" 6-7
- "Buono" 8-9
- "Ottimo" 10.
*/

int voto;
cout << "inserisci un voto tra 0 e 10" << endl;
//cin >> voto;
voto = 6;
if (voto < 6) {
	cout << "Insufficiente" << endl;
} else if (voto <= 7) {
	cout << "Sufficiente" <<endl;
} else if (voto <= 9) {
	cout << "Buono" << endl;
} else {
	cout << "Ottimo" << endl;
}

system("cls");
/*
Es. 3.5: rifai l'esercizio precedente preoccupandoti di gestire il fatto che l'utente può non aver rispettato i limiti numerici imposti:
*/

cout << "inserisci un voto tra 0 e 10" << endl;
//cin >> voto;
voto = 6;
if (voto < 0 || voto > 10){
	cout << "Voto non valido" << endl;
} else if (voto < 6) {
	cout << "Insufficiente" << endl;
} else if (voto <= 7) {
	cout << "Sufficiente" <<endl;
} else if (voto <= 9) {
	cout << "Buono" << endl;
} else {
	cout << "Ottimo" << endl;
}

system("cls");

// ========================
// Modulo 4: Struttura condizionale switch
// Spiegazione: switch(valore) seleziona tra casi predefiniti, default se nessuno corrisponde.
// ========================

//int a = 10, b = 10;
//char operazione = '+';
//if(operazione == '+') {
//	cout << a + b <<endl;
//}else if (operazione == '-') {
//	cout << a-b << endl;
//}[...]

//int a = 10, b = 10;
//char operazione = '+';
//
//switch (operazione){
//	case '+':
//		cout << a + b <<endl;
//		break;
//	case '-':
//		cout << a - b <<endl;
//		break;
//}

/*
Es. 4: Chiedi un numero 1-7 e stampa il giorno della settimana corrispondente.
*/

int numGiorno;
cout << "inserisci il numero del giorno (1-7)" << endl;
//cin >> numGiorno;
numGiorno = 6;
switch (numGiorno) {
	case 1:
		cout << "Lunedi'";
		break;
	case 2:
		cout << "Martedi'";
		break;
	case 3:
		cout << "Mercoledi'";
		break;
	case 4:
		cout << "Giovedi'";
		break;
	case 5:
		cout << "Venerdi'";
		break;
	case 6:
		cout << "Sabato";
		break;
	case 7:
		cout << "Domenica";
		break;
	default:
		cout << "Il numero del giorno non e' valido" << endl;
		break;
}

system("cls");

// ========================
// Modulo 5: Cicli for, while, do..while
// Spiegazione: for(dichiarazione indice; condizione; incremento indice) = ciclo a conteggio
// while(condizione) {...} = ciclo che continua finché condizione vera
// do..while = esegue almeno una volta, poi controlla condizione
// ========================
/*
Es. 5: Stampa i numeri da 1 a 10 usando for, while e do..while.
*/

cout << "==========================WHILE==========================" << endl;
int i = 1;
while(i<=10) {
	cout << i << endl;
	i++;
}

cout << "==========================DO WHILE==========================" << endl;
i = 1;
do{
	cout << i << endl;
	i++;
}while (i<=10);

cout << "==========================FOR==========================" << endl;
for(i=1;i<=10;i++){
	cout << i << endl;
}

system("cls");
// ========================
// Modulo 6: Array monodimensionale
// Spiegazione: array = collezione di elementi dello stesso tipo, indicizzati da 0.
// ========================

int stud[5] = {6, 8, 4, 7, 6}; // gli array iniziano SEMPRE a 0
for (int j=0; j<5;j++){
	cout << "avendo " << stud[j] << " la tua valutazione e':\t";
	if (stud[j] < 0 || stud[j] > 10){
		cout << "Voto non valido" << endl;
	} else if (stud[j] < 6) {
		cout << "Insufficiente" << endl;
	} else if (stud[j] <= 7) {
		cout << "Sufficiente" <<endl;
	} else if (stud[j] <= 9) {
		cout << "Buono" << endl;
	} else {
		cout << "Ottimo" << endl;
	}
}
system("cls");
/*
Es. 6: Chiedi 5 numeri all'utente, salvali in un array e calcola somma e media.
*/

int nums[5], sum = 0;
double media;
cout << "inserisci 5 numeri interi (uno alla volta)" << endl;
for (int j = 0;j < 5; j++){
//	cin >> nums[j];
	nums[j] = j+1;
	sum = sum + nums[j];
}
cout << "somma:\t" << sum << endl;
media = sum/5;
cout << "5\t" << media << endl;
media = sum/5.0;
cout << "5.0\t" << media << endl;

system("cls");
// ========================
// Modulo 7: Array bidimensionale (matrice)
// Spiegazione: matrice = array di array; accesso tramite riga e colonna [i][j]
// ========================
/*
Es. 7: Crea una matrice 3x3, riempila con numeri e calcola somma di ogni riga e colonna.
*/

//riga 1: x1
//riga 2: y1
//riga 3: z1
//colonna 1: x2
//colonna 2: y2
//colonna 3: z2

int mat[3/*righe*/][3/*colonne*/] = {   // I=1, J=0, sumRow = 6, sumCol = {1, 2, 3}, value=4
										{1, 2, 3}, //mat[0][0] = 1
										{4, 5, 6}, //mat[1][2] = 6
										{7, 8, 9}  //mat[2][2] = 9
									};

int sumCol[3] = {0, 0, 0};
for(i=0;i<3;i++){
	//	mat[i] = {1, 2, 3};
	int sumRow = 0;
	for(int j=0;j<3;j++){
		sumRow = sumRow + mat[i][j];
		sumCol[j] = sumCol[j] + mat[i][j];
	}
	cout << "somma della riga " << i + 1 << ":\t" << sumRow << endl;
}
for(int j=0;j<3;j++){
	cout << "somma della colonna " << j + 1 << ":\t" << sumCol[j] << endl;
}

// ========================
// Modulo 8: Stringhe con vettore di char
// Spiegazione: stringa = array di char terminato da '\0', strlen() restituisce lunghezza
// ========================
/*
Es. 8: Chiedi all'utente una parola, salvala in un array di char e stampala al contrario.
*/

// ========================
// Modulo 9: funzioni e parametri
// Spiegazione: <tipo> <nome funzione> (<tipo parametro> <nome parametro>[, ...]){...}
// ========================
/*
Es. 9: converti in una funzione l'esercizio dei voti prendendo come parametro il voto ricevuto
e come ritorno l'array di char con la valutazione scritta
*/

	return 0;
}
