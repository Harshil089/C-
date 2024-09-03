#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
    char data;
    node *left, *right;
    node (char x)
    {
        data = x;
        
    }
};
class stack
{
    public:
        int top;
        node *st[50];
    stack()
        {
            top=-1;
        }
    void push(node *temp)
    {
        st[++top]=temp;
    }
    node *pop()
    {
        return st[top--];
    }
    bool isEmpty()
    {
        return (top==-1);
    }
};
    node *create()
    {
        char prefix[20];
        int i=0;
        node *root;
        stack s;
        cout<<"\nEnter the postfix expression:";
        cin>>prefix;
        while(prefix[i]!='\0')
        {
            root=new node(prefix[i]);
            if (!isalnum(prefix[i]))
            {
                root->right=s.pop();
                root->left=s.pop();
                s.push(root);
            }
            else
            {
                s.push(root);
            }
            i++;
        }
        root=s.pop();
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
    int main()
    {
        node *root=create();
        cout<<"Prefix is: ";
        preorder(root);
        return 0;
    }
