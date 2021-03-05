#include <stdio.h>

int main()
{
  int a,b,J,KU,KA,BA;
  printf("input angka pertama : \n");
  scanf("%d",&a);
  printf("input angka kedua : \n");
  scanf("%d",&b);
    J=a+b;
    KU=a-b;
    KA=a*b;
    BA=a/b;
    printf("\nHasil Penjumlahan    : %d" ,J);
    printf("\nHasil Pengurangan   : %d" ,KU);
    printf("\nHasil Perkalian.        : %d" ,KA);
    printf("\nHasil Pembagian.      : %d" ,BA);
    return 0;
}
