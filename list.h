
struct node
{
    node();
    ~node();
    int data;
    node *right;
    node *left;
};

class BST
{
    public:
        BST();
        ~BST();
        int add_data(int option1);
        int print_tree();

    private:
        int add_data(node *root,int value1);
        int print_tree(node *root);

    node *root;
};
