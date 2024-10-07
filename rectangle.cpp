#include<iostream>
using namespace std;

class Rectangle
{
  public:
  
  double length; 
  double width;
  
  public:
  
  double getArea()	
  {
  	return length * width;
  }
  
  double getPerimeter()
  {
  	return 2*(length + width);
  }
  
  void display()
  {
  	cout<<"The area is:"<<getArea()<<endl;
  	cout<<"The perimeter is:"<<getPerimeter();
  }
};

int main()
{
	Rectangle rect1,rect2;
	
	rect1.length=12;
	rect1.width=8;
	
	rect2.length=14;
	rect2.width=6;
	
	cout<<"rect 1 is:"<<endl;
	rect1 .display();
	
	cout<<endl;
	
	cout<<"rect 2 is:"<<endl; 
	rect2.display();
	
	
}
