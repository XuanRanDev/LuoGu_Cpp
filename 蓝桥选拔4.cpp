#include "stdio.h"

int main(){
	
	double result = 0.0;
	
	double L = 2, R = 1;//分子和分母
	
	for(int i = 0 ; i < 15; i++){
		
		result += L / R ; //不需要强制类型转换，因为双方都是双精度
		
		L += R;
		
		R = L - R;  
		
	} 
	
	printf("%f",result);
}
