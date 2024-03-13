//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         int i=0,j=0;
         vector<int> ans;
         bool isUp = true;
         int n=mat.size();
         
         for(int k=0;k<n*n;){
             if(isUp){
                 for(;i>=0&&j<=n-1;i--,j++){
                     ans.push_back(mat[i][j]);
                     k++;
                 }
                 if(i<0 && j<=n-1){
                     i=0;
                 }
                 if(j==n){
                     i=i+2;
                     j--;
                 }
             }
             else{
                 for(;i<=n-1 && j>=0 ;i++,j--){
                     ans.push_back(mat[i][j]);
                     k++;
                 }
                 if(j<0 && i<=n-1){
                     j=0;
                 }
                 if(i==n){
                     j=j+2;
                     i--;
                 }
             }
             isUp=!isUp;
         }
         return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends