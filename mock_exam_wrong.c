#include <stdio.h>
#include <math.h>

int main(){
    int total;
    int i,j;
    int left,right,mid,count;
    int C[500001] = {};

    scanf("%d",&total);
    for(int i = 0 ; i < total ; i++){
        scanf("%d", &C[i]);
    }

    while(scanf("%d %d",&i,&j) != EOF){
        left = i;
        right = j;
        count = 0;
        for(int k = 0 ; k < total ; k++){
            if(C[k] > left && C[k] < right){
                count++;
            }
            if(C[k] == right){
                break;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}