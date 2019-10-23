#include<iostream>
using namespace std;

struct node{
        int data;
        node *ptr;
    }*start1, *start2;
    
void traverse(){
	//cout<<"n";
        node *head;   
        head=start1;
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->ptr;
        }
        cout<<endl;
        head=start2;
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->ptr;
        }
        
    }
    
    void addNode(int item, char c)
    {
        if(c=='o'){
        	node *p1;
        	p1=new node;
        	p1->ptr=start1;
        	p1->data=item;
        	start1=p1;
		}
		else{
			node *p2;
        	p2=new node;
        	p2->ptr=start2;
        	p2->data=item;
        	start2=p2;
		}
    }
    
    void merge_sorted(){
    	node *t1, *t2, *t3;
    	t1=start1;
    	t2=start2;
    	t3=start1;
    	while(t1!=NULL){
    		//cout<<"l";
    		if(t2->data>t1->data){
    			//cout<<"m";
    			cout<<"t1"<<t1->data<<" ";
    			node *p;
    			p=new node;
    			p->data=t2->data;
    			p->ptr=t1->ptr;
    			t3->ptr=p;
    			cout<<"t2"<<p->data<<" ";
    			t1=t1->ptr;
			}
			
			t3=t1;
			t1=t1->ptr;
			t2=t2->ptr;
		}
		
		
		
		
	}
    
    
    
int main(){
	
	start1=start2=NULL;
	char c;
	int item,it;
	cin>>c;
	while(c=='o'){
		cin>>item;
		addNode(item, c);
		cin>>c;
	}
	
	while(c=='t'){
		cin>>item;
		addNode(item, c);
		cin>>c;
	}
	
	merge_sorted();
	
//	traverse();
	
        
	return 0;
}
