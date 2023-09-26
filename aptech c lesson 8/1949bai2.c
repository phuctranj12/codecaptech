#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int mangcp[101];
void sangtuoisv(){
    for(int i = 2 ; i <= 10 ; i++){
        mangcp[i*i] = 1;
    }
}

typedef struct ST_Sinhvien{
    char name[50],rollno[20];
    int age;
}sv;
int main(){
    sangtuoisv();
    int n ;
    int cnt = 0;
    scanf("%d",&n);
    sv arr[n];
    for(int i = 0 ; i < n; i++){
        printf("Nhap ten cho sinh vien thu %d :",i+1);
        fflush(stdin);fflush(stdout);
        gets(arr[i].name);
        printf("Nhap ma sinh vien thu %d :",i+1);
        fflush(stdin);fflush(stdout);
        gets(arr[i].rollno);
        fflush(stdin);fflush(stdout);
        printf("Nhap tuoi cho sinh vien thu %d :",i+1);
        scanf("%d",&arr[i].age);
        if(mangcp[arr[i].age]==1)cnt++;
    }
    if(cnt != 0){
        printf("Co %d sinh vien co tuoi la so chinh phuong :\n",cnt);
        for(int i = 0 ; i < n ; i++){
        if(mangcp[arr[i].age]==1){
            cnt +=1;
            printf("Ten : %s\n",arr[i].name);
            printf("Ma sinh vien : %s\n",arr[i].rollno);
            printf("Tuoi : %d\n",arr[i].age);
        }
    }
    }
    else printf("Khong co sinh vien nao co tuoi la so chinh phuong");
    
}