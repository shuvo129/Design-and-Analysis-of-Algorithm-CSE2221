# include<bits/stdc++.h>
using namespace std;
char c [1000][1000];
void DFS(int x,int y,int m,int n){

    if (x < 0 || y < 0 || x==m || y==n )return;
    if(c[x][y]=='*')return;
     if(c[x][y]=='@')
          c[x][y]='*';
     DFS(x,y+1,m,n);
    DFS(x,y-1,m,n);
    DFS(x+1,y,m,n);
    DFS(x-1,y,m,n);
    DFS(x+1,y+1,m,n);
    DFS(x+1,y-1,m,n);
    DFS(x-1,y+1,m,n);
    DFS(x-1,y-1,m,n);
}
int main()
{
    int n,m,i,j;
    while(1){
        cin >> m >>n;
        if(m==0&&n==0)
            return 0;
         for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cin >> c[i][j];
            }
        }
        int cnt =0;
         for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(c [i][j] == '@'){
                    cnt++;
                    DFS(i,j,m,n);
                }
            }
        }
        cout << cnt << endl;

    }
}


