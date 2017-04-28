int main()
{
    //KAMUS
    int i, j, k, N;
    //ALGORITMA
    printf("N = "); scanf("%d", &N);
    if (N<=0)
    {
        printf("tidak terdefinisi");
    }else{
        //BINTANG VERTICAL
        for (i = 1; i <= N; i++)
        {
            //SPASI AWAL
            for(j = 0; j <= i-1; j++)
            {
                printf(" ");
            }
            //BINTANG HORIZONTAL + spasi
            for(k = 1; k <= N-i+1; k++)
            {
                printf("* ");
            }
            printf(" --%d\n", k-1);
        }
    }
    return 0;
}
