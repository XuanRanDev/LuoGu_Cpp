#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long total,num;
	cin >> total >> num;
	
	long data[total];
	long check[num];
	
	long long i; 
	for(i=0 ;i<total;i++){
		cin >> data[i];
		
	} 
	
	for( i =0;i<num;i++){
		cin >> check[i];
	}
	for(i = 0;i< num;i++){
		
		cout << data[check[i]-1] << "\n";
	}
	
	
	return 0;
} 
