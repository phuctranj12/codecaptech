#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int min;
    int max;
    if(a<b){min =a;max =b;
    }
    else{ min=b;max=a;
    }
    int sum=0;
    for(int i=min+1;i<max;i++){
        sum+=i;
    }
    printf("Tong cac phan tu giua a va b la : %d",sum);
}