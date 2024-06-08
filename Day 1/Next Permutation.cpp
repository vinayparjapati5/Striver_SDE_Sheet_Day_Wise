BRUTE FORCE --> Find all possible permutations (done with help of recursion) and then search input from  all possible permutations and print next to it
=============================================================================================================================================================
Another Approach --> USING STL
==============================================================================================================================================================
Optimal Approach

1. Find longer prefix match and find break point (a[i]<a[i+1]).
2. Find >1 but the smallest one so that you close.
3. Try to place remaining part in sorted array.
  
void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();

        int ind = -1;

        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }


        for(int i=n-1; i>=ind && ind!=-1; i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }

        reverse(nums.begin()+ind+1, nums.end());

    }


