/*menuliskan nama nama hari berdasarkan inputan keyboard, hari pertama adalah senin*/
int main ()
{
    //KAMUS
    int NomorHari;
    //ALGORITMA
    printf ("Masukkan nomor hari = "); scanf("%d",&NomorHari);
    switch (NomorHari) {
case 1 :
    printf ("Hari ini adalah hari Senin");
    break;
case 2:
    printf ("Hari ini adalah hari Selasa");
    break;
case 3:
    printf ("Hari ini adalah hari Rabu");
    break;
case 4:
    printf ("Hari ini addalah hari Kamis");
    break;
case 5:
    printf ("Hari ini adalah hari Jum'at");
    break;
case 6:
    printf ("Hari ini adalah hari Sabtu");
    break;
case 7:
    printf ("Hari ini adalah hari Minggu");
    break;
default :
    printf ("Masukkan nomor hari tidak tepat");
    break;
    }
    return 0;
}
