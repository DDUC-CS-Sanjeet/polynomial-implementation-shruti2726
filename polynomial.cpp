#include<iostream>
using namespace std;
class Polynomial
{
   public:
             int degree,a[10];  // Variables to store information about polynomial

    Polynomial()
    { 
        degree=0;cout<<"default constructor"<<"\n"; // Behavior of default constructor
    }
    Polynomial(int deg)
    {
       degree=deg; cout<<"para constructor"<<"\n"; // Behavior of constructor with arguments
    }
      ~Polynomial()
    {
    	delete[]a;
      cout<<"destructor"<<"\n";// Behavior of destructor
    }
 
    //  Overload copy constructor, +, - and = operators
    Polynomial& operator+ (Polynomial& p)
   {    cout<<"addition"<<"\n";
     for(int i=0;i<degree;i++)
	 {
	 	cout<<a[i]+p.a[i];                                                                    
	 	if(i!=0)
	 	cout<<"x^"<<i;
	 	if(i!=degree-1)
	 	cout<<"+";
		}   
	}
	Polynomial& operator- (Polynomial &p)
   {   cout<<"subtraction \n";
     for(int i=0;i<degree;i++)
	 {
	 	cout<<a[i]-p.a[i];                                                                      
	 	if(i!=0)
	 	cout<<"x^"<<i;
	 	if(i!=degree-1)
	 	cout<<"+";
		}   
	}
	void operator= (const Polynomial &p)
	{  
	    this->degree=p.degree; 
		 for(int i=0;i<p.degree;i++)
	    { 
	    	a[i]=p.a[i];                                                        
	    } 
	}
     void storePolynomial()
    {
     cout<<"enter the coefficients in increasing order of x"; //  Code to enter and store polynomial
      for(int i=0;i<degree;i++)
	    {
		 cin>>a[i];
	    }
	}
    void display()
    { cout<<"displaying \n";
      for(int i=0;i<degree;i++)
	 {
	 	cout<<a[i];
	 	if(i!=0)
	 	cout<<"x^"<<i;
	 	if(i!=degree-1)
	 	cout<<"+";
		}  //  Code to print the polynomial in readable format
    }
};

int main()
{
  int degFirst, degSecond;
  cout<<"enter the values of degree for first and second polynomial";    // Ask user to input the values of degFirst and degSecond 
  cin>> degFirst>>degSecond;
  Polynomial firstPolynomial(degFirst);
  Polynomial secondPolynomial(degSecond);
  Polynomial thirdPolynomial;
  firstPolynomial.storePolynomial();
  secondPolynomial.storePolynomial();
   firstPolynomial.display();cout<<"\n";
  secondPolynomial.display();cout<<"\n";
 thirdPolynomial=firstPolynomial+secondPolynomial;
Polynomial fourthPolynomial=firstPolynomial-secondPolynomial;
  firstPolynomial.display();cout<<"\n ";
  secondPolynomial.display();cout<<"\n";
  thirdPolynomial.display();cout<<"\n";
  fourthPolynomial.display();
    return 0;
}
