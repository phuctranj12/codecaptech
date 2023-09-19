#include<stdio.h>
#include<math.h>
int main(){
    int h; 
    scanf("%d",&h);
    int n = 2*h +1;
    for(int i =1 ; i<= h ;i++){
        for(int j = h-i; j>=1;j--){
            printf(" ");
        }
        for(int k = 1 ; k <= i*2-1;k++){
            printf("*");
        }
        printf("\n");

    }

}
