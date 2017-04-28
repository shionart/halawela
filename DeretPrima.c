int Faktor(int a)
{
    //Kamus
    int i, faktor;
    //Algoritma
    for (i = 1; i <= a;i++)
    {
        if (a % i == 0)
        {
            faktor = faktor + 1;
        }else{
            faktor = faktor + 0;
        }
    }
    return(faktor);
}

int main()
{
    //KAMUS
    int a, i;
    //ALGORITMA
    printf("Masukkan bilangan = "); scanf("%d",&a);
    if (a <= 0)
    {
        printf("Tidak ada deret bilanga prima yang terbentuk");
    }else{
        for (i = 1; i<= a; i++)
        {
            if (Faktor(i) <= 2)
            {
                printf("%d,", i);
            }else
            {
                printf("");
            }
        }
    }
    return 0;
}
