#include <stdio.h>
int main(){
    int n;
    int school[101][2];
    int change[101] = {};
    int success;
    while(scanf("%d",&n) != EOF){
        for(int i = 0 ; i < n ; i++){
            change[i] = 0;
        }
        for(int i = 0 ; i < n ; i++){
            scanf("%d %d",&school[i][0],&school[i][1]);
        }
        success = 0;
        for(int i = 0 ; i < n ; i++){
            if(school[i][0] > 0){
                for(int j = i ; j < n ; j++){
                    if(i == j){
                        continue;
                    }
                    else if(school[i][0] == school[j][1] && school[j][0] == school[i][1]){
                        change[i] = j+1;
                        change[j] = i+1;
                        school[i][0] = -1;
                        school[i][1] = -1;
                        school[j][0] = -2;
                        school[j][1] = -2;
                        success++;
                        break;
                    }
                }
                if(change[i] == 0){
                    change[i] = -1;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            printf("%d\n",change[i]);
        }
        printf("Success %d\n",success);
    }
}