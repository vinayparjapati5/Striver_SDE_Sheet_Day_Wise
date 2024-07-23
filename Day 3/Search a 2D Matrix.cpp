class Solution {
public:

   /* bool binarySearch(vector<int>arr, int target){

        int low = 0;
        int high = arr.size()-1;

        

        while(low<=high){
            int mid = low + (high-low)/2;

            if(target==arr[mid]){
                return true;
            }
            else if(target<arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }*/
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        /*better approach
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n;i++){

            if(matrix[i][0]<=target && target<=matrix[i][m-1] ){
                return binarySearch(matrix[i],target);
            }

        }

        return false;*/

        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = n*m-1;

        while(low<=high){

            int mid = low + (high-low)/2;

            int row = mid/m;
            int col = mid%m;

            if(matrix[row][col]==target){
                return true;
            }
            else if(target>matrix[row][col]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
        
    }
};
