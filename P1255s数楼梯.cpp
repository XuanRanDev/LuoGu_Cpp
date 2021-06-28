#include "bits/stdc++.h"

using namespace std;

/*
 
 	数据过大，应用高精度 

*/

int main(){
	
	long long num;
	
	int k = 3; 
	
	cin >> num;
	
	long long data[num+1] = {1};
	
	for(int i = 1; i < k; i++){
		
		for(int j = 0; j < i ; j++ ){
			
			data[i] += data[j];
		}
		
	}
	
	for(int i = k ; i <= num ; i++){
		
		for(int j = i-k ; j < i ; j++){
			
			data[i] += data[j];
			
		}
		
	}
	
	
	cout << data[num];
	
	
	
	
	
	return 0;
}
