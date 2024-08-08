#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left, *right;
    node(int x)
    {
        data=x;
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
// void preorder(node *temp)
// {
//     stack s;
//     while(temp!=NULL)
//     {
//         cout<<temp->data;
//         s.push(temp);
//         temp=temp->left;
//     }
//     while(s.top!=-1)
//     {
//         temp=s.pop();
//         temp=temp->right;
//         while(temp!=NULL)
//         {
//         cout<<temp->data;
//         s.push(temp);
//         temp=temp->left;
//         }
//     }
// }
// void inorder(node *temp)
// {
//     stack s;
//     while(temp!=NULL)
//     {
//         s.push(temp);
//         temp=temp->left;
//     }
//     while (s.top!=-1)
//     {
//         temp=s.pop();
//         cout<<temp->data;
//         temp=temp->right;

//         while(temp!=NULL)
//     {
//         s.push(temp);
//         temp=temp->left;
//     }
//     }
    
// }
// void postorder(node *temp)
// {
//     stack s1,s2;
//     while (temp!=NULL)
//     {
//         s1.push(temp);
//         temp=temp->left;
//     }

//     while (s1.top!=-1)
//     {
//         temp=s1.pop();
//         s2.push(temp);
//         temp=temp->right;
//     }
//     while(s2.top!=-1)
//     {
//         temp=s2.pop();
//         cout<<temp->data;
//     }
//     while(temp!=NULL)
//     {
//         s1.push(temp);
//         temp=temp->left;
//     }
    

// }
void postorder(node* root) {

    stack s1, s2;
    s1.push(root);

    while (s1.isEmpty()!=true) 
    {
        node* temp = s1.pop();
        s2.push(temp);
        if (temp->left)
            s1.push(temp->left);
        if (temp->right)
            s1.push(temp->right);
    }

    while (s2.isEmpty()!=true) {
        cout << s2.pop()->data;
    }
}

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
int main()
    {
        node *root=create();
        // preorder(root);
        // inorder(root);
        postorder(root);
        return 0;
    }