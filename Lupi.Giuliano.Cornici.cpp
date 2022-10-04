// Lupi.Giuliano.CORREZIONE.cpp 
//

#include <iostream>
using namespace std;
int main()
{
    int somma = 0;
    int minimo;
    int r = 3;
    int c = 5;
    int m[3][5];
    int cornici[100]={0};

    //Popula di 1 la matrice
    for (int rr = 0; rr < r; rr++)
    {
        for (int cc = 0; cc < c; cc++)
        {
            m[rr][cc] = 1;

        }
    }

    //Stampa la matrice con spazi
    for (int rr = 0; rr < r; rr++)
    {
        for (int cc = 0; cc < c; cc++)
        {
            cout << m[rr][cc] << " ";

        }
        cout << endl;
    }
    //Trova il minimo fra righe e colonne
    if (r > c)
        minimo = c;
    else
        minimo = r;

    cout << "numero cornici: " << minimo / 2 + minimo % 2 << endl;

    //PROBLEMA TROVATO: Per la cornice più interna, se le colonne sono dispari, il numero centrale viene letto 2 volte.

    for (int ncornici = 0; ncornici < minimo / 2 + minimo % 2; ncornici++)
    {
        cornici[ncornici] = 0;
        for (int i = 0 + ncornici; i < r - ncornici; i++) {
            for (int k = 0 + ncornici; k < c - ncornici; k++) {
                cornici[ncornici] += m[i][k];
            }
        }

       /* cout << "la somma della cornice numero " << ncornici + 1 << " risulta uguale a: " << somma << endl;
        somma = 0;*/
    }
    for (int i = 0; i < minimo / 2 + minimo % 2; i++) {
        cout << "La " << i + 1 << "a cornice equivale a " << cornici[i] - cornici[i + 1] << "\n";
    }
}