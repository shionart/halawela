int main ()
{
    //KAMUS
    int i, j, N, Un;
    //ALGORITMA
    printf("N = "); scanf("%d", &N);
    if (N<=0)
    {
        printf("Tidak terdefinisi");
    }else{
        for (i = 1; i<=N; i++)
        {
            Un = i*(i+1)/2;
            for (j = 1; j <=Un; j++)
            {
                printf("*");
            }
            printf(" --%d\n", Un);
        }
    }
    return 0;
}
