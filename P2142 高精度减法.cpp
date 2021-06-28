#include "bits/stdc++.h"

using namespace std;

/*
 * P2142 高精度减法 
 *
 */

int main(){
	
	string x,y;
	
	cin >> x >> y;
	
	int a[100000],b[100000],c[10000],la,lb,lc;
	
	la = x.length();
	lb = y.length();
	
	lc = max(la,lb);
	
	if(la < lb || la == lb && x < y){
		
		swap(x,y);
		swap(la,lb);
		cout << "-";
		
	}
	
	
	for(int i = 0 ; i < la ; i++){
		a[la-i] = x[i] - '0';
	}
	
	for(int i = 0 ; i < lb ; i++){	
		b[lb-i] = y[i] - '0';	
	}
	

	
	for(int i = 0; i <= lc ; i++){
			
		if(a[i] - b[i] < 0){
			
			a[i+1]--;
			a[i] += 10;
		}
				
		c[i] = a[i] - b[i];	
		
	}
	
	
	while(c[lc] == 0 && lc > 1) lc--;
	
	for(int i = lc ; i > 0; i--){
		
		cout << c[i];
	}
	
	
	return 0;
}
