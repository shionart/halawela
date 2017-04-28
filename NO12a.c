/*menuliskan nama bulan sesuai nomor bulan*/

int main()
{
    //KAMUS
    int NomorBulan;
    //ALGORITMA
    scanf ("%d", &NomorBulan);
    if (NomorBulan > 12 || NomorBulan < 1)
    {
        printf ("Masukkan nomor bulan tidak tepat");
    } else
    {
        if (NomorBulan == 1)
        {
            printf ("Januari");
        }else if (NomorBulan == 2)
        {
            printf ("Februari");
        }else if (NomorBulan == 3)
        {
            printf ("Maret");
        }else if (NomorBulan == 4)
        {
            printf ("April");
        }else if (NomorBulan == 5)
        {
            printf ("Mei");
        }else if (NomorBulan == 6)
        {
            printf ("Juni");
        }else if (NomorBulan == 7)
        {
            printf ("Juli");
        }else if (NomorBulan == 8)
        {
            printf ("Agustus");
        }else if (NomorBulan == 9)
        {
            printf ("September");
        }else if (NomorBulan == 10)
        {
            printf ("Oktober");
        }else if (NomorBulan == 11)
        {
            printf ("November");
        }else if (NomorBulan == 12)
        {
            printf ("Desember");
        }
    }


}
