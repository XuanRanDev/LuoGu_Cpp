#include "stdio.h"

int main(){
	
	double result = 0.0;
	
	double L = 2, R = 1;//���Ӻͷ�ĸ
	
	for(int i = 0 ; i < 15; i++){
		
		result += L / R ; //����Ҫǿ������ת������Ϊ˫������˫����
		
		L += R;
		
		R = L - R;  
		
	} 
	
	printf("%f",result);
}
