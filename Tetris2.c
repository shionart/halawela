int main()
{
    //KAMUS
    int i, j, N;
    //ALGORITMA
    printf("N = "); scanf("%d", &N);
    if (N<=0)
    {
        printf("tidak terdefinisi");
    }else{
        for (i = 1; i <= N; i++)
        {
            for (j = 1; j<=i; j++)
            {
                printf("v");
            }
            printf(" --%d", i);
            printf("\n");
        }
        for (i = N-1;i>=1;i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf ("v");
            }
            printf(" --%d", i);
            printf("\n");
        }
    }
    return 0;
}
