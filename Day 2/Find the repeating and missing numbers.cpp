Brute Force --> O(n*n) Time limit exceeded
vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int repeating = -1;
        int missing = -1;
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            
            if(arr[j]==i) cnt++;
            
        }
        if(cnt==2) repeating = i;
        if(cnt ==0) missing = i;
    }
        return {repeating,missing};
    }
=========================================================================

  
