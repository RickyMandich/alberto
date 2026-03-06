#include <iostream>
using namespace std;

void func(){
// ========================
// Esercizio 1: Controllo input con ciclo
// Spiegazione: un ciclo può essere usato per ripetere un'operazione finché una condizione non è soddisfatta.
// ========================
/*
Es. 1:
Scrivi un programma che chieda all'utente di inserire un voto.

Il programma deve continuare a chiedere il voto
finché non viene inserito un valore valido.

Un voto è valido se è compreso tra 0 e 10.
Quando il voto è valido, stampa il giudizio:
- Insufficiente (<6)
- Sufficiente (6-7)
- Buono (8-9)
- Ottimo (10)
*/

int voto;
do{
	cout << "inserisci un voto tra 0 e 10" << endl;
	cin >> voto;
	if (voto < 0 || voto > 10)
	{
		cout << "Voto non valido" << endl;
	} 
	else if (voto < 6) 
	{
		cout << "Insufficiente" << endl;
	} 
	else if (voto <= 7) 
	{
		cout << "Sufficiente" <<endl;
	} 
	else if (voto <= 9) 
	{
		cout << "Buono" << endl;
	} 
	else 
	{
		cout << "Ottimo" << endl;
	}
}while (voto < 0 || voto > 10);
// ========================
// Esercizio 2: Numero pari o dispari
// Spiegazione: l'operatore % restituisce il resto della divisione.
// ========================
/*
Es. 2:
Chiedi un numero intero all'utente.

Stabilisci se il numero è:
- pari
- dispari

Stampa il risultato.
*/

int num1;
cout << "inserisci un numero intero" << endl;
cin >> num1;
if (num1 % 2 == 0)
{
	cout << "il numero e' pari" << endl;
}
else
{
	cout << "il numero e' dispari" << endl;
}

// ========================
// Esercizio 3: Numero maggiore
// Spiegazione: le condizioni permettono di confrontare più valori.
// ========================
/*
Es. 3:
Chiedi tre numeri interi all'utente.

Il programma deve stampare quale dei tre numeri è il più grande.

Se due o più numeri sono uguali, segnalalo.
*/

int num2, num3, num4;
cout << "inserisci tre numeri interi (uno alla volta)" << endl;
cin >> num2 >> num3 >> num4;
if (num2 == num4 && num4 != num3)
	{
		cout << "il primo e il terzo numero sono uguali" << endl;
	}
else if (num2 = num3 != num4)
	{
		cout << "il primo e il secondo numero sono uguali" << endl;
	}
else if (num3 = num4 != num2)
	{
		cout << "il secondo e il terzo numero sono uguali" << endl;
	}
else if (num3 = num2 = num4)
	{
		cout << "tutti i numeri sono uguali" << endl;
	}
	
//if(num2 == num3){
//	cout << "almeno due numeri sono uguali" << endl;
//} else if (num3 == num4){
//	cout << "almeno due numeri sono uguali" << endl;
//}else if (num4 == num2) {
//	cout << "almeno due numeri sono uguali" << endl;
//}
//
//if(num2 == num3 || num3 == num4	||	num4 == num2){
//	cout << "almeno due numeri sono uguali" << endl;
//}
	
if (num2 > num3)
{	
	if (num2 > num4)
	{
		cout << "il primo numero e' il piu' grande " << endl;
	}
	else if (num4 > num2)
	{
		cout << "il terzo numero e' il piu' grande " << endl;
	}
}
if (num3 > num2)
{	
	if (num3 > num4)
	{
		cout << "il secondo numero e' il piu' grande " << endl;
	}
	else if (num4 > num3)
	{
		cout << "il terzo numero e' il piu' grande " << endl;
	}
}

// ========================
// Esercizio 4: Conteggio con ciclo
// Spiegazione: un ciclo può essere usato per ripetere operazioni più volte.
// ========================
/*
Es. 4:
Chiedi all'utente quanti numeri vuole inserire.

Successivamente:
- fai inserire tutti i numeri
- conta quanti sono positivi
- conta quanti sono negativi

Alla fine stampa i due conteggi.
*/



// ========================
// Esercizio 5: Somma fino a zero
// Spiegazione: un ciclo può terminare quando viene inserito un valore speciale.
// ========================
/*
Es. 5:
Chiedi all'utente di inserire numeri interi.

Il programma deve continuare a chiedere numeri
e sommarli tra loro.

Quando l'utente inserisce 0, il programma termina
e stampa la somma totale.
*/


// ========================
// Esercizio 6: Menu con switch
// Spiegazione: switch permette di gestire più scelte possibili.
// ========================
/*
Es. 6:
Crea un piccolo menu con queste operazioni:

1 = somma
2 = sottrazione
3 = moltiplicazione
4 = divisione

Chiedi all'utente quale operazione vuole eseguire.

Poi chiedi due numeri e calcola il risultato
in base alla scelta usando switch.
*/

int operazioni, num5, num6, risultato;
cout << "inserisci il numero dell'operazione da eseguire" << endl;
cout << "1 = somma" << endl;
cout << "2 = sottrazione" << endl;
cout << "3 = moltiplicazione" << endl;
cout << "4 = divisione";;
cin >> operazioni;
cout << "inserisci due numeri, il primo maggiore del secondo numero" << endl;
cin >> num5 >> num6;
switch (operazioni) {
	case 1:
		risultato = num5 + num6;
		cout << "il risultato e'"<< risultato;
		break;
	case 2:
		risultato = num5 - num6;
		cout << "il risultato e'" << risultato;
		break;
	case 3:
		risultato = num5 * num6;
		cout << "il risultato e'"<< risultato;
		break;
	case 4:
		risultato = num5 / num6;
		cout << "il risultato e'"<< risultato;
		break;
}

}