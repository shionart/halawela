int Pangkat(int i, int j)
{
    //KAMUS
    int k;
    float Hasil;
    //ALGORITMA
    Hasil = 1;
    if (j == 0){
        Hasil = 1;
    }else if (j < 0){
        j = j *(-1);
        for(k = 1; k<=j ;k++)
        {
            Hasil = Hasil/i;
        }
    }else //b>0
    {
        for (k = 1; k <= j; k++)
        {
            Hasil = Hasil*i;
        }
    }
    printf ("%f", Hasil);
    return (Hasil);
}


int main ()
{
    //KAMUS
    int i, j;
    //ALGORITMA
    printf ("(i,j) = i pangkat j");
    printf ("Masukkan nilai i = "); scanf ("%d",&i);
    printf ("Masukkan nilai j = "); scanf ("%d",&j);
    Pangkat(i,j);
    return 0;
}
