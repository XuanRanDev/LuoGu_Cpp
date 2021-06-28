#include "bits/stdc++.h"
#include "string"

using namespace std;

string node(){

	int N;
	
	string s = "",qt;
	
	char c;
	
	while(cin >> c){
		
		if(c=='['){
				
			cin >> N;
			qt = node();
			while(N--){
				s+=qt;
			}
			
		}else{
			
			if(c ==']'){
				return s;
			}else{
				s +=c;
			}
			
		}
		
	}
	

} 

int main(){
	
	cout << node();
		
	
	return 0;
}
