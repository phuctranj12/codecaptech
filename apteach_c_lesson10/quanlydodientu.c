#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

typedef struct SPDienTu_ST {
	char ten[20];
	char ma[15];
	long int gia;
	char nhasx[20];
} SPDienTu;

void showMenu();
void nhapDuLieu(SPDienTu *p);
void sapXep(SPDienTu *p);
void hienThi(SPDienTu *p);
void thongKe(SPDienTu *p);
void timKiem(SPDienTu *p);

int main(int argc, char *argv[]) {
	SPDienTu danhsachsp[3];
	int select, i;
	
	do {
		showMenu();
		fflush(stdin);fflush(stdout);
		scanf("%d", &select);
		
		switch(select) {
			case 1: {
				nhapDuLieu(danhsachsp);
				break;
			}
			case 2:{
				sapXep(danhsachsp);
				hienThi(danhsachsp);
				thongKe(danhsachsp);
				break;
			}
			break;
			case 3:
				timKiem(danhsachsp);
			break;
			case 4:
			
			break;
			case 5:
				printf("\nThoat chuong trinh!!!");
			break;
			default:
				printf("\nNhap sai!!!");
			break;	
		}
	}while(select != 5);
	
	return 0;
}


void showMenu() {
	printf("\n1. Nhap du lieu cua tung san pham");
	printf("\n2. Sap xep va hien thi thong tin chi tiet");
	printf("\n3. Tim san pham theo nha san xuat");
	printf("\n4. Ghi vao tap tin nhi phan");
	printf("\n5. Thoat");
	printf("\nnhap lua chon: ");
}

void nhapDuLieu(SPDienTu *p) {
	int i;
	printf("\nNhap du lieu cho tung san pham: ");	
	for(i = 0; i < 3; i++) {
		printf("\nNhap San Pham Thu %d:",i+1);
		printf("\nNhap ten: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].ten);
		printf("\nNhap Ma: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].ma);
		printf("\nNhap Nha san xuat: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].nhasx);
		printf("\nNhap Gia: ");
		scanf("%ld", &p[i].gia);
	}
}

void sapXep(SPDienTu *p) {
	int i, j;
	for(i=0;i<2;i++) {
		for(j=i+1;j<3;j++) {
			int cmp = strcmp(p[i].ten, p[j].ten);
			if(cmp < 0) {
				SPDienTu tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}

void hienThi(SPDienTu *p) {
	printf("\n%5s||%15s||%5s||%20s||%5s", "STT", "Ten", "Ma", "Nha San Xuat", "Gia");
	int i;
	for(i=0;i<3;i++) {
		printf("\n%5d||%15s||%5s||%20s||%5d", i+1, p[i].ten, p[i].ma, p[i].nhasx, p[i].gia);
	}
}

void thongKe(SPDienTu *p) {
	int count[3];
	int i, j;
	
	for(i=0;i<3;i++){
		count[i] = 1;
	}
	for(i=0;i<2;i++){
		if(count[i] == 0) continue;
		for(j=i+1;j<3;j++) {
			if(count[j] == 0) continue;
			
			int cmp = strcmp(p[i].nhasx, p[j].nhasx);
			if(cmp==0) {
				count[i]++;
				count[j]--;
			}
		}
	}
	for(i=0;i<3;i++){
		if(count[i] > 0) {
			printf("\nNha san xuat %s co %d san pham", p[i].nhasx, count[i]);
		}
	}

}

void timKiem(SPDienTu *p) {
	printf("\nNhap ten nha san xuat: ");
	char search[30];
	fflush(stdin);fflush(stdout);
	gets(search);
	
	int i, count = 0;
	for(i=0;i<3;i++) {
		int cmp = strcmp(p[i].nhasx, search);
		if(cmp == 0) {
			if(count == 0) {
				printf("\n%5s||%15s||%5s||%20s||%5s", "STT", "Ten", "Ma", "Nha San Xuat", "Gia");
			}
			count++;
			printf("\n%5d||%15s||%5s||%20s||%5d", i+1, p[i].ten, p[i].ma, p[i].nhasx, p[i].gia);
		}
	}
	
	if(count == 0) {
		printf("\nKhong tim thay nha san xuat nao tuong ung");
	}
}