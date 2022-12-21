#include <stdio.h>

int main()
{
    float r, t, sMk, lPk;
    // r= jari-jari, t= tinggi, sMk= sisi miring kerucut,lPk= luas permukaan kerucut
    float phi=3.14;
    //pakai float untuk memasukkan nilai operasi bilangan pecahan

    printf("Challenge Membuat Aplikasi Penghitung Luas Permukaan Kerucut\n");
    printf("Masukkan nilai jari-jari =");
    scanf("%f", &r);
    printf("Masukkan nilai tinggi =");
    scanf("%f", &t);
    printf("masukkan nilai sisi miring kerucut=");
    scanf("%f", &sMk);
    //Masukkan rumus rumusnya
    lPk=(phi*r*sMk) +(phi*r*r);
    //Rumus permukaan kerucut

    printf("\nRumus luas permukaan kerucut = Luas permukaan segitiga + luas permuakaan lingkaran\n");
    printf("Hasilnya adalah %.2f", lPk);

    return 0;
}
