///// very basic code to generate tree level wise 



#include<iostream>
#include<queue>


using namespace std ; 



class Node {
      

      public:
      int data ;
      Node* left ; 
      Node* right ; 
       

      Node(int val){
        data = val ; 
        left = NULL;
        right = NULL;
      } 

};





int main(){


    cout << "Enter value for root node : ";
    int x ;
    cin>>x ;

    Node* Root = new Node( x ) ; 

    queue<Node*> q;

    q.push(Root);


    while(q.empty()==false ){
                

               Node* Mainnode = q.front();
               q.pop();
               
               cout << "Enter val for left of " << Mainnode->data << " : ";
               cin>>x ; 
            
                if(x!=-1){  
                     Node* Leftnode = new Node(x);
                    Mainnode->left = Leftnode;
                    q.push( Leftnode );
                     }


               cout << "Enter val for right of " << Mainnode->data << " : ";
               cin>>x ; 
                   if(x!=-1){  
               Node*  Rightnode = new Node(x);
               Mainnode->right = Rightnode;
               q.push( Rightnode );
                     }

    }


}