/*

QUEUES:-

There's a huge crowd at your local grocery store. There are too many people
trying to buy their respective items and the Shopkeeper doesnt know from where
to start. Everyone wants their job done quickly and the shopkeeper needs an
efficient method to solve this problem. What does he do? He introduces a Queue
System based on the First Come, First Serve System. The Last Person trying to
buy an item stands behind the last person at the END of the queue. The
Shopkeeper however is present at the FRONT end of the queue. He gives the item
to the person in FRONT of the queue and after the transaction is done, the
person in FRONT of the Queue Leaves. Then the person second in queue becomes the
First person in the Queue.

Do you get the point here? A Queue is similar to a stack except that addition of
data is done in the BACK end and deletion of data is done in the FRONT.
Writing a queue is a lot harder than writing a stack. We maintain 2 Integers in
our Queue Data Structure, one signifying the FRONT end of the Queue and the 
other referring to the BACK end of the Queue.

Let us use the same coding style as we used for the Stack. We first initialise
both the ends to -1 to indicate an empty queue. When Data is added to the queue 
both ends get respective postive values. When New Data is added, the back End is
incremented and when data is deleted the front end is decremented. This works
fine but it has a major drawback. What if the Maximum capacity of the Queue is 5
Items. Suppose the User has added 4 items, deleted 3 items and adds 2 again. The
Stack wont permit him to add the last half of the data as it will report that
the stack is full. The Reason is that we are blindly incrementing/decrementing
each end depending on addition/deletion not realising that both the ends are
related to each other. I leave this as an excercise for you to answer. Why will
our proposed Stack report the Stack as Full even though it's actually vacant?
So we need another approach.In this method we focus more on the data than on the
addition end and the deletion end.

What we now use is the grocery store example again. Suppose there are 5 items in
a queue and we want to delete them one by one. We first delete the first data
item pointed by the deletion end. Then we shift all data one step ahead so that
the second item becomes the first, third item becomes second and so on...
Another method would be to maintain the difference between the two ends which is
not practical. Hence we stick to our previous method. It might be slow in Big
Queues, but it certainly works great. Here's the code.
*/


#include<iostream.h>
#include<conio.h>
#define MAX 5           // MAXIMUM CONTENTS IN QUEUE


class queue
{
 private:
	int t[MAX];
	int al;      // Addition End
	int dl;      // Deletion End

 public:
  queue()
  {
	dl=-1;
	al=-1;
  }

  void del()
  {
     int tmp;
     if(dl==-1)
     {
	    cout<<"Queue is Empty";
     }
     else
     {
		for(int j=0;j<=al;j++)
		{
			if((j+1)<=al)
			{
				tmp=t[j+1];
				t[j]=tmp;
			}
			else
			{
				al--;

			if(al==-1)
				dl=-1;
			else
				dl=0;
			}
		}
     }
  }

void add(int item)
{
	if(dl==-1 && al==-1)
	{
		dl++;
		al++;
	}
   else
   {
		al++;
		if(al==MAX)
	{
			cout<<"Queue is Full\n";
			al--;
			return;
		}
	}
	t[al]=item;

}

  void display()
  {
	if(dl!=-1)
   {
	for(int iter=0 ; iter<=al ; iter++)
	cout<<t[iter]<<" ";
   }
   else
	cout<<"EMPTY";
  }

};

void main()
{
 queue a;
 int data[5]={32,23,45,99,24};
 clrscr();
 cout<<"Queue before adding Elements: ";
 a.display();
 cout<<endl<<endl;

 for(int iter = 0 ; iter < 5 ; iter++)
 {
   a.add(data[iter]);
   cout<<"Addition Number : "<<(iter+1)<<" : ";
   a.display();
   cout<<endl;
 }
 cout<<endl;
 cout<<"Queue after adding Elements: ";
 a.display();
 cout<<endl<<endl;

 for(iter=0 ; iter < 5 ; iter++)
 {
   a.del();
   cout<<"Deletion Number : "<<(iter+1)<<" : ";
   a.display();
   cout<<endl;
 }
 getch();
}
