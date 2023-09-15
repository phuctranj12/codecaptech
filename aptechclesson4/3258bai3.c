#include<stdio.h>
#include<math.h>
int checknt(int a){
    int check=1;
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            check=0;
            break;
        }
    }
    return check;
}
int main(){
    int a[10];
    int sum = 0;
    int sum36 = 0;
    int sum37 =0;
    int thutu =0;
    int k[10];
    for(int i=0;i<=9;i++){
        printf("Nhap vao phan tu thu %d : ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]%2==0 && a[i]%3==0){sum36+=a[i];}
        if(a[i]%3==0 && a[i]%7==0){sum37+=a[i];}
        if(checknt(a[i])){k[thutu]=a[i];thutu++;}
    }
    printf("Tong cac phan tu trong mang : %d\n",sum);
    printf("Tong cac phan tu trong mang chia het cho 3 va 6 : %d\n",sum36);
    printf("Tonng cac phan tu trong mang chia het cho 3 va 7 : %d\n",sum37);
    printf("Mang k moi la\n");
    for(int i=0;i<thutu;i++){
        printf("%d ",k[i]);
    }
}