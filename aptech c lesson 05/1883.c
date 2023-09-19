#include<stdio.h>
#include<math.h>
int main(){
    int a[101];
    a[0] = 1;
    a[1] = 1;
    for(int i = 2 ; i <= 100 ; i++){
        a[i] = a[i-1] + a[i-2];
    }
    int n ; 
    scanf("%d", &n);
    printf("%d",a[n]);
}