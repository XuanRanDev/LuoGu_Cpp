#include "bits/stdc++.h"

using namespace std;

/*
 *	不理解题目啥意思。。。
  
 */

int T;
int A;

void getjc(int x,int y){
	
	long long ans = 1;
	for(int i = x ; i >= 1 ; i--){
		
		ans *= i;
		cout << ans << " ";
	}
	
//	int ans = 0;
//	long long k = 0;
//	for(int i = x;i>=2 ; i--){
//		
//		k += i*k;
//		while(k>0){
//			
//			if(k%10 == y){
//				ans++;
//			} 
//			
//			k/=10;
//		}
//		
//	}
//	
//	cout << ans << endl;	
	
}

int main(){
	
	cin >> T;
	
	
	for(int i = 1 ; i <= T ; i++){
		int a,b;
		cin >> a >> b;
		getjc(a,b);
	} 
	
	
	
	return 0;
}
