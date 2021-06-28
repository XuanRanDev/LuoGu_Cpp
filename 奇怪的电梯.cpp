#include "bits/stdc++.h"


using namespace std;

int N,A,B,vis[210],data[210];

int main(){
	
	cin >> N >> A >> B;
	
	for(int i = 1 ;  i <= N ; i ++){
		cin >> data[i];
	}
	
	vis[A] = 1;
	
	queue <int> floor;
	queue <int> cur;
	
	floor.push(A);
	cur.push(0);
	
	while( !floor.empty() && !cur.empty()){ //������в�Ϊ��
		
		if(floor.front() == B) {
			//�Ƿ񵽴�Ŀ��¥��
			cout << cur.front();
			return 0; 
		}
		
		int t = floor.front() + data[floor.front()];//������
		
		if( t <= N && !vis[t]){
			//ѹ��
			floor.push(t);
			cur.push(cur.front()+1);
			vis[t] = 1; 
		} 
		
		t = floor.front() - data[floor.front()];//������
		
		if( t >= 1 && !vis[t]){
				//ѹ��
			floor.push(t);
			cur.push(cur.front()+1);
			vis[t] = 1;
		}
		
		//���� 
		floor.pop();
		cur.pop();
		
	}
	
	cout << -1; 
	
	
	
	
	
	return 0;
}
