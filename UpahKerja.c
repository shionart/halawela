int main()
{
    //KAMUS
    int jam, golongan, UPerJam;
    float upah;
    //ALGORITMA
    printf ("Masukkan golongan = "); scanf("%d", &golongan);
    printf ("Masukkan jam kerja = "); scanf("%d", &jam);
    upah = 0;
    if (golongan >= 1 && golongan <= 4){
        switch (golongan)
        {
            case 1:
                UPerJam = 1000;
                break;
            case 2:
                UPerJam = 1500;
                break;
            case 3:
                UPerJam = 2000;
                break;
            case 4:
                UPerJam = 2500;
                break;
        }
        if (jam > 0 && jam <= 40){
            upah = jam*UPerJam;
            printf ("Upah yang didapat golongan %d dengan bekerja selama %d jam = Rp %.2f", golongan, jam, upah);
        } else if (jam > 40){
            upah = (40*UPerJam) + ((jam-40) * ((UPerJam*15)/10));
            printf ("Upah yang didapat golongan %d dengan bekerja selama %d jam = Rp %.2f", golongan, jam, upah);
        } else{
            printf("Tidak bekerja");
        }
    } else {
        printf("Golongan tidak terdefinisi");
    }

    return 0;
}
