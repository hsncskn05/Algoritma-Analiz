#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxSubSum(int *array,int length){
    int maxsum=0;
    int thissum=0;
    int i,j,k;

    for(i=0;i<length;i++){
        for(j=i;j<length;j++){
            thissum = 0;
            for(k=i;k<j;k++){
                thissum+=array[k];
            }
            if(thissum>maxsum){
                maxsum=thissum;
            }
        }
    }
    return maxsum;
}



int main()
{

        int dizi[8]={4,-3,5,-2,-1,2,6,-2};
        printf("\nMax Sum = %d",maxSubSum(&dizi,8));

    return 0;
}