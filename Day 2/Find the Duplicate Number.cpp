Brute Force --> Use 2 Nested loops O(N*N)

=====================================================

Better Approach --> Use Hashing (calculate freq)  Time --> O(N), Space --> O(N)


int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  int freq[n + 1] = {
    0
  };
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
  return 0;
}

==================================================================================================
Optimal Approach --> Use Linked list cycle method (slow and fast ptrs)


        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        // Find the entrance of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;

Time --> O(N)
Space -->O(1)
======================================================================================================


