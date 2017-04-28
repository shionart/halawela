int main()
{
    //KAMUS
    int jumlahAnak, gajiPokok;
    float tunjangan;
    //ALGORITMA
    printf ("Masukkan jumlah anak = "); scanf ("%d", &jumlahAnak);
    printf ("Masukkan besar gaji pokok = "); scanf ("%d", &gajiPokok);
    if (jumlahAnak >= 0)
    {
        if (jumlahAnak < 3)
        {
            tunjangan = jumlahAnak*((gajiPokok*10)/100);
        } else {
            tunjangan = 3*((gajiPokok*10)/100);
        }
        printf ("tunjangan untuk %d anak dari gaji pokok sebesar Rp %d.- adalah Rp %.2f", jumlahAnak, gajiPokok, tunjangan);
    }else {
        printf("Tidak mendapat tunjangan anak");
    }
    return 0;
}
