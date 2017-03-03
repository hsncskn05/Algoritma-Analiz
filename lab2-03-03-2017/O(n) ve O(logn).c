#include <stdio.h>
#include <stdlib.h>


int pow(int x, int y){
    int us=1;
    int i;
    for (i=0;i<y;i++){
        us=us*x;
    }
    return us;
}
long LongPow(int x,int n)
{
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0)
        return pow(x*x,n/2);
    else
        return pow(x*x,n/2)*x;
}


int main()
{
   int taban=5;
   int ust=3;

   printf("\nsonuc:%d",pow(taban,ust));
   printf("\nsonuc:%d",LongPow(taban,ust));



    return 0;
}
