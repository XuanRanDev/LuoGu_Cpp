#include "bits/stdc++.h"

using namespace std;

/*
 *	�����ջ�ʹ���ֵ�����������ʱ��
 *			  ��õķ�����ʹ���ֵ������Ӧ�ķ�������
 *			  ��Ϊbfs�����ߵ��ף����Ըı��ĸ��������ʼ˳��Ϳ���
 *			  ��������˷��˲���ʱ�� 
 *
 */



int N,M;

int mp[510][510];
bool vis[510][510];

//�� ��  �� �� (d l r u�����ѾͿ��Ա����ֵ������� 
//int xx[] = {0,1,0,-1};
//int yy[] = {1,0,-1,0}; 

int xx[] = {1,0,0,-1};
int yy[] = {0,-1,1,0} ;//������ûɶ����Ψһ�����������߰��ֵ���˳���� 


int main(){
	
	
	cin >> N >> M;
	
	char c; 
	for(int i = 1 ; i <= N ;  i++){
		for(int k = 1 ;  k <= M ; k++){
			cin >> c;
			mp[i][k] = c-'0';	
		}
	}
	/*
	* �����ֵ�����С�ģ��� 
	*/
	
	queue< pair<int,int> > q; //x y 
	queue<int> s; // �ڼ��� 
	queue<string> bs;  //�ߵķ��� 
	

	vis[1][1] = 1;
	s.push(0);
	bs.push("!"); 
	q.push( make_pair(1,1));
	
	
	while( !q.empty() && !s.empty() ){
		
		int fx = q.front().first;
		int fy = q.front().second;
		string st = bs.front();
		int step = s.front();
		
		bs.pop();
		q.pop();
		s.pop();
		
		if( fx == N && fy == M){
			
			cout << step << endl;
			
			for(int i = 1  ; i < st.size() ;  i++){
				cout << st[i];
			}
			return 0;
		}
		
		for(int i = 0 ;  i < 4 ; i ++){
			int dx = xx[i] + fx;
			int dy = yy[i] + fy;
			
			//ϵ�����߰�������� 
			if( dx >= 1 && dx <= N && dy >= 1 && dy <= M && !vis[dx][dy] && mp[dx][dy] != 1){
				
				vis[dx][dy] = 1;
				q.push( make_pair(dx,dy) );
				s.push(step+1);
				string s = "";
				switch(i){
					case 0:{
						s = "D";
						break;
					}
					case 1:{
						s = "L";
						break;
					}
					case 2 :{
						s = "R";
						break;
					}
					case 3:{
						s = "U";
						break;
					}
				}
				
				bs.push(st+s);
				
			} 
		}
		
		
	}
	
	
	//��ʷ���� �Թ� 
	
	
//	sort(ans,ans+flag,cmp); //���� 
//	
//	cout << ans[0].ans;
//	
//	
//	for(int i = 1 ; i < ans[0].s.size() ; i++){
//		cout << ans[0].s[i];
//	}
	
	
	
	
	
	
	
	return 0;
} 
