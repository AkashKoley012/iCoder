#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    int n=A.size();
    int pre[n+1],suf[n+1];
    pre[1]=A[0],pre[0]=0,suf[n-1]=A[n-1],suf[n]=0;
    for(int i=2;i<=n;i++)pre[i]=pre[i-1]+A[i-1];
    for(int i=n-2;i>=0;i--)suf[i]=suf[i+1]+A[i];
    int maxi=INT_MIN;
    for(int i=0;i<=B;i++)maxi=max(maxi,pre[i]+suf[n-B+i]);
    return maxi;
}
int main(){
	int n,B;cin>>n>>B;
	vector<int> A(n);
	for(auto &i:A)cin>>i;
	cout<<solve(A,B);
}
