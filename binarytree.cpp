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
  Node* root;

public:
  BST() : root(nullptr) {}
  // placeholder
};

int main() {
  BST tree;
  cout << "BST initialized." << endl;
  return 0;
}
