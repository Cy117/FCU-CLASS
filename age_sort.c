#include <stdio.h>

void change(int count){
    int old[200001] = {};
    int tmp;
    for(int i = 0 ; i < count ; i++){
        scanf("%d",old[i]);
    }
    for(int i = 0 ; i < count-1 ; i++){
        for(int j = 0 ; j < count-1-i ; j++){
            if(old[j] > old[j+1]){
                tmp = old[j];
                old[j] = old[j+1];
                old[j+1] = tmp;
            }
        }
    }
    for(int i = 0 ; i < count ; i++){
        printf("%d ",old[i]);
    }
    printf("\n");
}

int main(){
    int year[500001];
    int s = 0;

    while(scanf("%d",&year[s]) != 0){
        s++;
    }

    for(int k = 0 ; k < s ; k++){
        change(year[k]);
    }

    return 0;
}