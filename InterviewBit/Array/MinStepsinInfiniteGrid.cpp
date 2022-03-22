int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x=A[0],y=B[0],res=0;
    int n=A.size();
    for(int i=1;i<n;i++) {
        res+=max(abs(A[i]-x),abs(B[i]-y));
        x=A[i],y=B[i];
    }
    return res;
}
//1. init x and y with 0 index 
//2. because it goes 8 direction so distance is max of x-x1,y-y1;
//3. add all distance and return it
