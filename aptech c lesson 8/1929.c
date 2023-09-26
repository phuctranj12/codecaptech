#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct hinhchunhat{
    float chieudai,chieurong ,dientich;
}hcn;

int main(){
    hcn list[5];
    float sum = 0;
    for(int i = 0 ; i <= 4 ; i++){
        printf("Nhap chieu dai cho Hinh chu nhat thu %d :",i+1);
        scanf("%f",&list[i].chieudai);
        printf("Nhap chieu rong cho Hinh chu nhat %d :",i+1);
        scanf("%f",&list[i].chieurong);
        list[i].dientich = list[i].chieudai * list[i].chieurong;
        sum += list[i].dientich;
    }
    printf("Tong dien tich cua 5 hinh chu nhat la : %.4f",sum);
}