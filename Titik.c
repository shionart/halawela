int main()
{
    //KAMUS
    typedef struct{
        int x;
        int y;
    }Titik;
    Titik P;
    //ALGORITMA
    printf ("Masukkan koordinat titik P dengan format(x,y)\n");
    scanf("%d,%d", &P.x,&P.y);
    if (P.x == 0 || P.y == 0)
    {
        printf("P=(%d,%d), maka di sumbu koordinat", P.x, P.y);
    }else if(P.x>0 && P.y>0)
    {
        printf("P=(%d,%d), maka Kuadran I", P.x, P.y);
    }else if(P.x<0 && P.y>0)
    {
        printf("P=(%d,%d), maka Kuadran II", P.x, P.y);
    }else if(P.x<0 && P.y<0)
    {
        printf("P=(%d,%d), maka Kuadran III", P.x, P.y);
    }else //if(P.x>0 && P.y<0)
    {
        printf("P=(%d,%d), maka Kuadran IV", P.x, P.y);
    }

    return 0;
}
