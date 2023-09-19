#include<stdio.h>
#include<math.h>
int main(){
    int h;
    scanf("%d",&h);
    int end = 1;
    for(int i = 1 ; i< h ; i++){
        for(int j = 1; j<= end;j++){
            if(j == end || j ==1)printf("*");
            else{printf(" ");}
        }
        end+=1;
        printf("\n");
    }
    for(int i = 1; i<=h ; i++){
        printf("*");
    }
}