#include "bits/stdc++.h"

using namespace std;

int N,K;
int ans = 0 ;

/*
 * TLE 2021/03/14
 */
 
 inline int read(){
   int s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}

inline void write(int x)
  {
      char F[200];
      int tmp=x>0?x:-x ;
      if(x<0)putchar('-') ;
      int cnt=0 ;
         while(tmp>0)
         {
             F[cnt++]=tmp%10+'0';
            tmp/=10;
        }
        while(cnt>0)putchar(F[--cnt]) ;
 }
 
void dfs(int x,int n,int s){//��x��ʼ���ң���ǰ��n��������Ϊs

 if(n > K || s > N || x > N) return;

//  cout << x <<" " << n <<" " << s << endl; 

    if(n == K && s == N){   
        ans++;
        return;
    } 

    if(s+x > N) return;
    dfs(x,n+1,s+x);//����ѡ�����
    dfs(x+1,n,s);//��ѡ    
}
 
int main(){
	
	N = read();
	K = read();
	
	
	dfs(1,0,0);	
	
	write(ans);

	return 0;
} 
