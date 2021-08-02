#include<bits/stdc++.h>
using namespace std;
void m1(int *n,int a)
{
    sort(n,n+a);
    for(int i=0;i<=a;i++)
    {
        if(n[i]!=n[i+1])
        {
            cout<<n[i]<<" ";
        }
    }
    cout<<endl;
}
void m2(int *n,int a)
{
    int k;
    int mark[a]={0};
    for(int i=0;i<=a;i++)
    {
        int f=n[i];
        for(int j=i+1;j<=a;j++)
        {
            if(f==n[j])
            {
                mark[j]=1;
            }
        }
    }
    for(int i=0;i<=a;i++)
    {
        if(mark[i]==0)
        cout<<n[i]<<" ";  
    }
}
void m3()//hans 
{
    int n;
    cin>>n;
    int a[n+1];
    int hans[n+1]={0};
    int z=1;
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        z=0;
        hans[a[i]]=a[i];
    }
    if(z==0)
    {
        cout<<0<<" ";
        for(int i=0;i<=n;i++)
        {
            if(hans[i]!=0)
            cout<<hans[i]<<" "; 
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(hans[i]!=0)
            cout<<hans[i]<<" "; 
        }
    }
}
int main()
{
    
    int m;
    //cin>>m;
    while(scanf("%d",&m)!=EOF)
    {
        if(m==1)
        {
            int a;
            cin>>a;
            int n[a];
            for(int i=0;i<=a;i++)
            {
                cin>>n[i];
            }
            m1(n,a);//sort      o(n+n*logn)
        }
        else if(m==2)
        {
            int a;
            cin>>a;
            int n[a];
            for(int i=0;i<=a;i++)
            {
                cin>>n[i];
            }
            m2(n,a);//mark    o(n+n^2)
        }
        else if(m==3)
        {
            m3();//hans o(2n)
        }
    }

    return 0;
}
