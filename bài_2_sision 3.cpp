#include <stdio.h>

int main (){
	float celsius; //khai bao bien do C
	float fahrenheit; //khai bao bien do C
	
	// nguoi dung can nhap nhiet do theo do celsius
	printf("nhat nhiet do theo celsius: ");
	scanf("doc du lieu tu ban phim: ");
	
	// chuyen doi tu do C sang do F
	fahrenheit = (celsius * 1.8) + 32;
	
	// xuat ra man hinh 
	printf("Nhiet do theo do fahrenheit: %.2f\n", fahrenheit);
	
	return 0; //ket thuc chuong trinh 
}
