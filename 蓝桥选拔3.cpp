#include "stdio.h"

long long addnum(int data,int num){
	
	long long result = data;
	for(int i = 1 ; i < num;i++){
		result *=10;
		result+=data;
	}
	return result;
	
}


int main(){
	
	int data,num;
	
	scanf("%d %d",&data,&num);
	
	long long result = 0 ;
	long long current_val = data;
	
	for(int i = 2 ; i <= num ; i++){
		
		result += current_val;
		current_val = addnum(data,i);
	//	printf("%d\n",current_val);
		
	}
	result += current_val;
	printf("%d",result);
	
	
	
}
