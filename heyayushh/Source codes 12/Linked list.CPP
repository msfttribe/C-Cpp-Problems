/*

The Linked List is a more complex data structure than the stack and queue. A
Linked List consists of two parts, one the DATA half and the POINTER half. The
Data half contains the data that we want to store while the pointer half
contains a pointer that points to the next linked list data structure. This way
we have a dynamic data structure as we can add as much data as we want within
memory restrictions. And yes, pointers play a major role in Data Structures...No
Pointers, No Data Structures...So Knowledge of Pointers is a basic must before
continuing.

Here the data stored within the Data Structure is 12,15,29,45.
As you can see, the pointer with 12 points to the next linked list which is 15
which points to 29 and so on.
This is just a conceptual idea. In Reality all this data is stored in random 
places in memory. Using Pointers help us to get all the data in order.
While Adding Data to a Linked List we check for previously added Linked Lists.
Then we reach the last node of the List where the pointer value is NULL and
point it to our newly created linked list, else if there is no previously
existing linked list we simply add one and set it's pointer to NULL.
Deletion is more complex. Suppose we want to delete the data 15. Then we first
find 15. Then we point the pointer which is present with 12 to the data in 29.
Then we delete the node which contains 15 as it's data.
Studying the Following Source code will help you understand and Appreciate the
Linked List:

*/
#include<iostream.h>

class linklist
{
	private:

   	 struct node
         {
            int data;
            node *link;
         }*p;

   public:

         linklist();
         void append( int num );
         void add_as_first( int num );
         void addafter( int c, int num );
         void del( int num );
         void display();
         int count();
         ~linklist();
};

linklist::linklist()
{
	p=NULL;
}

void linklist::append(int num)
{
   node *q,*t;

   if( p == NULL )
   {
      p = new node;
      p->data = num;
      p->link = NULL;
   }
   else
   {
      q = p;
      while( q->link != NULL )
     	q = q->link;

      t = new node;
      t->data = num;
      t->link = NULL;
      q->link = t;
   }
}

void linklist::add_as_first(int num)
{
   node *q;

   q = new node;
   q->data = num;
   q->link = p;
   p = q;
}

void linklist::addafter( int c, int num)
{
   node *q,*t;
   int i;
   for(i=0,q=p;i<c;i++)
   {
      q = q->link;
      if( q == NULL )
      {
      	cout<<"\nThere are less than "<<c<<" elements.";
        return;
      }
   }

   t = new node;
   t->data = num;
   t->link = q->link;
   q->link = t;
}

void linklist::del( int num )
{
   node *q,*r;
   q = p;
   if( q->data == num )
   {
      p = q->link;
      delete q;
      return;
   }

   r = q;
   while( q!=NULL )
   {
      if( q->data == num )
      {
      	 r->link = q->link;
         delete q;
         return;
      }

      r = q;
      q = q->link;
   }
   cout<<"\nElement "<<num<<" not Found.";
}

void linklist::display()
{
   node *q;
   cout<<endl;

   for( q = p ; q != NULL ; q = q->link )
   	cout<<endl<<q->data;

}

int linklist::count()
{
   node *q;
   int c=0;
   for( q=p ; q != NULL ; q = q->link )
   	c++;

   return c;
}

linklist::~linklist()
{
   node *q;
   if( p == NULL )
   	return;

   while( p != NULL )
   {
      q = p->link;
      delete p;
      p = q;
   }
}

int main()
{
   linklist ll;
   cout<<"No. of elements = "<<ll.count();
   ll.append(12);
   ll.append(13);
   ll.append(23);
   ll.append(43);
   ll.append(44);
   ll.append(50);

   ll.add_as_first(2);
   ll.add_as_first(1);

   ll.addafter(3,333);
   ll.addafter(6,666);

   ll.display();

   cout<<"\nNo. of elements = "<<ll.count();

   ll.del(333);
   ll.del(12);
   ll.del(44);
   cout<<"\nNo. of elements = "<<ll.count();
   return 0;
}