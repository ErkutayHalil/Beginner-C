#include <stdio.h>
int main()
{
    /*dairenin alanını ve çevresini bulma problemi
    1- ihtiyacımız olan variables bul ve tanımla
    2- variables type bul
    3- formülü tanımla
    4- kullanıcıdan verileri al
    5- işlem yap
    6- çıktı ver*/

    float r,cevre,alan;
    const float pi=3.1415;
    printf("dairenin yarıçapını girin:");
    scanf("%f",&r);
    cevre= 2*pi*r;
    alan= pi*r*r;
    printf("dairenin cevresi:%f\n",cevre);
    printf("dairenin alanı:%f\n",alan);
    return 0;

}