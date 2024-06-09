Brute Force --> Use 3 nested loops
Better Approach --> Use 2 nested loops

Optimal Approach --> Kadane algo

int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        long long maxi = INT_MIN;
        long long sum = 0;

        for(int i=0; i<n; i++){

            sum +=nums[i];
            
            if(sum>maxi){
                maxi = sum;
            }

            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
=====================================================================================================================================================
