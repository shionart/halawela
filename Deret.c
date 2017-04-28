int Prima(int a)
{
    //KAMUS
    int i, faktor;
    //ALGORITMA
    faktor = 0;
    for (i = 1; i <= a; i++)
    {
        if (a%i == 0)
        {
            faktor = faktor +1;
        }
        else //a%i != 0
        {
            faktor = faktor;
        }
    }
    return(faktor);
}

int main ()
{
    //KAMUS
    int a, i;
    //ALGORITMA
    printf ("Masukkan nilai bilangan = "); scanf("%d", &a);
    for (i = 1; i<=a; i++)
    {
        if (Prima(i) == 2)
        {
            printf ("%d, ", i);
        }
        else
        {
            printf ("");
        }
    }
}
