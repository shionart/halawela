/*mengecek apakah suatu bilangan termasuk bilangan prima atau bukan*/
int main ()
{
    //KAMUS
    int j, i, Faktor;
    //ALGORITMA
    printf ("Masukkan bilangan = "); scanf ("%d", &i);
    Faktor = 0;
    for (j = 1; j <= i; j++){
        if (i%j == 0){
            Faktor = Faktor + 1;
        }else{
            Faktor = Faktor;
        }
    }
    if (Faktor == 2){
        printf ("%d Bilangan prima", i);
    }else{
        printf ("%d BUKAN Bilangan prima", i);
    }
    return 0;
}
