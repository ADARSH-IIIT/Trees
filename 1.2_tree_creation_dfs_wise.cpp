// this will create tree dfs wise 


#include<iostream>
#include<queue>
using namespace std ; 




class Node{

 
    public:
    int data ; 
    Node* left ; 
    Node* right ;


    Node(int val){
        data = val ; 
        left = NULL;
        right = NULL ; 
    }



};




Node* Treecreate(){
          
          cout << "Enter val : " ;
          int x ; 
          cin >> x ; 

        if(x != -1 ){
        
          Node* Creatednode = new Node(x);
          Creatednode->left = Treecreate() ;
          Creatednode->right = Treecreate() ;
          return Creatednode ;  

        }

         
         return NULL ; 

}









void printLevelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();  // Number of nodes at current level

        while (levelSize--) {
            Node* current = q.front();
            q.pop();
            cout << current->data << " ";

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }

        cout << endl; // Newline after each level
    }
}


int main(){


Node* Root = Treecreate() ; 


printLevelOrder(Root) ; 





    return 0 ; 
}