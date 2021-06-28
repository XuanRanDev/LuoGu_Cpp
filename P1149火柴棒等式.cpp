#include "bits/stdc++.h"

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	int data[10] = {6,2,5,5,4,5,6,3,7,6};
	
	int result = 0;
	
	for(int i = 0; i < 10; i++){
		
		int S = n - data[i];
		
		
		for(int j = 0; j < 10; j++){
			
			
			for(int k = 0; k < 10 ;k++){
				
				S -= 2;
				if(i==j) continue; 
	
				if(S - data[j] == data[k]+2) result++;
				
			}
		
			
		}
	}
	
	cout  << result;
	
	return 0;
}
