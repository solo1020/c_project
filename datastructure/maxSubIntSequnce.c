#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    

    return 0;
}

int maxSubSeqSum1(int a[], int n){
    int thisSum, maxSum = 0;
    int i,j,k;
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            thisSum = 0;
            for(k = i; k <= j; k++){
                thisSum += a[k];
            }
            if(thisSum > maxSum){
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int maxSubSeqSum2(int a[], int n){
    int thisSum, maxSum = 0;
    int i,j,k;
    for(i = 0; i < n; i++){
        thisSum = 0;
        for(j = i; j < n; j++){
            thisSum += a[j];
            if(thisSum > maxSum){
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}



