#include <stdio.h>
int main(){
	float canh, chieucao, dientich;
	
	printf("nhap canh\n");
	scanf("%f", &canh);
	printf("nhap chieu cao\n");
	scanf("%f", &chieucao);
	
	dientich = (chieucao * canh) / 2;
	
	printf("dien tich la %.2f\n", dientich);
}
