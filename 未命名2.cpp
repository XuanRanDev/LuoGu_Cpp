#include "bits/stdc++.h"

using namespace std;

string s,s1;

int ans ;

int main(){
	
	cin >> s >> s1;
	
	for(int i = 0 ;  i < s.size() ;  i++){
		
		
		for(int k= 0 ; k < s1.size() ; k++){
			
			if(s[i] == s1[k]){
				
				int temp = 0;
				for(int q = i ; q < s.size() && q <s1.size() ; q++ ){
					if(s[q] = s1[q]){
						
						temp++;
						if(temp > ans){
							ans = temp;
						}
						ans++;
					}
					
				}
				
				
			}
			
		}
		
	}
	
	
	cout << ans;
	
	
	
	return 0;
}
