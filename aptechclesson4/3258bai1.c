#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0)printf("N la so chan va n chia het cho 2\n");
    else printf("N la so le va n ko chia het cho hai\n");
    if(n%7==0)printf("N chia het cho 7\n");
    int check=0;
    if(n<2){printf("N ko la so nguyen to");}
    else{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            check=1;
            break;
        }
    }
    if(check==0)printf("N la so NT");
    else printf("N khong la so NT");
    }
}
