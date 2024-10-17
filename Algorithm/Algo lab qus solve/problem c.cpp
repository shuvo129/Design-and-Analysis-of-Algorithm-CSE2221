#include<iostream>
#include<stdio.h>
#include<cstring>
#define maxn 110

using namespace std;
char mapn[maxn][maxn];
int direction[8][2]={{-1,0},{1,0},{0,1},{0,-1},{-1,-1},{-1,1},{1,-1},{1,1}};
bool visit[maxn][maxn];
int m,n,sum=0;
bool isbound(int a,int b)//判断边界
{
    if(a<1||a>m||b<1||b>n)return true;
    return false;
}

void dfs(int x,int y)
{
    for(int i=0;i<8;i++)
    {
        if(mapn[x+direction[i][0]][y+direction[i][1]]=='*')
            continue;
        if(isbound(x+direction[i][0],y+direction[i][1]))
            continue;
        if(visit[x+direction[i][0]][y+direction[i][1]])
            continue;
        visit[x+direction[i][0]][y+direction[i][1]]=true;
        dfs(x+direction[i][0],y+direction[i][1]);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    while(~scanf("%d%d\n",&m,&n)&&(m||n))//这地方应该有一个回车
    {
        //printf("m=%d n=%d\n",m,n);
        memset(visit,false,sizeof(visit));
        sum=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                scanf("%c",&mapn[i][j]);
            }
            scanf("\n");//每行输入结束都应该有一个回车
        }
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
            {
                if(mapn[i][j]=='@'&&!visit[i][j])
                {
                    dfs(i,j);
                    visit[i][j]=true;
                    sum++;
                }
            }
    }
}

