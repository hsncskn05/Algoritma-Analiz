#include <stdio.h>
#include <stdlib.h>

static int step=0;

int power(int taban,int ust)
{
    int carp=1;
    int ust1=ust;
    int taban1=taban;

    if(ust==0)
    {
        return 1;
    }
    while(ust1!=1)
    {
        if(ust1%2==1)
        {
            carp*=taban1;
        }
        taban1*=taban1;
        ust1/=2;

        step++;
    }
    return carp*taban1;
}

int main()
{
    int sonuc;
    sonuc=power(3,62);
    printf("Sonuc:%d  step:%d",sonuc,step);


    return 0;
}
