/*
*
*
* http://www.cplusplus.com/forum/beginner/118562/
*/
#include <iostream>
namespace ariel
{
	using namespace std;


	class Node {
	private:
		int key;
		Node *left;
		Node *right;

	public:
		Node(int data) {
			key = data;
		}
		int getKey() {
			return key;
		}
		Node *getRight() {
			return right;
		}
		Node *getLeft() {
			return left;
		}
		Node *setRight(Node *node) {
			return right = node;
		}
		Node *setLeft(Node *node) {
			return left = node;
		}

	};

	class Tree {
	private:
		Node *treeRoot;
		int sizeOf;

	public:
		Tree();
		~Tree();
		void insert(int i);
		void remove(int i);
		int size();
		bool _contains(int i, Node *root);
		bool contains(int i);
		int root();
		int parent(int i);
		Node* find(int i);
		int left(int i);
		int right(int i);
		void print();
	};
}