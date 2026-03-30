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

public:
	void add(int val) { 
		root = insert(root, val); 
	}
	bool contains(int val) {
		return search(root, val);
	}
};

int main() {
  BST tree;
  cout << "BST initialized." << endl;
  return 0;
}
