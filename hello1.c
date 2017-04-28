/* File : hello1.c */
/* menuliskan hello ke layar */
/* pola ini merupakan standard yang dipakai di kelas */
int main ()
{
/* KAMUS */

/* ALGORITMA */
	printf ("hello\n");
	return 0;
	
}


#ifndef bioskop_H
#include bioskop_H

    typedef int Elm;
    
    typedef Elm nKursiBioskop[9][9];
    
    typedef enum
    {
        false = 0;
        true = 1;
    } boolean;
    
int barisKe (char baris);

void resetTiKeBioskop (nKursiBioskop *M);

boolean isReserved (nKursiBioskop M, char baris, int kolom);

boolean isAvailable (nKursiBiosKop M, char baris, int kolom);

boolean isValidPosisi (char baris, int kolom);

void setReserved (nKursiBioskop *M, char baris, int kolom);

void setAvailable (nKursiBioskop *M, char baris, int kolom);

void tukarKursi (nKursiBioskop *M, char baris, int kolom, char barisX, int kolomX);

int hitungAvailable (nKursiBioskop M);

int hitungReserved (nKursiBioskop M);

int hitungReservedBaris (nKursiBioskop M, char baris);

char barisFavorit (nKursiBioskop M);

void printKursiBioskop ()
