#include "bits/stdc++.h"

using namespace std;

int main(){
	
	for(int i = 100 ; i <= 999 ;i++){
		
		int temp = i;
		int c = temp%10;
		temp/=10;
		int b = temp%10;
		temp/=10;
		int a = temp%10;
		
		if(a*a*a+b*b*b+c*c*c == i){	
			cout << i << endl; 
		} 
	}
	return 0;
} 
