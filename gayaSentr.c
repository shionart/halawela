/*menghitung gaya dengan diketahui m, v, r*/

int main()
{
    //KAMUS
    float m, v, r, F;
    //ALGORITMA
    printf ("m,v,r\n");
    scanf ("%f %f %f", &m, &v, &r);
    F= m* (v*v)/r;
    printf ("\nF = %.2f", F);
}
