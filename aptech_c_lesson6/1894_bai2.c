#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i = 0 ;i<n ; i++){
        scanf("%d",&a[i]);
        b[n-1-i] = a[i];
    }
    for(int i = n ;i >= 0 ; i--){
        printf("%d ", b[i]);
    }
}