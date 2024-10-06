#include<iostream>
using namespace std ;

class Complex {
	float real , img ;
	
	public :
		
		Complex() : real(0) , img(0) {} 
		
		Complex(float r , float i ) : real(r) , img(i) {} 
		
		Complex operator +(const Complex &ob){
			
			return Complex(real+ob.real,img+ob.img) ;
			
		}
		
		Complex operator -(const Complex &ob){
			
			return Complex(real-ob.real,img-ob.img) ;
			
		}
		
		Complex operator /(const Complex &ob){
		
			return Complex(real/ob.real , img/ob.img) ;
		}
		
		
		Complex operator *(const Complex &ob){
		
			return Complex(real*ob.real , img*ob.img) ;
		}
		
		
		
		
		void display(){
			
	    if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;

			
		}
		
};

int main(){
	
	Complex c1(1,5);
	Complex c2(2,3);
	
	cout<<"1 5"<<endl;
	cout<<"2 3"<<endl;
	
	Complex c3 = c1+c2 ;
	
	c3.display() ;
	
	 c3 = c1-c2 ;
	
	c3.display() ;
	
	c3 = c1 * c2 ;
	
	c3.display() ;
	
	c3 = c1/c2 ;
	
	c3.display() ;
	
	
	return 0 ;
	
	
}
