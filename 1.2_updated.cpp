// this will create tree dfs wise 


#include<iostream>
#include<queue>
#include<string>
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




Node* Treecreate(  Node* parent , string direction  ){
          
          if( parent == NULL )cout << "Enter value for root node : " ;
          else{
               cout << "Enter value for " << direction << " of " << parent->data << " : " ; 
          }
          int x ; 
          cin >> x ; 



        if(x != -1 ){
        
          Node* Creatednode = new Node(x);
          Creatednode->left = Treecreate( Creatednode , "left"  ) ;
          Creatednode->right = Treecreate( Creatednode , "right") ;
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


Node* Root = Treecreate(NULL , "root") ; 


printLevelOrder(Root) ; 





    return 0 ; 
}