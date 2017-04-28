/*menghitung luas dan keliling layang layang, jika diketahui sisi dan diagonalny*/

int main()
{
    //KAMUS
    float s1, s2, d1, d2, Keliling, Luas;
    //ALGORITMA
    printf ("s1, s2, d1, d2\n");
    scanf ("%f %f %f %f", &s1, &s2, &d1, &d2);
    Keliling = 2 * (s1+s2);
    Luas = (d1*d2)/2;
    printf ("Keliling = %f\nLuas = %f", Keliling, Luas);
}
