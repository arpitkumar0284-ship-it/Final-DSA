#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp->left == NULL) {
            temp->left = new Node(val);
            return root;
        } else {
               q.push(temp->left);
        }

        if (temp->right == NULL) {
            temp->right = new Node(val);
            return root;
        } else {
            q.push(temp->right);
        }
    }
    return root;
}


void levelOrderAndSum(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    int sum = 0;

    cout << "Level Order Traversal: ";

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";
        sum += temp->data;

        if (temp->left != NULL)
            q.push(temp->left);

        if (temp->right != NULL)
            q.push(temp->right);
    }

    cout << endl;
    cout << "Sum of all nodes: " << sum << endl;
}

int main() {
    Node* root = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    levelOrderAndSum(root);

    return 0;
}
