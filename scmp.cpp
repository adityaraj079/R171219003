#include<iostream>
using namespace std;
struct node
{
	int data;
	Node *link;
};
// From here changes are from Aditya Raj
Node *top=Null;
void push(int max, int *curr)
{
	if(max<=*curr)
	{
		cout<<"\n Stack is FULL\n";
	}
	else
	{
		int value;
		cin>>value;
		Node *ptr =new Node;
		ptr->data = value;
		ptr->link = top;
		*curr ++;
	}
} 			// Changes from Aditya finshed

void pop(int *curr)     // Changes from R171219001 
{ 
if(*curr == 0) 
cout<<“\nStack is EMPTY\n ”; 
else 
{ 
Node *ptr = top; 
top = top -> link; 
delet(ptr); 
*curr--; 
} 
} 
int main()
{
	int current, maximum, choice;
	                                 
	cout<<"Enter the maximum value of stack:";
	cin>>maximum;
	A: cout<<"\nEnter your choice\n1.Insertion\n2.Deletion\n3.Display top value\n4.Exit\n:";
	   cin>>choice;
	   switch(choice)
	   {
		   case'1': push(maximum, &current); goto A;
	   	   case'2': pop(&current); goto A;
		   case'3': cout<<top->data; goto A;
		   case'4': exit(0);
		   default: cout<<"\nEnter the choice for given above"; goto A;
	   }
	   return 0;
}
                                     
