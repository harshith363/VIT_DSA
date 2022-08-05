#include <iostream>
#define MAX 10		//This pre processor essentially gives a alphanumeric value to a number

using namespace std;

class stackArray{
    int arr[MAX];
	int top;
	public:
		void init(){	//The purpose of init function is to initialize the top variable to -1
			top=-1;
		}
		void push(int data){	//We declase push function which pushes the element into the stack
			if(top==(MAX-1))
				cout<<"Stack overflow"<<endl;
			else{
				top++;
				arr[top]=data;
			}
		}
		int pop(){	/*We declare the pop function to remove the last inserted element in the stack....
					  We declare this function to return integer value,i.e. the popped element.*/
			if(top==-1){
				cout<<"Stack underflow"<<endl;
			}
			else{
				int x=arr[top];
				top--;
				return x;
			}
		}
		void display(){	//Function declared to display the stack elements
			if(top==-1)
				cout<<"No elements pushed";
			else{
				for(int i=0;i<MAX;i++){
					cout<<arr[i]<<"  ";
				}
			}
		}
};

int main(){
	stackArray stk;
	int choice;
	stk.init();
	do{
		cout<<"Enter your choice:\n1.Push an element\n2.Pop an element\n3.Display the Stack\n4.Exit";
		cin>>choice;
		switch (choice)
		{
		case 1:{
			cout<<"Push";
			int data;
			cin>>data;
			stk.push(data);
			break;
		}
		case 2:{
			cout<<"Pop:"<<endl;
			int poppedItem=stk.pop();
			cout<<poppedItem<<" Popped"<<endl;
			break;
		}
		case 3:{
			cout<<"Display:"<<endl;
			stk.display();
			break;
		}
	}
}while(choice>=1&&choice<=3);
}