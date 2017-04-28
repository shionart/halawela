int main()
{
    //KAMUS
    int Harga;
    char Jenis;
    //ALGORITMA
    printf("Masukkan jenis barang = ");scanf ("%c", &Jenis);
    printf("Masukkan harga barang = ");scanf ("%d", &Harga);

    if (Harga > 200 && Harga < 10000){
        switch (Jenis)
        {
            case 'A':
                printf("Biaya yang harus dibayar setelah diskon = %d", (Harga * 90)/100);
                break;
            case 'B':
                printf("Biaya yang harus dibayar setelah diskon = %d", (Harga * 85)/100);
                break;
            case 'C':
                printf("Biaya yang harus dibayar setelah diskon = %d", (Harga * 80)/100);
                break;
            default :
                printf ("Bukan pilihan\n");
        }
    }else{
        printf("Biaya yang harus dibayar tetap = %d", Harga);
    }
    return 0;
}
