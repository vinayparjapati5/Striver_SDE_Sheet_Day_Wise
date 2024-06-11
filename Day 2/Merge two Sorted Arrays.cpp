Brute Force --> Compare each element from both sorted arrays using 2 pointers. and add it new array

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // Brute Force

        vector<int>ans(m+n);

        int left = 0;
        int right = 0;
        int index = 0;

        while(left<m && right<n){
            if(nums1[left]<=nums2[right]){
                ans[index] = nums1[left];
                index++;
                left++;
            }
            else{
                ans[index] = nums2[right];
                index++;
                right++;
            }
        }

        while(left<m){
            ans[index++] = nums1[left++];
        }

        while(right<n){
            ans[index++] = nums2[right++];
        }

       for(int i=0; i<m+n; i++){
            if(i<m){
                nums1[i] = ans[i];
            }
            else{
                nums2[i-m] = ans[i];
            }
        }

    }

TIME COMPLEXITY : O(n+m) + O(n+m)
SPACE COMPLEXITY : O(n+m) 
===================================================================================================================================================================

  OPTIMAL -->

   // OPTIMAL APPROACH

   int i = m-1;
   int j = n-1;
   int k = m+n-1;

   while(j>=0){

    if(i>=0 && nums1[i]>nums2[j]){
        nums1[k--]= nums1[i--];
    }

    else{
        nums1[k--] = nums2[j--];
    }
   }
    }

TIME COMPLEXITY : O(n+m)
SPACE COMPLEXITY : O(1)
  
