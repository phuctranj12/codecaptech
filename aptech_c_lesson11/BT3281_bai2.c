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
int max(int n , int m ){
    if(n < m )return m;
    return n ; 
}
int min(int n , int m ){
    if(n > m)return m ;
    return n ;
}
int main(){
    sangsnt();
    printf("Please , enter a number:\n");
    int a , b ;
    printf("+ n: ");
    scanf("%d",&a);
    printf("+ m: ");
    scanf("%d",&b);
    int n = min(a,b);
    int m = max(a,b);
    int check = 1;
    for(int i = n ; i <= m ; i++ ){
        if(isPrime(i)){
            if(check == 1)printf("The prime numbers between %d and %d :\n",n,m);
            check = 0;
            printf("%d\n",i);
        }
    }
    if(check == 1 )printf("There are no prime numbers between %d and %d\n",n,m);
}