#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

char map[101][101];
int m=0,n=0,ans;
int mark[101][101]={0},
  dx[]={-1,-1,-1,0,0,1,1,1},
  dy[]={-1,0,1,-1,1,-1,0,1};

  void search(int x,int y,int id)
  {
      if(x<0||x>=m||y<0||y>=n)
        return ;
      if(mark[x][y]>0||map[x][y]!='@')
        return;
      mark[x][y]=id;
      for(int i=0;i<=7;i++)
        search(x+dx[i],y+dy[i],id);
  }

  int main()
  {
      while(scanf("%d%d",&m,&n)&&(m+n)!=0)
      {
          ans=0;
          memset(mark,0,sizeof(mark));
          for(int i=0;i<m;i++)
            scanf("%s",map[i]);

          for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
          {
              if((mark[i][j]==0)&&(map[i][j]=='@'))
                search(i,j,++ans);
          }

        cout<<ans<<endl;
        n=0;
      }
  }



