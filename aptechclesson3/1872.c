#include<stdio.h>
#include<math.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int min(int a,int b ){
    if(b<a){
        return b;
    }
    return a;
}

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int lonnhat = max(a,max(b,max(c,d)));
    int nhonhat = min(a,min(b,min(c,d)));
    printf("So lon nhat la :%d",lonnhat);
    printf("\nSo nho nhat la:%d",nhonhat);
}