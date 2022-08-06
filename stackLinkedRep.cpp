#include <iostream>
using namespace std;

class Node{
    int data;
    Node *next;
    public:
        Node *top;
        void init(){
            top=NULL;
        }
        void push(int d){
            Node *current=new Node();
            current->data=d;
            current->next=NULL;
            if(top==NULL){
                top=current;
            }
            else{
                current->next=top;
                top=current;
            }
        }
        int pop(){
            if(top==NULL){
                cout<<"Stack Underflow"<<endl;
                return 9999;
            }
            else {
                int x=top->data;
                Node *temp=top;
                top=top->next;
                delete temp;
                return x;
            }
        }
        void display(){
            Node *temp=top;
            if(top!=NULL){
                while(temp!=NULL){
                    cout<<temp->data<<"  "<<;
                    temp=temp->next;
                }
                cout<<endl;
            }
        }
};

int main(){
    Node nd;
    nd.init();
    int choice;
	nd.init();
	do{ 
		cout<<"Enter your choice:\n1.Push an element\n2.Pop an element\n3.Display the Stack\n4.Exit\n";
		cin>>choice;
		switch (choice)
		{
		case 1:{
			cout<<"Push:";
			int data;
			cin>>data;
			nd.push(data);
			break;
		}
		case 2:{
			cout<<"Pop:"<<endl;
			int poppedItem=nd.pop();
			cout<<poppedItem<<" Popped"<<endl;
			break;
		}
		case 3:{
			cout<<"Display:"<<endl;
			nd.display();
			break;
		}
	}
}while(choice>=1&&choice<=3);
}