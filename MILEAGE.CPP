#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int x;
   float km[20], gl[20], t[20], s=0;
   cout<<"No. of tanks: ";
   cin>>x;
   for (int i=0; i<x; i++)
      {
	 cout<<"\nNo. of Kilometers for tank "<<i+1<<": ";
	 cin>>km[i];
	 cout<<"Gallons of fuel for tank "<<i+1<<": ";
	 cin>>gl[i];
	 t[i]=km[i]/gl[i];
	 cout<<"Mileage of tank "<<i+1<<": "<<t[i];
	 s=s+t[i];
      }
   cout<<"\nAvg. Mileage= "<<s/x;
   getch();
}