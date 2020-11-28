#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
int func(int n, int a[]) { 
    int cache[n]={0};

    for(int i=n-1;i>=0;i--) {
        int ones = 0, zeros = 0;
        for(int j=i;j<n;j++) {
            if(a[j]==0)
                zeros++;
            else
                ones++;
            if(j==(n-1)) {
                if(ones>=zeros)
                    cache[i]++;
            } else {
                if(ones>=zeros)
                    cache[i]+=cache[j+1];
            }
        }
    }
    return cache[1];
}
int main() {
    Yashaswee;
    int n1 = 8; int a1[n1] = {0,1,1,0,0,1,1,1};
    int n2 = 9; int a2[n2] = {1,1,0,0,1,0,0,1,1};
    int n3 = 9; int a3[n3] = {1,0,1,0,1,1,0,1,1};
    cout << func(n1,a1) << "\n";
    cout << func(n2,a2) << "\n";
    cout << func(n3,a3) << "\n";
}