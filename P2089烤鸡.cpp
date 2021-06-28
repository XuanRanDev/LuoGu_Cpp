#include "bits/stdc++.h"

using namespace std;

int N,a[11];
long ans = 1;
int ans2[10000][11];

int main(){
	
	cin >> N;
	
	for(a[0] = 1; a[0] <= 3 ; a[0]++){
		
		for(a[1] = 1; a[1] <= 3 ; a[1]++){
			
				for(a[2] = 1; a[2] <= 3 ; a[2]++){
		
					for(a[3] = 1; a[3] <= 3 ; a[3]++){
						
						
						for(a[4] = 1; a[4] <= 3 ; a[4]++){
		
							for(a[5] = 1; a[5] <= 3 ; a[5]++){
			
								for(a[6] = 1; a[6] <= 3 ; a[6]++){
		
									for(a[7] = 1; a[7] <= 3 ; a[7]++){
						
						
										for(a[8] = 1; a[8] <= 3 ; a[8]++){
		
											for(a[9] = 1; a[9] <= 3 ; a[9]++){
						
												long temp = 0;
												for(int i = 0 ; i < 10 ; i++){
													temp+= a[i];
												}
												
												
												if(temp == N){
													ans++;
													for(int i = 0 ; i < 10 ; i++){
														ans2[ans][i] = a[i];	
													}
													
												}
			
											} 
		
										}	
							
			
									} 
		
				}	
	
		} 
		
	}	
			
					} 
		
				}	
	
		} 
		
	}	
	
	cout << ans-1 << endl;
	for(int i = 2 ; i <= ans ; i++){
		
		for(int k = 0 ; k < 10 ; k ++){
			cout << ans2[i][k] << " "; 
		}
		cout << endl;
	}
	
	
	return 0;
	
}
