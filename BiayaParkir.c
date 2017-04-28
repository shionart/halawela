int main()
{
    //KAMUS
    int i, N, Biaya;
    //ALGORITMA
    printf("Masukkan lamanya waktu parkir (dalam jam) = "); scanf("%d", &N);
    Biaya = 0;
    for (i = 1; i <= N; i++)
    {
        if(i <= 2)
        {
            Biaya = 2000;
        }else {
            Biaya = Biaya + 500;
        }
    }
    printf("Biaya total = %d", Biaya);
    return 0;
}
