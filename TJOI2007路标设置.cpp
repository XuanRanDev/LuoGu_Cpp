#include "bits/stdc++.h"

using namespace std;

int L,N,K;

int data[100050];
bool flag[100050]; 

int main(){
	
	cin >> L >> N >> K;
	
	for(int i = 0 ; i < N ; i ++){
		cin >> data[i];
	}
	

	while(K--){ // K¸öÂ·±ê 
	
		int min = 0; 
		
		for(int i = 0 ; i < N ; i ++){
			
			if(data[i+1] - data[i] < min && data[i+1] - data[i] >= 0  && !flag[i]){
				min = i;
				flag[i] = 1;
			}
		} 
		
		if((data[min+1] - data[min] ) % 2 == 0){
			cout << data[min+1] / 2;
		}else{
			cout << (data[min+1]+1) / 2;
		}
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
