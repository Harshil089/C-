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
        char postfix[20];
        int i=0;
        node *root;
        stack s;
        cout<<"\nEnter the postfix expression:";
        cin>>postfix;
        while(postfix[i]!='\0')
        {
            root=new node(postfix[i]);
            if (isalnum(postfix[i]))
            {
                
                s.push(root);
            }
            else
            {
                root->right=s.pop();
                root->left=s.pop();
                s.push(root);
            }
            i++;
        }
        root=s.pop();
        return root;
    }
    void inorder(node *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->data;
            inorder(root->right);

        }
    }
    int main()
    {
        node *root=create();
        cout<<"\nInfix is: ";
        inorder(root);
        return 0;
    }
