Brute Force --> O(NlogN) + O(2N)

1. Sorting the intervals first
2.After that, we merge an interval with the other by checking if one can be a part of the other interval.
For this checking, we are first selecting a particular interval using a loop and then we are comparing the rest of the intervals using another loop.

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        

        // Brute force
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;
        int n = intervals.size();

        for(int i=0; i<n; i++){

            int start = intervals[i][0];
            int end = intervals[i][1];
            
            // Skip Merged Intervals
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }

            for(int j = i+1; j<n; j++){
                if(intervals[j][0]<=end){
                    end = max(end,intervals[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start,end});
        }


    return ans;
    }
=================================================================================================================================================

Optimal Approach -->   O(NlogN) + O(N)

  // OPTIMAL APPROACH

    sort(intervals.begin(),intervals.end());

    int n = intervals.size();

    vector<vector<int>>ans;

    for(int i=0; i<n; i++){
        if(ans.empty() || intervals[i][0] > ans.back()[1]){
            ans.push_back(intervals[i]);
        }
        else{
        ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }
    }
        
    return ans;
    }

