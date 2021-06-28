#include "bits/stdc++.h"

using namespace std;

int N;

struct student{
	
	int T,K;
	int id;
	
};

bool cmp2(student a, student b) {
    // �������ֵһ��
    if (a.T * a.K == b.T * b.K) {
        // ʱ��һ�������С������ǰ��
        if (a.T == b.T) { // ʱ����һ����ʱ���ϳ�������ǰ��
            return a.id < b.id;
        } else {
            return a.T > b.T;
        }
    }
    // ����ֵ��һ����������ֵ�ɴ�С����
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
