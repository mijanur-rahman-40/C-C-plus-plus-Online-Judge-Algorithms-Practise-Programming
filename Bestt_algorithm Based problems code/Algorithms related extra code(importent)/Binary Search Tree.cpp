#include <bits/stdc++.h>

using namespace std;

struct node{
    int value; // the value stored at the node
    node* left; // left child
    node* right; // right child
    node(){}
    node(int _value){ // construct for an instance
        value=_value; // the value of the node
        left = NULL; // the value doesn't have left child yet
        right = NULL; // no right child similarly
    }
};

int N; // number of nodes
node* root; // the root node


void insert(node*& n, int v){
    if(n == NULL){
        n = new node(v);
        return ;
    }
    if(n->value > v){ // the new value must go to left
        insert(n->left,v);
    } else{ // the new value must go to the right
        insert(n->right,v);
    }
}

void read(){
    printf("Number of elements: ");
    scanf("%d",&N);
    root=NULL; // the tree doesn't have any node initially
    for(int i=0,node_id,value; i<N; i++){
        scanf("%d",&value);
        insert(root,value); // traversal must start from the root
    }
    return ;
}

int query(node*& u, int q, int h){
    if(u == NULL)
        return -1; // the value doesn't exist
    if(u->value == q)
        return h; // this node contains the desired value
    if(q < u->value) // search to the left
        return query(u->left, q, h+1); // h+1 because the depth is increasing
    else
        return query(u->right, q, h+1); // if not less than go to the right child
}

int main(){
    read();
    int q; // searching value
    while(scanf("%d",&q)!=EOF){
        int height = query(root,q,0); // the searching must begin from the root
        if(height == -1){
            printf("The value is not present in the BST.\n");
        } else{
            printf("The depth of the value is: %d\n",height);
        }
    }
    return 0;
}
