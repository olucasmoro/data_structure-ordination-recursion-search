class Node
{
    public:
        int info;
        int height;
        Node* left;
        Node* right;

        //Construtor
        Node(int value)
        {
            info = value;
            height = 0;
            left = right = 0;
        }
};