//User function template for C++
class Solution{
public:	
	
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
{
    int ans=0;
    int r1=0,c1=0;
    int r2=n-1,c2=n-1 ;
    while(r1<n && r2>=0){
    int sum = mat1[r1][c1] + mat2[r2][c2];

    if(sum==x){
        ans++;
        r1++,r2--;
    }

    if(sum<x){
        c1++;
    }
    if(sum>x){
        c2--;
    }

    if(c1==n-1){
        c1=0;
        r1++;
    }
    if(c2=0){
        c2=n-1,r2--;
    }

    return ans;

    }
};