#include<iostream>
using namespace std;

struct node{
        int data;
        node *ptr;
    }*start;
    
void traverse(){
        node *head;   
        head=start;
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->ptr;
        }
        cout<<endl;
        
    }
    
    void addNode(int item)
    {
        node *p;
        p=new node;
        p->ptr=start;
        p->data=item;
        start=p;
    }
    
    
    void reverse_n_nodes(int r){
    	int t=r;
    	node *p;
    	while(r>0){
    		
		}
	}
    
    
int main(){
	
	start=NULL;
	char c;
	int item,it;
	cin>>c;
	while(c=='y'){
		cin>>item;
		addNode(item);
		cin>>c;
	}
	
	cout<<"enter number to reverse ";
	cin>>r;
	
	reverse_n_nodes(r);
	
	traverse();
	
        
	return 0;
}
