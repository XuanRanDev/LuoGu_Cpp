#include "bits/stdc++.h"

/*
 *  此题未完成 
 */

using namespace std;

struct BaoZang{
	
	int duishu,jiazhi;
	double bili;
};

bool cmp(BaoZang a,BaoZang b){
	return a.bili>b.bili;//价值排序 
}

main(){
	
	int num;
	double BB;
	cin >> num >> BB;
	
	BaoZang Bz[num];
	
	for(int i = 0;i<num;i++){
		cin >> Bz[i].duishu >> Bz[i].jiazhi;
		Bz[i].bili = (double) Bz[i].jiazhi / Bz[i].duishu;
	}
	sort(Bz,Bz+num,cmp);
	
	double current_BB = 0; // 当前背包容量
	double result = 0; 
	
	for(int i =0;i<num;i++){
		
		if(current_BB>=BB) break;
		
		if(current_BB+Bz[i].duishu<=BB){
			current_BB += Bz[i].duishu;
			result += Bz[i].jiazhi;
		}else{
			int c = BB-current_BB;
			current_BB += c;
			result += (1.0*Bz[i].bili)*(c*1.0);
		}
				
	} 
	
	//cout << result;
	printf("%.2lf",result) ;
	return 0;
} 
