#include <iostream>
#define MAX 10

using namespace std;

class queueArray{
    int a[MAX];
    int r, f;
    public:
        void init(){
            r=f=(-1);
        }
        int enqueue(int d){
            if(r==MAX-1){
                cout<<"Full queue"<<endl;
                return 9999;
            }
            else{
                r++;
                a[r]=d;
            }
        }
        int dequeue(){
            if(r==f){
                cout<<"Empty queue"<<endl;
                return 9999;
            }
            f++;
            return a[f];
        }
        void display(){
            if(f==r)
                cout<<"Empty queue"<<endl;
            else{
                for(int i=f;i<=r;i++)
                    cout<<a[i]<<endl;
            }
        }
        bool empty(){
            if(r==f)
                return true;
            else   
                return false;
        }
};

int main(){
    queueArray q;
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
