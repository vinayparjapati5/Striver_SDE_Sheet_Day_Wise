Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

int nCr(int n, int r){
  long long res = 1;
  for(int i=0; i<r; i++){
    res = res*res(n-i);
    res = res/(i+1);
}
return res;
}

int pascaltriangle(int r, int c){
  int element = nCr(r-1,c-1);
  return element;
}

TIME COMPLEXITY: O(c) // running loop r times where r = c-1;
SPACE COMPLEXITY: O(1)
===============================================================================================================================================

Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

/* brute force
int nCr(int n, int r){
  long long res = 1;
  for(int i=0; i<r; i++){
    res = res*res(n-i);
    res = res/(i+1);
}
return res;
}

void pascaltriangle(int n){
  for(int c=1; c<=n; c++{
    cout<<nCr(n-1,c-1)<<" "<<endl;
  }
cout<<"n";
} */

OPTIMISE APPROACH

void pascaltriangle(int n){
  long long ans = 1;
  cout<<ans<<""; // print 0th element

for(int i=1; i<=n; i++){
ans = ans*(n-i);
ans = ans/i;
cout<<ans<<"";
}

cout<<endl;
}

TIME COMPLEXITY: O(n) 
SPACE COMPLEXITY: O(1)
============================================================================================================================================================

 Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.

  /*Brute force
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //Store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        vector<int> tempLst; // temporary list
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}
TIME COMPLEXITY: O(n*n*r) = O(n^3) 
SPACE COMPLEXITY: O(1)

*/

  OPTIMISED APPROACH

  vector<int>generateRow(int row){
  long long ans = 1;

  vector<int>ansRow;
  ansRow.push_back(1); // print 0Th element

  for(int col=1; col<=row; col++){
    ans = ans* (row-col);
    ans = ans/col;  
    ansRow.push_back(ans);
  }
return ansRow;

}

vector<vector<int>>pascaltriangle(int n){
  vector<vector<int>>ans;

for(row = 1; row<=n; row++){
ans.push_back(generateRow(row));
}
return ans;
}
TIME COMPLEXITY: O(n*n) = n^2
SPACE COMPLEXITY: O(1)
===============================================================================

