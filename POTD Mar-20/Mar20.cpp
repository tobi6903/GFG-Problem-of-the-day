// } Driver Code Ends
//User function Template for C++

/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    
    int ans=0; int mH=0;
    
    void solve(Node* root,int h,int s){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            s+=root->data;
            if(h>mH){
                ans=s;
                mH=h;
            }
            else if(h==mH){
                ans=max(s,ans);
            }
            return ;
        }
        s+=root->data;
        solve(root->left,h+1,s);
        solve(root->right,h+1,s);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        solve(root,0,0);
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        int res = obj.sumOfLongRootToLeafPath(root);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends

