#include "bits/stdc++.h"

using namespace std;

int ss[10000];

int f(int n){
	
	if(ss[n] != 0 ) return ss[n] ;
	int sum = 0;
	sum++;//因为本身就是一个结果
	
	for(int i = 1 ; i <= n/2 ; i++){

		sum += f(i);
	} 
	ss[n] = sum;
	return sum;
	
	
}



int main(){
	
	int n;
	
	cin >> n ;
	
	cout << f(n);
	
	
	
	return 0;
} 
