class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        /*int n = nums.size();

        if(n==0) return 0;
        sort(nums.begin(),nums.end());

        int lastSmaller = INT_MIN;
        int cnt = 0;
        int maxi = 1;

        for(int i=0; i<n; i++){
            if(nums[i]-1==lastSmaller){
                cnt++;
                lastSmaller = nums[i];
            }
            else if(nums[i]!=lastSmaller){
                cnt =1;
                lastSmaller = nums[i];
            }
            maxi = max(maxi,cnt);
        }
        return maxi; */

        // Optimal Solution

        int n=nums.size();

        if(n==0) return 0;

        int maxi = 1;
        unordered_set<int>st;

        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        for(auto it: st){

            if(st.find(it-1)==st.end()){
                int cnt = 1;
                int x = it;

                while(st.find(x+1)!=st.end()){
                    x = x+1;
                    cnt++;
                }
                maxi = max(maxi,cnt);
            }
        }
        return maxi;



    }
};
