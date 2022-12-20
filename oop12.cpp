#include<iostream>
#include<deque>
#include<cstdlib>
using namespace std;
int main()
{
int choice,element;
char ch;
deque<int> dq;
deque<int>::iterator ditr;
cout<<"*****************MENU*********************\n";
cout<<"\n1.Insert element at front\n2.Insert element at rear";
cout<<"\n3.Delete front element\n4.Delete rear element";
cout<<"\n5.Display front element\n6.Display rear element";
COUT<<"\n7.Display deque\n8. Exit";
do
{
cout<<"\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:cout<<"\nEnter Element to insert at front";
cin>>element;
dq.push_front(element);
break;

case 2:cout<<"\nEnter Element to insert at rear";
cin>>element;
dq.push_back(element);
break;

case 3:
cout<<"Front element ";dq.front();cout<<" of deque is deleted";
dq.pop_front();
break;

case 4:dq.pop_back();
cout<<"Back element ";dq.back();cout<<" of deque is deleted";
break;

case 5:cout<<"\nFront Element:";
cout<<dq.front();
break;

case 6:cout<<"\nRear Element:";
cout<<dq.back();
break;

case 7: if(dq.empty())
cout<<"\nQueue is empty!";
else
{
for(ditr=dq.begin();ditr<dq.end();ditr
cout<<*ditr<<"\t";
}
break;

case 8:
 exit(0);
}
cout<<"\nDo you want to continue(y/n)";
cin>>ch;

}while(ch=='y' || ch=='Y');
return 0;
}