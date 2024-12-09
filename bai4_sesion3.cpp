#include <stdio.h>

int main() {
	float math, literature, english; //khai bao diem va luu tru diem 
	float total; // khai bao de luu tru tong diem 
	float average; // khai bao bien de luu tru diem trung binh 
	
	// nhap diem tu ban phim 
	printf("nhap diem mon toan: ");
	scanf("%f", &math); // doc diem kon toan 
	
	printf("nhap diem mon van: ");
	scanf("%f", &literature); // doc diem mon van
	
	printf("nhap diem mon tieng anh: ");
	scanf("%f", &english); // doc diem mon tieng anh 
	
	//xuat ket qua
	total = math + english + literature; // tinh diem tong
	average = (math + english + literature)/3; // tinh diem trung binh
	
	//hien thi ket qua voi 2 chu so thap phan 
	printf("tong diem: %.2f\n", total);
	printf("tong diem trung binh: %.2f\n", average);
	
	return 0 ; //ket thuc chuong trinh 
}
