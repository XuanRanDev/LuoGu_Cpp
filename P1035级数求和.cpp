#include "bits/stdc++.h"

using namespace std;

int main(){
	
	double n ;
	
	cin >> n;
	
	double sum = 0;
	double i = 1.0;
	while(sum < n){
		sum += 1.0/i;
		i++;
		
	}
	cout << (int)i-1;
	
	return 0;
}
