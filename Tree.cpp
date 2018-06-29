#include <iostream>
#include <conio>

struct TreeNode{
struct TreeNode *LChild;
int NodeValue;
struct TreeNode *RChild;
}*root = NULL;

void InsertNode(int NVal,struct TreeNode *str){
struct TreeNode *temp = (struct TreeNode*)malloc(sizeof(struct TreeNode*));
temp->NodeValue = NVal;
temp->LChild = NULL;
temp->RChild = NULL;

if(root == NULL){
root = temp;
}else{
//struct TreeNode *ptr = (struct TreeNode*)malloc(sizeof(struct TreeNode*));
//ptr = root;
if(str->LChild == NULL){
str->LChild=temp;
//InsertNode(NVal,str->LChild);
}else
if(str->RChild == NULL){
str->RChild=temp;
//InsertNode(NVal,str->RChild);
}else{
InsertNode(NVal,str->LChild);
}
}
}

void preorder(struct TreeNode *node){
cout<<node->LChild;
}

void inorder(struct TreeNode *node){
cout<<node->LChild;
}

void postorder(struct TreeNode *node){
cout<<node->LChild;
}

int main(){
int Case,value,Case2;
while(1){
    cout<<"Enter your choice \n1)Insert a node\n2) Display the nodes";
    cin>>Case;
    switch(Case){
        case(1):
        cout<<"\nEnter the node's value:\n";
        cin>>value;
        InsertNode(value,root);
            break;


    }
};
return 0;
}
