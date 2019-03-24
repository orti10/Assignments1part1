/**
 * exercise on binary trees
 *
 * @author Ortal and Tomer
 *
 * http://www.cplusplus.com/forum/beginner/118562/
 */
#include <iostream>
#include "Tree.hpp"
using namespace ariel;
using namespace std;

Tree::Tree() {
	// treeRoot = NULL;
	// return;
}
Tree::~Tree() {
}

void Tree::insert(int i) {
	// bool flag = true;
	// if(find(i)) {
	//     cout<<"the value is already in"<<endl;
	//     sizeOf--;
	// } 
	// else if(treeRoot==NULL){
	//     Node *newtreeRoot = new Node (i);
	//     treeRoot=newtreeRoot;
	// }

	// else{
	//     Node *current = treeRoot;
	//     while(flag){

	//     if((i>current->getKey()) && (current->getRight()==NULL)){
	//         Node *ans = new Node (i);
	//         current->setRight(ans);
	//         flag=false;
	//     }
	//     if((i>current->getKey()) && (current->getRight()!=NULL))
	//         current=current->getRight();

	//     if((i<current->getKey()) && (current->getLeft()==NULL)){
	//         Node *ans = new Node (i);
	//         current->setLeft(ans);
	//         flag=false;
	//     }
	//     if((i<current->getKey()) && (current->getLeft()!=NULL))
	//         current=current->getLeft();
	//     }   
	// }
	// sizeOf++;
	//return 0;
}

void Tree::remove(int i) {
	//  cout<<"there is no remove"<<endl;
}

int Tree::size() {
	//return sizeOf;
	return 0;
}

bool Tree::_contains(int i, Node *treeRoot) {
	//  if(i==treeRoot->getKey()){
	//         return true;
	//     }
	//     if((i>treeRoot->getKey()) && (treeRoot->getLeft()!=NULL)){
	//         _contains(i,treeRoot->getLeft());
	//     }
	//     if((i<treeRoot->getKey()) && (treeRoot->getRight()!=NULL)){
	//         _contains(i,treeRoot->getRight());
	//     }
	return false;
}

bool Tree::contains(int i) {
	//   if(treeRoot==NULL) return false;
	//   return _contains(i,treeRoot);
	return false;
}

int Tree::root() {
	// if(treeRoot!=NULL){
	//     return treeRoot->getKey();
	// }
	// cout<<"there is no treeRoot"<<endl;
	// return -1;
	return 0;
}

int Tree::parent(int i) {
	return 0;
}

Node *Tree::find(int i) {
	// Node *currentNode=treeRoot;

	// while(currentNode!=NULL){

	//      if(i<currentNode->getKey()){
	//         currentNode=currentNode->getLeft();
	//     }
	//     else if(i>currentNode->getKey()){
	//         currentNode=currentNode->getRight();
	//     }
	//     else
	//         return currentNode;
	// }
	return NULL;
}
int Tree::left(int i) {
	// // if(!contains(i)){
	// //     cout<<"there is no left child"<<endl;
	// //     return -1;
	// // }
	// Node *ans=find(i);
	// if(ans!=NULL){
	//     if(ans->getLeft()!=NULL) return ans->getLeft()->getKey();
	//     else {
	//         cout<<"there is no left child"<<endl;
	//     }
	// }
	// cout<<"there is no such value"<<endl;
	// return -1;
	return 0;
}
int Tree::right(int i) {

	//   Node *ans=find(i);
	//     if(ans!=NULL){
	//         if(ans->getRight()!=NULL) return ans->getRight()->getKey();
	//         else {
	//             cout<<"there is no right child"<<endl;
	//         }
	//     }
	//     cout<<"there is no such value"<<endl;
	//     return -1;
	return 0;
}
//Inorder print LVR
void Tree::print() {
	// if(node==NULL) return;

	// print(node->getLeft());
	// cout<<node->getKey()<<" ";
	// print(node->getRight());
}
// int main{
//     cout <<"D" << endl;
// }