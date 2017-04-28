/*membuat kalkulator sedderhana, dengan operasi berbeda*/
int main ()
{
    //KAMUS
    int iA, iB;
    float Hasil;
    char pilihan;
    //ALGORITMA
    printf ("pilihan = "); scanf ("%c", &pilihan);
    printf ("iA = "); scanf ("%d", &iA);
    printf ("iB = "); scanf ("%d", &iB);

    switch (pilihan) {
case 'a':
    Hasil = iA+iB;
    printf ("Hasil = %.2f", Hasil);
    break;
case 'b':
    Hasil = iA-iB;
    printf ("Hasil = %.2f", Hasil);
    break;
case 'c':
    Hasil = iA*iB;
    printf ("Hasil = %.2f", Hasil);
    break;
case 'd':
    Hasil = iA/iB;
    printf ("Hasil = %.2f", Hasil);
    break;
case 'e':
    Hasil = (iA-(iA%iB))/iB;
    printf ("Hasil = %.2f", Hasil);
    break;
case 'f':
    Hasil = iA % iB;
    printf ("Hasil = %.2f", Hasil);
    break;
default :
    printf ("Bukan pilihan menu yang benar");
    }
    return 0;
}
