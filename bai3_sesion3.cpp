#include <stdio.h>
#include <math.h> //thu vien de su dung hang so M_PI

int main() {
	float radius; //khai bao luu truu ban kinh 
	float perimemter; //khai bao bien luu truu chu vi 
	float area; //khai bap bien luu truu dien tich 
	
	// nhap ban kinh tu ban phim 
	printf ("nhap ban kinh hinh tron (r): ");
	scanf ("%f",&radius); // doc gia tri tu ban phim 
	
	// tinh chu vi va ban kinh 
	perimemter = 2 * M_PI * radius; // cong thuc tinh ban kinh duong tron 
	area = M_PI * radius * radius; // cong thuc tinh dien tich duong tron 
	
	// hien thi ket qua bang he so thap phan 
	printf("chu vi hinh tron: %.2f\n", perimemter);
    printf("dien tich hinh tron: %.2f\n", area);
    
    return 0; // ket thuc chuong trinh 
} 







