#include "bits/stdc++.h"
#include "string"

using namespace std;

int charToInt(char data){
	return data-0x40; 
}  

int main(){
	
	string a,b;
	
	cin >> a >> b;
	
	long sum_a = 1,sum_b = 1;
	
	for(int i = 0 ; i <= a.length() ; i++){
		
		sum_a *= charToInt(a[i]);
		
		
		
	}
	for(int i = 0 ; i <= b.length() ; i++){
		
		sum_b *= charToInt(b[i]);
		
	}
	
	//cout << sum_a << " " << sum_b << "\n";
	
	if(sum_a % 47 == sum_b %47){
		cout << "GO";
	}else{
		cout << "STAY";
	}
	
	
	
	return 0;
} 
