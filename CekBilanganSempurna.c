/*mengecek apakah bilangan termasuk bilangan SEMPURNA atau tidak*/
int main()
{
    //KAMUS
    int j, i, Faktor;
    //ALGORITMA
    printf ("Masukkan bilangan = "); scanf("%d", &i);
    Faktor = 0;
    for (j=1;j<i;j++){
        if (i%j==0){
            Faktor = Faktor + j;
        }else{
            Faktor = Faktor;
        }
    }
    if (i >= 0 && Faktor == i){
        printf("%d Bilangan Sempurna",i);
    }else if (i<0){
        printf("ERROR");
    }else{
        printf("%d BUKAN Bilangan Sempurna",i);
    }
    return 0;
}
