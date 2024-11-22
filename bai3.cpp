#include <stdio.h>
int main(){
	float r;
	float pi = 3.14;
	float chuvi, dientich;
	
	printf("nhap ban kinh \n");
	scanf("%f",&r);
	
	chuvi = 2 * pi * r;
	dientich = pi * r * r;
	
	printf ("chu vi la %.2f\n", chuvi);
	printf ("dien tich la %.2f\n", dientich);
	return 0;
}
