#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
int Solfunc2018Q2(int b, int a[]) {
    int pure = 0;
    //cout << "Pure is " << pure << "\n";
    int extra = b*10;
    //cout << "Extra is " << extra << "\n";
    for(int i=0;i<b;i++) {
        int c = a[i]/10;
        //cout << "C is " << c << "\n";
        extra = extra - a[i];
        a[i]=a[i]-((c)*10);
        //cout << "a[ " << i << "] is "<< a[i] << "\n";
        pure = pure + c;
        
    }
    cout << "Pure is " << pure << "\n";
    cout << "Extra is " << extra << "\n";
    sort(a,a+b);
    for(int i=b-1;i>=0;i--) {
        //cout << "a[ " << i << "] is "<< a[i] << "\n";
        if((10-a[i])<=extra) {
            pure++; extra = extra - (10-a[i]);
            //cout << "Pure is " << pure << "\n";
            //cout << "Extra is " << extra << "\n";
        }
        else
            break;
    }
    return b-pure;    
}
int main() {
    Yashaswee;
    int tc_b[3] = {11,13,13};
    int tc_a1[tc_b[0]] = {8,22,4,4,9,18,8,7,1,5,7,5};
    cout << Solfunc2018Q2(tc_b[0],tc_a1) << "\n"; 
    int tc_a2[tc_b[1]] = {9,14,11,9,9,6,7,5,6,7,16,14};
    cout << Solfunc2018Q2(tc_b[1],tc_a2) << "\n"; 
    int tc_a3[tc_b[2]] = {15,9,7,22,7,21,6,4,11,8,7,5};
    cout << Solfunc2018Q2(tc_b[2],tc_a3) << "\n"; 
    }