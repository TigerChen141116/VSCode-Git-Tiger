#include<bits/stdc++.h>
using namespace std;
int n, m,k,l,r,mid;
int check(int g) {
    int st=1,ed=m,cnt=0;
    while(st<=n && ed>=1) {
        if(st*ed>g)
            ed--;
        else {
            cnt+=ed;
            st++;
        }
    }
    return cnt>=k;
}
int main() {
    scanf("%d%d%d",&n,&m,&k);
    l=1,r=n*m;
    while(l<r) {
        mid=(l+r)/2;
        if(check(mid))r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;
	// cout<<r<<endl;
    return 0;
}