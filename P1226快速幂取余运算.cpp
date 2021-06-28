	#include "bits/stdc++.h"
	
	using namespace std;
	typedef long long  LL;
	
	/*
	 *	快速幂，取模算法 
	 */
	 
	
	LL getMIandMod(LL a,LL b,LL c){
		
		if(a==1 && b==0 && c == 1 )return 0;
		
		if(b == 0) return 1;
		//if( b == 1) return a;
		
		if( b % 2 == 1){
			return a*getMIandMod(a,b-1,c) % c;
		}else{
			LL mul = getMIandMod(a,b/2,c);
			return mul * mul % c; 
		}
		
	
	} 
	
	
	int A,B,C;
	
	
	
	LL getMI(LL x,LL y){
		LL ans = 1;
		
		for(int i = 1 ; i <= y ;i++){
			ans *= x; 
		}
		
		return ans;
	}
	
	
	
	int main(){
		
		cin >> A >> B >> C;
		
		
		
	//	LL ans = (getMI(A,B)%C);
	//
		printf("%d^%d mod %d=%d",A,B,C,getMIandMod(A,B,C));
		
		
		return 0;
	} 
