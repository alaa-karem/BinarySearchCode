#include<iostream>
using namespace std;
#define Invincible ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
#define el "\n";
typedef long long ll;

int x=55, n=9;
int a[n];
bool can(int i)
{
    return (a[i]<=x);
}
int main()
{
   
    for(int i=0; i<n; i++)  cin>>a[i];
    int l=0, r=n-1;
    int ans =-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(can(mid))
            ans=mid, l=mid+1;
        else
            r=mid-1;
    }
    cout<<ans<<el
}