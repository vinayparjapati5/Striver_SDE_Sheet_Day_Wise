Brute Approach -->  Make Duplicate 

vector < vector < int >> rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    vector < vector < int >> rotated(n, vector < int > (n, 0));
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        rotated[j][n - i - 1] = matrix[i][j];
    }
    }
    return rotated;
}

Time Complexity: O(N*N) to linearly iterate and put it into some other matrix.

Space Complexity: O(N*N) to copy it into some other matrix.


=============================================================================================================================================================
Optimal Approach --> O(N*N)+O(N*N)

1. Transpose the Matrix
2. Reverse Each row

 void rotate(vector<vector<int>>& matrix) {
        // OPTIMAL
  
        int n = matrix.size();
        for(int i=0; i<n; i++){        // transpose
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
  
        for(int i=0; i<n; i++){     // reverse each row
            for(int j=0; j<n/2; j++){
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
    }

==================================================================================================================================================================
