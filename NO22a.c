/*menghitung tahanan total dengan inputan lebih dari 0*/
int main ()
{
    //KAMUS
    float R1, R2, R3, Total;
    //ALGORITMA
    printf ("R1 = ");scanf("%f", &R1);
    printf ("R2 = ");scanf("%f", &R2);
    printf ("R3 = ");scanf("%f", &R3);
    Total = R1 + R2 + R3;
    if (R1<0 || R2<0 || R3<0){
        printf ("Masukkan ttahanan tidak boleh negatif");
    }else{
        printf ("%.2f", Total);
    }
    return 0;
}
