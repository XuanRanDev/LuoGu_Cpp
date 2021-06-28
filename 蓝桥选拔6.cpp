#include "bits/stdc++.h"

using namespace std;

int main(){
	
	int num,people;
	
	cin >> num >> people;
	
	int L = 1 , R = 1;//L表分子R分母
	
	for(int i = 0 ; i < people ; i++) {
		
		L *= num -- ;
	}
	
	for(int i = people; i >= 1; i--){
		
		R *= i;
	}
	
	cout << (int)L/R;
	
	return 0;

}
