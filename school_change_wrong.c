#include <stdio.h>
int main(){
    int n;
    int school[101][2];
    int save[101];
    int success,no;
    while(scanf("%d",&n) != EOF){
        for(int i = 0 ; i < n ; i++){
            scanf("%d %d",&school[i][0],&school[i][1]);
        }
        success = 0;
        no = -1;
        for(int i = 0 ; i < n ; i++){
            if(school[i][0] > 0){
                for(int j = 0 ; j < n ; j++){
                    if(i == j){
                        continue;
                    }
                    else if(school[i][0] == school[j][1] && school[j][0] == school[i][1]){
                        
                        school[i][0] = -1;
                        school[i][1] = -1;
                        school[j][0] = -2;
                        school[j][1] = -2;
                        no = 1;
                        success++;
                        break;
                    }
                }
                if(no == -1){
                    printf("%d\n",no);
                }
            }
        }
        printf("Success %d",success);
    }
}