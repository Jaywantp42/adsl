/*
    Write a program to create a binary search tree and Implement below mention function/methods
    a. Insertion () function/methods that insert a new node in tree
    b. Deletion () function/methods that delete a node in the tree (make your tree is BST)
    c. CountTotalNumberNodes() function/methods to count the total nodes in a tree
    d. preorder() function/methods to traverse the tree using the preorder algorithm
    e. SecondMinnumum() function/method that finds the 2nd minimum number of the tree and returns it.
*/

#include<iostream>

using namespace std;

class Treenode
{
    public:
    int data;
    Treenode* left;
    Treenode* right;

    Treenode()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }

    Treenode(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BST
{
    public:
        Treenode* root;

        BST()
        {
            root = NULL;
        }

        bool isEmpty()
        {
            if (root == NULL)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        // insert new node
        void insertNode(Treenode* newNode)
        {
            if (root == NULL)
            {
                root = newNode;
                cout<<"Value inserted"<<endl;
            }
            else
            {
                Treenode* temp = root;
                while (temp != NULL)
                {
                    if (temp->data == newNode->data)
                    {
                        cout<<"Value already exist"<<endl;
                        return;
                    }
                    else if ((newNode->data < temp->data) && (temp->left == NULL))
                    {
                        temp->left = newNode;
                        cout<<"Data Insert"<<endl;
                        break;
                    }
                    else if (newNode->data < temp->data)
                    {
                        temp = temp->left;
                    }
                    else if ((newNode->data > temp->data) && (temp->right == NULL))
                    {
                        temp->right = newNode;
                        cout<<"Data inserted"<<endl;
                        break;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            }
        }

        //preorder
        void preOrder(Treenode* root)
        {
            if (root == NULL)
            {
                return;
            }
            cout<<root->data<<"\t";
            preOrder(root->left);
            preOrder(root->right);
        }

        //delete node
        void deleteNode(int value)
        {
            //
        }

        //count total number of nodes
        int countNodes(Treenode* root)
        {
            int count = 0;
            
            count += countNodes(root->left);
            count += countNodes(root->right); 
            return count;
        }
};

int main()
{
    BST bst;
    int option, value, total;

    do
    {
        
        cout<<"--------------------"<<endl;
        cout<<"1. Insert Node"<<endl;
        cout<<"2. Print Preorder"<<endl;
        //cout<<"3. Delete Node"<<endl;
        cout<<"3. Count total number of nodes"<<endl;
        //cout<<"5. Second Minimum"<<endl;
        cout<<"0. STOP"<<endl;
        cout<<endl;
        cout<<"Enter option"<<endl;
        cout<<"--------------------"<<endl;

        cin>>option;
        Treenode* newNode = new Treenode();

        switch (option)
        {
        case 1:
            cout<<"Enter value"<<endl;
            cin>>value;
            newNode->data = value;
            bst.insertNode(newNode);
            cout<<endl;
            break;

        case 2:
            cout<<"Print PreOrder"<<endl;
            bst.preOrder(bst.root);
            cout<<endl;
            break;

        case 3:
            cout<<"Total Number of nodes :"<<endl;
            cout<<bst.countNodes(bst.root)<<endl;
            break;        
        
        default:
            cout<<"enter Proper option"<<endl;
        }

    } while (option !=0);
    
}