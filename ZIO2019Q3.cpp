#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int Solfunc2019Q2(int cases) {
    int tot = 1;
    int gtot = 2; // Sum of two top elements of dp table.
    int dp[cases+1];
    
    for(int i=0;i<cases;i++){
        dp[i]=1;
    }

    for(int i=cases-2;i>0;i--) {
      dp[i] += tot;
      tot += dp[i+1];
      gtot += dp[i];  
    }

    return gtot-dp[3]; //Compensation for Each Top Element call in dp[1] in each value of Dp Table.
}
int main() {
    Yashaswee;
    int tc[3] = {11,13,15};
    for(int i=0;i<sizeof(tc)/sizeof(tc[0]);i++)
    cout << Solfunc2019Q2(tc[i]) << "\n";
    
}
