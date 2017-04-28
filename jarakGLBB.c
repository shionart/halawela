/*menghitung jarak dengan diketahui v0, t, dan a*/

int main()
{
    //KAMUS
    float v0, t, a, S;
    //ALGORITMA
    printf ("V0, t, s\n");
    scanf ("%f %f %f", &v0, &t, &a);
    S = v0*t + (a*(t*t)/2);
    printf ("\nS = %.2f", S);
}
