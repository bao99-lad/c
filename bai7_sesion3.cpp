#include <stdio.h>

int main(){
	int number; // luu tru so nguyen da nhap
	int sum; // luu tru tong cac chu so
	int digit; // luu tru tung chu so
	
	// nhap du lieu so nguyen tu ban phim 
	printf("nhap mot so nguyen co 4 chu so: ");
	scanf("%d", &number); // doc gia tri tu ban phim
	
	// tinh tong cac so
	while (number > 0) {
		digit = number % 10; // lay chu so cuoi cung
		sum = digit; // cong chu so vao tong 
		number/= 10; // loai bo chu so cuoi cung 
	}
	
	// hien thi ket qua
	printf("tong cac chu so la: %d\n", sum);
	
	return 0; //ket thuc
}
