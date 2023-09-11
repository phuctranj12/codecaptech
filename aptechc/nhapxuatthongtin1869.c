#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int age;
    char name[50],address[200];
    char rollno[16];
    scanf("%d",&age);
    getchar();
    gets(name);
    gets(address);
    gets(rollno);
    printf("=============================\n");
    printf("|%s     |%d    |%s   |%s     |\n",name,age,rollno,address);
    printf("=============================\n");
    
}
