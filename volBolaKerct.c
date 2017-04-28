/*menghitung volume bola dan volume kerucut diketahui r*/

int main()
{
    //KAMUS
    float r, Vb, Vk;
    const float PHI = 3.1415;
    //ALGORITMA
    printf ("r\n");
    scanf ("%f", &r);
    Vb = (PHI*(r*r*r)*4/3);
    Vk = Vb/2;
    printf ("Vb = %f", Vb, Vk);
}
