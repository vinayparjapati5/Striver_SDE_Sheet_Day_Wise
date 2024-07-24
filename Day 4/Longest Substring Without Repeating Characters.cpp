class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        /*brute
        int maxlen = 0;
        for(int i =0; i<s.length(); i++){

            int hash[256]= {0};

            for(int j=i; j<s.length(); j++){

                if(hash[s[j]]==1)break;

                maxlen = max(maxlen, j-i+1);
                hash[s[j]]=1;

            }

        }
        return maxlen; */

        // optimal
        int n = s.length();

        vector<int>hash(256,-1);

        if(n==0) return 0;

        int l = 0;
        int r = 0;
                            //<char,index>
        int maxlen = 0;

        while(r<n){
            if(hash[s[r]]!= -1 && hash[s[r]]>=l ){// in map

                
                l = hash[s[r]]+1; // l = 4

                
            }
            maxlen = max(maxlen, r-l+1); //(2-0+1)
            hash[s[r]] = r; // store
            r++;  //increment
        }

        return maxlen;
    }
};
