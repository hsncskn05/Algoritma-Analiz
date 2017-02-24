#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int x, int y){
    int us=1;
    int i;
    for (i=0;i<y;i++){
        us=us*x;
    }
    return us;
}

int main()
{
        printf("*****SONUC*****\n     %d",power(2,10));

      

    return 0;
}