/*
STACKS:-

Stacks are commonly used Data Structures while writing code. It's concept is
really simple which makes it even simpler to write it in code. Consider this
situation. There are a pile of 5 Books on a Table. You want to add one book to
the pile. What do you do??? You simply add the book on the TOP of the pile. What 
if you want the third book from the new 6 book pile? You then lift each book one
by one from the TOP until the third book reaches the top. Then you take the 
third book and replace all the others back into the pile by adding them from the 
TOP.
If you've noticed I've mentioned the word TOP in Caps. Yes, TOP is the most 
important word as far as stacks are concerned. Data is stored in a Stack where 
adding of data is permitted only from the top. Removing/Deleting Data is also
done from the top. As Simple as That. Now you may ask where Stacks are used?
Stacks are infact used on every Processor. Each processor has a stack where data
and addresses are pushed or added to the stack. Again the TOP rule is followed
here. The ESP Register adds as a Stack Pointer that refers to the top of the
stack in the Processor. Anyway, since the explaination of how the Processor
Stack works is beyond the subject of this Tutorial, let's write our Stack Data
Structure. Remember some Stack Terminology before continuing. Adding Data to the
Stack is known as Pushing and deleting data from the stack is known as Popping.


Clearly we can see that the last data pushed is the first one to be popped out.
That's why a Stack is also known as a LIFO Data Structure which stands for "Last
In,First Out" and I guess you know why.

Let us see how we implemented the stack. We first created a variable called top
that points to the top of the stack. It is initialised to -1 to indicate that
the stack is empty. As Data is entered, the value in top increments itself and
data is stored into an array arr. Now there's one drawback to this Data
Structure. Here we state the Maximum number of elements as 10. What if we need
more than 10 Data Elements? In that case we combine a Stack along with a Linked
List which will be explained later.
Now once you've got this one right, let's proceed to the Queue Data Structure.






*/

#include<iostream>
using namespace std;
#include<conio.h>
#define MAX 10        // MAXIMUM STACK CONTENT


class stack
{

  private:
    int arr[MAX];   // Contains all the Data
    int top;        //Contains location of Topmost Data pushed onto Stack

  public:
	 stack()         //Constructor
	 {
	    top=-1;      //Sets the Top Location to -1 indicating an empty stack
	 }

	 void push(int a)  // Push ie. Add Value Function
	 {
		top++;        // increment to by 1
		if(top<MAX)
		 {
			arr[top]=a;  //If Stack is Vacant store Value in Array
		 }
		 else
		 {
			cout<<"STACK FULL!!"<<endl;
			top--;
		 }
	 }

	int pop()                  // Delete Item. Returns the deleted item
	{
		if(top==-1)
		{
			cout<<"STACK IS EMPTY!!!"<<endl;
			return NULL;
		}
		else
		{
			int data=arr[top];     //Set Topmost Value in data
			arr[top]=NULL;       //Set Original Location to NULL
			top--;               // Decrement top by 1
			return data;         // Return deleted item
		}
	 }
};


int main()
{
 stack a;
 a.push(3);
 cout<<"3 is Pushed\n";
 a.push(10);
 cout<<"10 is Pushed\n";
 a.push(1);
 cout<<"1 is Pushed\n\n";

 cout<<a.pop()<<" is Popped\n";
 cout<<a.pop()<<" is Popped\n";
 cout<<a.pop()<<" is Popped\n";
 return 1;
}
