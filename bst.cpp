#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left, *right;
    node (int x)
    {
        data = x;
        left=right=NULL;
    }
};

node *insert(node *root, int x)
{
    if (root==NULL)
        return new node(x);
    if(x<root->data)
        root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);
    return root;
}
node *create()
    {
        node *root=NULL;
        int x;
        cout<<"\nEnter data:";
        cin>>x;
        while(x!=-1)
        {
            root=insert(root,x);
            cout<<"\nEnter data:";
            cin>>x;
        }
        return root;
    }
    void inorder(node *root)
    {
        if(root!=NULL)
        {
            inorder(root->right);
            cout<<root->data;
            inorder(root->left);

        }
    }

    int main()
    {
        node *root =create();
        inorder(root);
        return 0;
    }