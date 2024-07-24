int Solution::solve(vector<int> &A, int B) {
    
    int n = A.size();
    int xorr = 0;
    map<int,int>mpp;
    
    mpp[xorr]++; // setting value of 0 ie(0,1)
    
    int cnt = 0;
    
    for(int i=0; i<n; i++){
        xorr = xorr ^ A[i];
        
        // by formula x = xorr ^ B
        int x = xorr^B;
        
        cnt+=mpp[x];
        
        mpp[xorr]++;
        
        
    }
    return cnt;
    
    
}
