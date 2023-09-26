#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int mangscp[1000001];
void sangscp(){
    for(int i = 2 ; i <= 1000;i++){
        mangscp[i*i] = 1;
    }
}
void output(int a[],int n){
    printf("\nCac phan tu sau khi sap xep la :");
    for(int i = 0 ;i<n;i++){
        printf("%d ",a[i]);
    }
}
void sapxepchanle(int a[],int n){
    int l = 0 ;int r = n-1;
    while(a[l] % 2 == 1)l++;
    while(a[r] % 2 == 0) r--;
    for(int i = l ; i < r ; i++){
        if(a[i] % 2 !=0){
            int check = 0;
            for(int j = i+1 ; j <= r ;j++){
                if(a[j]%2==0){
                    check = 1;
                    int tam = a[i];
                    a[i] = a[j];
                    a[j] = tam ;
                    break;
                }
            }
            if(check == 1)break;
        }
    }
}
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    int sum5 = 0;
    for(int i = 0 ; i < n ;i++){
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0)sum5 += a[i]; 
    }
    sangscp();
    printf("Tong cac phan tu chia het cho 5 trong mang la : %d\n",sum5);
    printf("Cac so chinh phuong trong mang la :");
    for(int i = 0 ; i< n ; i++){
        if(mangscp[a[i]]==1)printf("%d ",a[i]);
    }
    sapxepchanle(a,n);
    output(a,n);
}