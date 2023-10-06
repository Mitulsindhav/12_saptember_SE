#include<iostream>
using namespace std;


 double area(double r)
 {
 	  return 3.142*r*r;
 	  
 }
 
 int area(int x)
  {
 	 return x*x;
 	 
 }
 int area(int l, int b)
 {
 	return l*b;
 	
 }


int main()
{
	double r;
	int x,l,b;
	
	
	cout<<"Enter the redius of  circle:";
	cin>>r;
	
	cout<<"Enter the lenghth of a square:";
	cin>>x;
	
	cout<<"Enter the lenghth of a rectangle:";
	cin>>l;
	
	cout<<"Enter the width of a rectangle:";
	cin>>b;
	
	
	
	cout<<endl<<"The area of circle is "<<area(r)<<endl;
	cout<<endl<<"The area of square is "<<area(x)<<endl;
	cout<<endl<<"The area of ractangle is "<<area(l,b)<<endl;
	
	
}

