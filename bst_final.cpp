#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

node *insert(node *root, int x)
{
    if (root == NULL)
        return new node(x);
    if (x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}

node *create()
{
    node *root = NULL;
    int x;
    cout << "\nEnter node (-1 to stop): ";
    cin >> x;
    while (x != -1)
    {
        root = insert(root, x);
        cout << "\nEnter node (-1 to stop): ";
        cin >> x;
    }
    return root;
}

class Stack
{
public:
    int top;
    node *st[100];  // Increased size to handle larger trees
    Stack() 
    { 
        top = -1; 
    } 

    void push(node *root) 
    {
        if (top == 99)  // Prevent overflow
        {
            cout << "Stack Overflow\n";
            return;
        }
        st[++top] = root;
    }

    node *pop() 
    {
        if (top == -1)  // Prevent underflow
        {
            cout << "Stack Underflow\n";
            return NULL;
        }
        return st[top--];
    }
};

void preorder(node *root)
{
    Stack s;
    if (root == NULL)
        return;

    int leafCount = 0;

    while (root != NULL || s.top != -1)
    {
        while (root != NULL)
        {
            if (root->left == NULL && root->right == NULL)
            {
                cout << "\t" << root->data;
                leafCount++;
            }
            s.push(root);
            root = root->left;
        }

        if (s.top != -1)
        {
            root = s.pop();
            root = root->right;
        }
    }

    cout << "\nTotal number of leaf nodes: " << leafCount;
}

int main()
{
    node *root = create();  
    preorder(root);         
    return 0;
}
