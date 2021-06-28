#include "bits/stdc++.h"

using namespace std;


/*
 *	高精度乘法 
 *   
 *	By XuanRan on 2021/03/02
 */
int main(){
	
	string x,y;
	
	cin >> x >> y;
	
	int a[100000],b[100000],c[100000],la,lb,lc;
	
	la = x.length();
	lb = y.length();
	lc = la + lb;
	
	
	for(int i = 0 ; i < la ; i++){
		a[la-i] = x[i] - '0';
	}
	for(int i = 0 ; i < lb ; i++){
		b[lb-i] = y[i] - '0';
	}
	


	int k = 0; // 下标控制 
	int f = 0;
	
	for(int i = 1 ; i <= la ; i++){
		
		for(int j = 1 ;j <= lb; j++){
		
			c[f] += a[i] * b[j];
			c[f+1] += c[f] / 10 ;
			c[f] %= 10;
			f++;	
		}
		
		k++;
		f = k;
		
	}
	
	
	while(c[lc-1] == 0 && lc != 1)  lc--; 
	
	for(int i = lc-1 ; i >= 0 ; i--){
		cout << c[i];	
	}
	
	return 0;
} 
