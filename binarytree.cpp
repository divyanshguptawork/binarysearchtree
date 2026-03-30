#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
	Node* insert(Node* node, int val) {
		if (!node) return new Node(val);
		if (val < node->data) node->left = insert(node->left, val);
		else if (val > node->data) node->right = insert(node->right, val);
		return node;
	}

	bool search(Node* node, int val) {
		if (!node) return false;
		if (node->data == val) return true;
		return (val < node->data) node->right = insert(node->right, val);
	}
  void printTree(Node* root, int space) {
    if (!root) return;
    space += 10;
    printTree(root->right, space);
    cout << endl;
    for (int i = 10; i < space; i++)
      cout << " ";
    cout << root->data << "\n";
    printTree(root->left, space);
  }

public:
	void add(int val) { 
		root = insert(root, val); 
	}
	bool contains(int val) {
		return search(root, val);
	}
  void display() {
    printTree(root, 0);
  }
};

int main() {
  BST tree;
  cout << "BST initialized." << endl;
  return 0;
}
