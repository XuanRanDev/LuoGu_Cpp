#include "bits/stdc++.h"

using namespace std;

int mp[105][105];
int N;
bool vis[105][105];

//�������� 
int xx[] = {0,1,0,-1};
int yy[] = {1,0,-1,0}; 
int ans = 0x7fffffff;

int qd_x,qd_y,zd_x,zd_y; //�����յ����� 

int main(){
	
	cin >> N;
	
	char c;
	
	
	for(int i = 1 ; i <= N  ; i++){
		
		for(int k = 1 ; k <= N ;k++){
			
			cin >> c;
			
			if(c == 'A'){
				qd_x = i;
				qd_y = k;
				mp[i][k] = -2;
			}else if( c == 'B'){
				zd_x = i;
				zd_y = k;
				mp[i][k] = 2;
			}else if( c == '+'){
				mp[i][k] = 1;
			}else{
				mp[i][k] = -1;
			}
			
		}
		
	}
	
	queue<int> step;
	queue< pair<int,int> > q;
	
	q.push(make_pair(qd_x,qd_y));
	step.push(0);// ѹ�� 
	vis[qd_x][qd_y] = 1;
	
	while( ! q.empty() && !step.empty() ){
		
		int fx = q.front().first;
		int fy = q.front().second;
		int st = step.front(); 
		
		//cout << " st : " << st << "FX��" << fx << " " << fy << endl;
		
		int b = mp[fx][fy]; // ��ǰ���� 
		
		step.pop(); //���� 
		q.pop();
		
		
		if( fx == zd_x && fy == zd_y && mp[fx][fy] == 2){ //�����յ� 
			ans = min(ans,st);//��С����
			cout << ans << endl; 
			return 0;  //bfs ����� �����ҵ��Ϳ���return�� 
		}
		
		for(int i = 0 ;  i < 4  ; i++){
			
 			int dx = xx[i] + fx;
 			int dy = yy[i] + fy;
 			
			  
 			if( dx >= 1 && dx <= N && dy >= 1 && dy <= N && !vis[dx][dy] ){
 				
 				int f = mp[dx][dy]; //�·���
 				//��ֹԽ�绹����дһ��if��,����-1��- 1��+ -2����� 2���յ� 
 				
 				if( b == -2){ //����ǵ�һ���Ļ�Ӧ���κη��Ŷ������� 
 					q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
					continue;		
				 } else if( b == 1 && f == -1){ //+ �� - 
				 	q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
 					continue;
				 } else if( b == -1 && f == 1){ //�෴ 
				 	q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
					 continue;
				 }else if( (b == 1 || b == -1) && f == 2){ //�����յ������ ,���ټ��˸��������˰������� �� 
				 	q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
 					continue;
				 }else {
				 	vis[dx][dy] = 1;
//				 	cout << "Dx : " << mp[dx][dy]  << " fx :" << mp[fx][fy]  << endl;
				 	continue;//�������ûʲô��˵���� 
				 }
				  			
			}
 			
			
		}
		
	}
	
	
	cout << -1; //�����˶�û�ҵ��϶��޽��� 
	
	
	
	
	return 0;
} 
