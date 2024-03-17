/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_set<int> set;
        Node* temp1=head1;
        Node* temp2=head2;
        while(temp1){
            set.insert(temp1->data);
            temp1=temp1->next;
        }
        int cnt = 0;
        
        while(temp2){
            if(set.find(x - temp2->data) !=set.end()){
                cnt++;
            }
            temp2=temp2->next;
        }
        return cnt;
        
    }
};