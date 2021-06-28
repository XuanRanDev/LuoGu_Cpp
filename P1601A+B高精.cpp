#include "bits/stdc++.h"
#include "string"

using namespace std;

int main(){
	
	string x,y;
	
	cin >> x >> y;
	
	int a[10000],b[10000],c[10000],la,lb,lc;
	
	la = x.length();
	lb = y.length();
	
	lc = max(la,lb);
	
	for(int i = 0 ; i < la ; i++){
		
		a[la-i] = x[i] - '0';
		
	}
	for(int i = 0 ; i < lb ; i++){
		
		b[lb-i] = y[i] - '0';
		
	}
	
	for(int i = 1; i <= lc ; i++){
		
		c[i] += a[i] + b[i];
		c[i+1] = c[i] / 10; //取出十位
		c[i] = c[i] % 10; // 取出个位
		 		
	}
	
	if(c[lc + 1] > 0) lc++;
	
	for(int i = lc ; i > 0 ; i--){
		
		cout << c[i];
	}
	
	
	return 0;
}

 
