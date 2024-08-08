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
        // l=r=NULL;
    }
};
    node *create()
    {
        node *root;
        int x;
        cout<<"\nEnter data:";
        cin>>x;
        if(x==-1)
            return NULL;
        root=new node(x);
        cout<<"\nEnter Left of "<<x;
        root->left=create();
        cout<<"\nEnter Right of "<<x;
        root->right=create();
        return root;
    }
    void preorder(node *root)
    {
        if(root!=NULL)
        {
            cout<<root->data;
            preorder(root->left);
            preorder(root->right);
        }
    }
    // void inorder(node *root)
    // {
    //     if(root!=NULL)
    //     {
    //         inorder(root->left);
    //         cout<<root->data;
    //         inorder(root->right);

    //     }
    // }
    // void postorder(node *root)
    // {
    //     if(root!=NULL)
    //     {
    //         postorder(root->left);
    //         postorder(root->right);
    //         cout<<root->data;
            

    //     }
    // }
    int main()
    {
        node *root=create();
        preorder(root);
        // inorder(root);
        // postorder(root);
        return 0;
    }