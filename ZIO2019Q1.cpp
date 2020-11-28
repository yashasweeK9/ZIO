#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int func(int cases) { 
    int dp[cases+1]={1};
    int sum = 0;
    
    int loopControl = cases/2;
    
    while(loopControl>=0) {
        for(int i=loopControl*2;i<=cases;i=+loopControl) {
            dp[loopControl] = dp[loopControl] + dp[i];
            cout << "Dp[" << loopControl << "] is " << dp[loopControl] << "\n";
        }
        sum+=dp[loopControl];
        loopControl--;
    }
    return sum;

}
int main() {
    Yashaswee;
    cout << func(15) << "\n" ;
}