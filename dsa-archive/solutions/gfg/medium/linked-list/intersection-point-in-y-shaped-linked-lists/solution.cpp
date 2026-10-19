/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        // code here
        
        Node*f=head1;
        Node*s=head2;
        
        while(f!=s){
            
            f=f->next;
            s=s->next;
            
            if(f==nullptr and s!=nullptr){
                f=head2;
            }
            
            if(s==nullptr and f!=nullptr){
                s=head1;
            }
            
            
        }
        
        return f;
    }
};