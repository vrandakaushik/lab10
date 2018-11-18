#include<iostream>
using namespace std;

/*
Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.

*/

class rectangle {
    private:
		double length;
		double breadth;
	public:
		rectangle()
		{
			cout<<"\ninput length : ";
			cin>>length;
	
				
			cout<<"\ninput breadth : ";
			cin>>breadth;
		}
		rectangle(double a,double b)
		{
			length=a;
			breadth=b;
		}
		double perimeter(){
				return 2*(length + breadth);
		}
		
		double area(){
				return length*breadth;
		}

};

int main(){

	cout<<"RECTANGLE 1 "<<endl;
	rectangle rect1;
	
	cout<<"RECTANGLE 2"<<endl;
	rectangle rect2;

	cout<<"the perimeter of rectangle1 is "<<rect1.perimeter()<<" and area of rectangle1 is "<<rect1.area()<<endl;
	cout<<"the perimeter of rectangle2 is "<<rect2.perimeter()<<" and area of rectangle2 is "<<rect2.area()<<endl;

	if(rect1.perimeter()<rect2.perimeter()){
		cout<<"perimeter of rectangle1 is smaller"<<endl;
	}
	else{
	cout<<"perimeter of rectangle2 is smaller"<<endl;
	}

	if(rect1.area()<rect2.area()){
	cout<<"area of rectangle1 is smaller"<<endl;
	}
	else{
	cout<<"area of  rectangle2 is smaller"<<endl;
	}

	return 0;

}
