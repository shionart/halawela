int main()
{
    //KAMUS
    int i, N, Sn, BarisN;
    //ALGORITMA
    printf("Masukkan nilai ke = "); scanf ("%d", &N);
    Sn = 0;
    for (i = 1; i<= N; i++)
    {
        BarisN = i*(i+1)/2;
        Sn = Sn + BarisN;
        printf("%d, ", BarisN);
    }
    printf ("\t%d", Sn);
    return 0;
}
