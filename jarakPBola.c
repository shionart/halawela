/*menghitung jarak yang ditempuh benda dengan gerak parabola*/

int main()
{
    //KAMUS
    float v0, t, y;
    const float g = 9.8;
    //ALGORITMA
    printf ("v0,t\n");
    scanf ("%f %f", &v0, &t);
    y = v0*t - (g*(t*t)/2);
    printf ("\ny = %.2f", y);
}
