#include "bits/stdc++.h"

using namespace std;

int N;

struct student{
	
	int T,K;
	int id;
	
};

bool cmp2(student a, student b) {
    // 如果贡献值一样
    if (a.T * a.K == b.T * b.K) {
        // 时长一样，编号小的排在前面
        if (a.T == b.T) { // 时长不一样，时长较长的排在前面
            return a.id < b.id;
        } else {
            return a.T > b.T;
        }
    }
    // 贡献值不一样，按贡献值由大到小排序
    return a.T * a.K > b.T * b.K; 
}


bool cmp(student x,student y){
	
	if(x.T*x.K > y.T*y.K){
		return true;
	} 
	if(x.T*x.K < y.T*y.K){
		return false;
	} 
	if(x.T*x.K == y.T*y.K){
		
		if(x.T > y.T){
			return true;
		}
		if(x.T < y.T) return false;
		if(x.T == y.T){
			
			if(x.id < y.id){
				return true;
			}else{
				return false;
			}
			
		} 
	} 
	
}

student s[10000000];

int main(){
	
	cin >> N;
	
	for(int i = 1 ; i <= N ; i++){
		cin >> s[i].T >> s[i].K;
		s[i].id = i;
	}
	
	sort(s+1,s+N+1,cmp);
	
	for(int i = 1 ; i <= N ; i++){
		cout << s[i].id << " ";
	}
	
	
	return 0;
} 
