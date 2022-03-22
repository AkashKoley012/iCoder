int Solution::solve(vector<int> &A, int B) {
    int n=A.size(),i=0,ct=0;
    while(i<n){
        int l=max(0,i-B+1);
        int r=min(n-1,i+B-1);
        bool flag=false;
        while(l<=r){
            if(A[r]){
                flag=true;
                break;
            }
            else r--;
        }
        if(!flag) return -1;
        ct++;
        i=r+B;
    }
    return ct;
}
//1. calculate the range and traverse rightmost light is activate
//2. if in this range there is no light then return -1
