#include "bits/stdc++.h"

using namespace std;

/*
	此题未过，不会 
 */


int main(){
	
	int num;
	
	cin >> num;
	
	int data[num];
	
	for(int i = 0;i<num;i++){
		
		cin >> data[i];
		
	}
	
	sort(data,data+num);
	
	for(int i = 0 ; i < num ; i++){
		
		cout << data[i] << " ";
		
	}
	
	
	
	return 0;
} 
