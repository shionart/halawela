int main()
{
    //KAMUS
    int golongan,tarif, daya;
    float biaya;
    //ALGORITMA
    printf ("Masukkan golongan = "); scanf("%d", &golongan);
    printf ("Masukkan besarnya pemakaian daya dalam kWH = "); scanf("%d", &daya);
    if(golongan >= 1 && golongan <=2)
    {
        switch (golongan)
        {
            case 1:
                tarif = 1000;
                break;
            case 2:
                tarif = 2000;
                break;
        }
        biaya = 0;
        if (daya < 100)
        {
            biaya = 100 * tarif;
        }else if (daya >= 1000){
            biaya = (daya * tarif *110)/100;
        }else{
            biaya = daya * tarif;
        }
        printf ("Golongan %d, pemakaian %d kWH, maka jumlah bayarnya %.2f", golongan, daya, biaya);
    } else {
        printf("Golongan tidak terdefinisi");
    }
    return 0;
}
