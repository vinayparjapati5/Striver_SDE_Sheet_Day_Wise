# Brute force

#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix, int n, int m, int i){
  // set all non-zero elements as -1 in the row i:
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    // set all non-zero elements as -1 in the col j:
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }
   // Finally, mark all -1 as 0:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

TIME COMPLEXITY : O((n*m)*(n+m)) + O(n*m)
SPACE COMPLEXITY: O(1)
=========================================================================================================

  #BETTER APPROACH

  void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix[0].size(); //total no. of columns
        int n = matrix.size(); //total rows
        

        vector<int>row(n,0);
        vector<int>col(m,0);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }

    }
TIME COMPLEXITY : O(2*n*m)
SPACE COMPLEXITY: O(n+m)
=========================================================================================================

#OPTIMAL APPROACH -- optimised space

 //int row[n] = {0} = matrix[...][0]
 //int col[m] = {0} = matrix[0][...]

        int col0 = 1;

        // Traverse
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;

                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else col0 = 0;
                }
            }
        }

        // Mark with 0 from (1,1) to (n-1, m-1):

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){

                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        //Finally mark Ist row then Ist col

        if(matrix[0][0]==0){
            for(int j=0; j<m; j++){
                matrix[0][j]=0;
            }
        }

        if(col0 == 0){
            for(int i=0; i<n; i++){
                matrix[i][0]=0;
            }
        }

TIME COMPLEXITY : O(2*n*m)
SPACE COMPLEXITY: O(1)



  




