#include<stdio.h>
#include<math.h>
int arr[1000001]={0};
void sangsnt(){
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2 ; i <= 1000 ; i++ ){
        if(arr[i] == 0)
        for(int j = i * i ; j <= 1000000 ; j+=i){
            arr[j] = 1;
        }
    }
}
int isPrime(int a){
    if(arr[a]==1)return 0;
    return 1;
}
int main(){
    sangsnt();
    int n ; 
    scanf("%d",&n);
    printf("%d",isPrime(n));
}