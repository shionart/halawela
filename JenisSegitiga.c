/*menentukan jenis segitiga dari inputan panjang sisi sisinya*/
int main()
{
    //KAMUS
    int a, b, c;
    //ALGORITMA
    printf ("Masukkan panjang sisi-sisi segitiga\n");
    printf ("A = "); scanf ("%f", &a);
    printf ("B = "); scanf ("%f", &b);
    printf ("C = "); scanf ("%f", &c);
    if (a<=0 || b<= 0 || c<= 0){
        printf ("Terdapat nilai yang bukan segitiga");
    }else if (a==b && b==c){
        printf ("Merupakan segitiga sama sisi");
    }else if ((a==b && b !=c) || (a==c && c!= b) || (b == c && a != b)){
        printf ("Merupakan segitiga sama kaki");
    }else{
        printf ("Merupakan segitiga sembarang");
    }
    return 0;
}
