#include <bits/stdc++.h>
using namespace std;
#define Yashaswee ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int Solfunc2018Q1(int k, int n, int a[]) {
    int index[5]={0,0,0,0,0};
    for(int i=0;i<n;i++) {
        int ind = i%5;
        index[ind]=(a[i]>index[ind])?a[i]:index[ind];
    }
    if(k>4) k = 4;
    
    sort(index,index+5);

    int sum = 0;
    for(int i=4;i>=(k-i);i--) {
        sum += index[i];
    }
    return sum;    
}
int main() {
    Yashaswee;
    int tc_k[3] = {3,4,5};
    int tc_n[3] = {21,23,23};
    int tc_a[3][23] = {{3,8,21,13,15,4,10,17,6,12,1,11,20,14,16,5,18,19,7,9,2},{4,23,15,7,9,3,20,19,8,10,1,22,16,6,14,5,21,17,11,12,2,18,13},{17,5,21,12,1,11,10,19,9,6,18,8,23,14,2,15,3,22,13,4,16,7,20}};
    for(int i=0;i<3;i++) {
        cout << Solfunc2018Q1(tc_k[i],tc_n[i],tc_a[i]) << "\n"; 
    }
}