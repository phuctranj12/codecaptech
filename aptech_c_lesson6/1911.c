#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int *p;
    p = (int *) calloc(10 , sizeof(int));
    for(int i = 0 ; i<10 ; i++){
        printf("\nNhap phan tu p[%d] :",i);
        scanf("%d",p + i);
    }
    int sum = 0 ;
    for(int i = 0 ; i<10 ; i++){
        if(*(p+i) % 2 == 0 ){
            sum += *(p+i);
        }
    }
    printf("%d",sum);
}