#include<stdio.h>
#include<math.h>
int main(){
    int h;
    scanf("%d",&h);
    int cot = 0;
    for(int i =1 ; i<=h;i++){
        cot += 2;
    }
    int start = cot/2 + 1;
    int end = start;
    for(int i = 1 ; i <= h ; i++){
        for(int j = 1; j <= cot ;j++){
            if(j<= end && j>=start){
                printf("*");
            }
            else{printf(" ");}
        }
        printf("\n");
        start--;
        end++;
    }
}
