#include "bits/stdc++.h"

/*
 *  ����δ��� 
 */

using namespace std;

struct BaoZang{
	
	int duishu,jiazhi;
	double bili;
};

bool cmp(BaoZang a,BaoZang b){
	return a.bili>b.bili;//��ֵ���� 
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
	
	double current_BB = 0; // ��ǰ��������
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
