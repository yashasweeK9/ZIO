#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int Solfunc2019Q2(int k, int a, int b, int c, int n) {
    int tot = n-k;
    a = a-1;
    b = b-1;
    c = c-1; 
    i: for(int i=n/c;i>0;i--) {
        n = (tot - (i*c));
       j: for(int j=n/b;j>0;j--) {
            n = tot - (i*c) - (j*b);
           k: for(int k=n/a;k>0;k--) {
                n = tot - (i*c) - (j*b) - (k*a);
                if(n==0)
                    return (i+k+j);        
            }
        }
    }
    return -1;
}

int main() {
    Yashaswee;
    int tc_k[3]={23,9,10};
    int tc_a[3]={7,7,9};
    int tc_b[3]={12,15,12};
    int tc_c[3]={16,16,26};
    int tc_n[3]={114,76,138};
    for(int i=0;i<3;i++)
        cout << Solfunc2019Q2(tc_k[i],tc_a[i],tc_b[i],tc_c[i],tc_n[i]) << "\n";

}