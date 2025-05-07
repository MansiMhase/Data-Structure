#include<iostream>
#include<string>
#include<stack>
using namespace std;

struct Node{

char data;
Node *left;
Node *right;

}*node;

class tree{
   public:
   string exp;
   stack<Node*> st;
   
   
   Node *accept(){
       cout<<"Enter Expression :";
       cin>>exp;
       int s=exp.length()-1;
       for(int j=s;j>=0;j--){
           node = new Node;
           node->data=exp[j];
           
           if(isalpha(exp[j])){
               node->left=NULL;
               node->right=NULL;
               st.push(node);
               
           }
           else{
               node->left=st.top(); st.pop();
               node->right=st.top(); st.pop();
               st.push(node);
               
           }
       }
       
      return st.top(); 
   }
   
   void display(Node* root)
{
    
    stack<Node*> s1,s2;
    s1.push(root);

    while(!s1.empty()){
        
        node = s1.top();s1.pop();
        s2.push(node);

        if (node->left) s1.push(node->left);
        if (node->right) s1.push(node->right);

    }

    while (!s2.empty())
    {
        cout<<s2.top()->data<<" ";
        s2.pop();
    }
    

}

void deletetree(Node *ptr){
    stack<Node*> s1;
    s1.push(ptr);

    while(!s1.empty()){
        node = s1.top() ; s1.pop();

        if (node->left) s1.push(node->left);
        if (node->right) s1.push(node->right);
        delete node;
    }

    cout<<"Tree deleted Succesfully...."<<endl;
}
   
};

int main(){
    
    tree t;
    int ch;
    Node *r;
    while(1){
    cout<<"\n----- MENU ----"<<endl;
    cout<<"1.Insert Data"<<endl;
    cout<<"2.Display Postorder"<<endl;
    cout<<"3.Delete Tree"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter Choice :--";
    cin>>ch;

    switch(ch){
        case 1:
            r =t.accept();
            break;
        case 2:
            t.display(r);
            break;

        case 3:
            t.deletetree(r);
            break;
        case 4:
           exit(0);
    }
}
    return 0;
    
}
