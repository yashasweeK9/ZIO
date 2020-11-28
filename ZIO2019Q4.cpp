#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int Solfunc2019Q4(int cases) {
    return (cases*cases) * (1<<((cases-1)*(cases-1)));
}
int main() {
    Yashaswee;
    int tc[3] = {3,4,5};
    for(int i=0;i<sizeof(tc)/sizeof(tc[0]);i++)
    cout << Solfunc2019Q4(tc[i]) << "\n";
    
}