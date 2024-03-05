#include<iostream>
#include<queue>
using namespace std;


class TreeNode
{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

    TreeNode(int data){this->data=data ; left=nullptr ; right = nullptr;}
};


TreeNode* insertNode(TreeNode* root , int data)
{
    if(root == nullptr)
    {
        TreeNode* newNode = new TreeNode(data);
        return newNode;
    }

    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* node = q.front();
        q.pop();
        if(!node->left)
        {
            TreeNode* newNode = new TreeNode(data);
            node->left = newNode;
            // return newNode;
            break;
        }
        else
        {
            q.push(node->left);
        }

        if(!node->right)
        {
            TreeNode* newNode = new TreeNode(data);
            node->right = newNode;
            // return newNode;
            break;
        }
    }

    return root;

}
TreeNode* findMin(TreeNode* node)
{
    while (node->left)
    {
        node = node->left;
    }
    return node;
}

TreeNode* deleteNode(TreeNode* root, int target)
{
    if (root == nullptr)
    {
        return root;
    }

    if (target < root->data)
    {
        root->left = deleteNode(root->left, target);
    }
    else if (target > root->data)
    {
        root->right = deleteNode(root->right, target);
    }
    else
    {
        // Node to be deleted found
        if (root->left == nullptr)
        {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Node has two children
        TreeNode* successor = findMin(root->right);
        root->data = successor->data;
        root->right = deleteNode(root->right, successor->data);
    }

    return root;
}


void traversal(TreeNode* root)
{
    if(root==nullptr)
    {
        return ;
    }
    cout<<root->data<<" ";
    traversal(root->left);
    traversal(root->right);
}


int main()
{
    TreeNode* root = nullptr;
    root = insertNode(root,4);
    root = insertNode(root,5);
    root = insertNode(root,1);
    root = insertNode(root,7);
    root = insertNode(root,10);


    cout<<"Tree inorder traversal : ";
    traversal(root);

    cout<<endl;

    cout<<"Enter node to delete : ";
    int n ;
    cin>>n;
    root = deleteNode(root,n);
    cout<<"\nAfter deleteion of node "<<n<<" : ";
    traversal(root);

    return 0;
}