#include <iostream>
using namespace std;

class Node{
    int data;
    Node *next;
    public:
        Node *f,*r;
        void init(){
            f=NULL,r=NULL;
        }
        void enqueue(int d){
            Node *current=new Node();
            current->data=d;
            current->next=NULL;
            if(r==NULL){
                r=current;
                f=current;
            }
            else{
                r->next=current;
                r=current;
            }
        }
        int dequeue(){
            int x=f->data;
            Node *temp=new Node();
            temp=f;
            f=f->next;
            delete temp;
            return x;
        }
        void display(){
            Node *temp=new Node();
            temp=f;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
};

int main(){
    Node q;
    int choice;
    q.init();
    do{ 
		cout<<"Enter your choice:\n1.Add an element\n2.Remove an element\n3.Display the Queue\n4.Exit\n";
		cin>>choice;
		switch (choice)
		{
		case 1:{
			cout<<"enqueue:";
			int data;
			cin>>data;
			q.enqueue(data);
            break;
		}
		case 2:{
			cout<<"dequeue:"<<endl;
			int poppedItem=q.dequeue();
			cout<<poppedItem<<" Popped"<<endl;
			break;
		}
		case 3:{
			cout<<"Display:"<<endl;
			q.display();
			break;
		}
	}
}while(choice>=1&&choice<=3);
}