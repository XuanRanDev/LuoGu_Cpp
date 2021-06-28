#include "stdio.h"

/*
 *  通过作图可得出，旋转后图案从4开始依次递减 
 *
 */

int main(){
	
	int data[5][5] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};//通过二维数组下标确定原始位置
	int result[5][5];
	
	int L,R;//左右下标控制 
	for(int i = 0; i < 4; i++){
		L = 4;
		R = i; 
		for(int j = 0 ; j <= 4 ; j++){
			result[i][j] = data[L--][R] ;
		}
	} 
	
	for(int i = 0; i < 4; i++){
		for(int j = 1 ; j <= 4 ; j++){

			printf("%d ",result[i][j]);
		}
		printf("\n");
	} 
	
	
	return 0;
}
