#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{   int i;
    float ortalama=0.0,boyut=10.0,varyans=0.0,ssapma;
    int dizi[]={3,5,12,-5,7,21,10,35,25,-3};
    int dizi2[10];
    int max=dizi[0],min=dizi[0];
    printf("Dizimiz:");
    for(i=0;i<boyut;i++){
       printf("%d  ",dizi[i]);
         ortalama=ortalama+dizi[i];
         if(dizi[i]<min){       /////////  O(n)=N , worth case ve best case deðiþmez. kararlý bir algoritmadýr.
            min=dizi[i];
         }
         if(dizi[i]>max){
            max=dizi[i];
         }
    }
    printf("\n");
    ortalama=ortalama/boyut;
    for(i=0;i<boyut;i++){
         dizi2[i]=dizi[i]-ortalama;
         dizi2[i]=dizi2[i]*dizi2[i];
         varyans=+varyans+dizi2[i];
    }
    varyans=varyans/(boyut-1);
    ssapma=sqrt(varyans);
    printf("Min: %d\nMax: %d\nOrtalama: %f\nVaryans: %f\nStandart Sapma=%f\n",min,max,ortalama,varyans,ssapma);
  system("PAUSE");
  return 0;
}
