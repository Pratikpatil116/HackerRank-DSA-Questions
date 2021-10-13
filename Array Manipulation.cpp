#include <iostream>

using namespace std;
const int NMAX = 1e7+2;
long long a[NMAX];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=1;i<=m;++i){
        int x, y, k;
        cin >> x >> y >> k;
        a[x] += k;
        a[y+1] -= k;
    }
    long long x = 0,sol=-(1LL<<60);
    for(int i=1;i<=n;++i){
        x += a[i];
        sol = max(sol,x);
    }
    cout<<sol<<"\n";
    return 0;
}
