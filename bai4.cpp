#include <stdio.h>
int main(){
	float toan, van, anh, tong, trungbinh;
	
	printf("nhap diem toan \n");
	scanf("%f",&toan);
	printf("nhap diem van \n");
	scanf("%f",&van);
	printf("nhap diem anh \n");
	scanf("%f",&anh);
	
	tong = toan + van + anh;
	trungbinh = (toan + van + anh)/3;
	
	printf("tong la %.2f\n", tong);
	printf("trung binh cac mon la %.2f\n", trungbinh);
}
