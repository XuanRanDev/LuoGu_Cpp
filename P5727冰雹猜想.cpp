#include "bits/stdc++.h"

using namespace std;

int main(){
	
	int num;
	
	cin >> num;
	
	int data[100000];
	
	int flag = 0;
	
	while(num != 1){
		
		data[flag] = num;
		
		flag++;

		
		if(num%2==0){
			
			num /= 2;
			
		}else{
			
			num *= 3;
			num++;
			
		}

		
	}
	data[flag] = 1;
	
	for(int i = flag; i >= 0; i--){
		
		cout << data[i] <<" ";
	}
}
