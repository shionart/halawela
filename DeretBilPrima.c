int jumlahFaktor (int a)
{
    //Kamus
    int i, Faktor;
    //Algoritma
    Faktor = 0;
    for (i = 1; i <= a; i++)
    {
        if (a%i == 0)
        {
            Faktor = Faktor + 1;
        }else{
            Faktor = Faktor;
        }
    }
    return (Faktor);
}

int main()
{
    //KAMUS
    int i, N,Sn;
    //ALGORITMA
    printf("Masukkan nilai bilangan = "); scanf("%d", &N);
    Sn = 0;
    for (i = 1; i <= N; i++)
    {
        if (jumlahFaktor(i) == 2)
        {
            printf("%d", i);
            if (i != N || i != 1)
            {
                printf(" + ");
            }else{
                printf("");
            }
            Sn = Sn + i;
        } else {
            printf("");
        }
    }
    printf("\nSn = %d", Sn);
    return 0;
}
