#include<iostream>
using namespace std;

void heapinsert(int t[], int &n, int item){
	n++;
	ptr=n;
	t[ptr]=item;
	par=(ptr+1)/2-1;
	int tp;
	while(par>0){
		if(par>=0){
			if(t[ptr]>t[par]){
				tp=t[ptr];
				t[ptr]=t[par];
				t[par]=tp;
			}
			ptr=par;
			par=(ptr+1)/2-1;
		}
	}
}
void traverse(){
	
}
int main(){
	
}


