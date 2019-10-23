#include <iostream>

using namespace std;

    struct node{
        int data;
        node *ptr;
    };
    node *start=NULL;
    void traverse(){
        
        node *head;  
        head=start;
        while(head!=NULL){
            cout<<head->data;
            head=head->ptr;
        }
    }
    
    void addNode(int item)
    {
        node *p;
        p=new node;
        p->ptr=start;
        p->data=item;
        start=p;
    }
    
    void addNodeInSorted(int item){
        
        node *P;
        P=new node;
        P->data=item;
        
        //case when neither P1 NOR P2 IS NULL
        
        node *P1, *P2;
        P1=NULL;
        P2=start;
        while(P1!=NULL)
        {
            if(item>P2->data)
            {
                P1=P2;
                P2=P2->ptr;
            }
        }
    }
    
int main() { 
    
    int option,item;
    cout<<"1. add new node";
    cout<<"2. traverse";
    cout<<"3. add node in between";
    
    cin>>option;
    while(option!=4)
    {switch(option)
    {
        case 1:
        cout<<"input data for new node";
        cin>>item;
        addNode(item);
    cin>>option;
    break;
        case 2:
        traverse();
     cin>>option;
     break;
     
     case 3:
     cin>>item; 
     addNodeInSorted(item);
    
        
    }
    }
    
}

