#include "bits/stdc++.h"

using namespace std;

/*
 *  P1192 台阶问题 
 */ 

int main(){
	
	int num,k;
	cin >> num >> k;
	
	int data[num+1] = {1};
	
	//小于K的情况都是比较特殊的，因为你不能一次上k个然后退下来 
	for(int i = 1; i < k;i++ ){
		 
		 for(int j = 0; j < i; j++){
		 	
		 	data[i] += data[j];
		 	data[i] %= 100003;
		 } 
	} 
	
	//k步走法 
	for(int i = k; i <= num;i++){
		
		for(int j = i-k;j < i;j++){
			
			data[i] += data[j];
			data[i] %= 100003;
		}
		
	}
	
	cout << data[num];
	
	return 0;
}
