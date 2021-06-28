#include "bits/stdc++.h"

using namespace std;

string s;

int main(){
	
	cin >> s;
	
	char x = 'x';
	int XS = 0,CS = 0;
	int dh_flag = 1;
	int fh_flag = 1;
	int hcq = 0;
	
	for(int i = 0 ; i < s.size() ; i++){
		
		char c = s[i];
		
		if( c >= '0' && c <= '9'){
			hcq *= 10;
			hcq += (c-'0');
		//	continue;
		}else{
			
			if( c >= 'a' && c <= 'z'){
				
				if(hcq == 0){
					XS += (dh_flag) * fh_flag;
				}else{
					XS += hcq * (dh_flag) * fh_flag;
				}
				x = c;
			//	continue;

			}else{	
				CS += hcq * (-dh_flag) * fh_flag;
 			}
			hcq = 0; // Çå¿Õ»º³åÇø 
		}
		
		if(c == '+'){
			fh_flag = 1;
			continue;
		}else if(c=='-'){
			fh_flag = -1;
			continue;
		}else if(c=='='){
			dh_flag = -1;
			fh_flag = 1;
			continue;
		}else{
		//	cout << "NoKnow data :" << c << endl;
			continue;
		}
	} 
	
	if(hcq != 0){
		CS += hcq * (-dh_flag) * fh_flag; 
	}
	
	//cout << XS << " " << CS;
	double ans = ((double)CS) / ((double)XS);
	
	if(ans==0){
		ans = abs(ans); 
	}
	
	printf("%c=%0.3f",x, ans ); 
	
	return 0; 
} 
