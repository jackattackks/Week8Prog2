//
//  main.cpp
//  Week8Prog2
//
//  Created by Jackie on 3/10/21.
//

#include<iostream>
using namespace std;

class myClass {
    private:
    int x;
    public:
    myClass( ) { x = 0; }
    myClass( int inX ) { x = inX; }
    int getX( ) { return x; }
    void setX( int inX ) { x = inX; }
    
};

int main(){
    cout << "Name: Jackie Ocaña - Prog2 - March 10,2021"<<endl;
    
    
    myClass C1;
    C1.setX(42);
    cout << C1.getX( ) << endl;
    
    // declared pointer type myClass as ptrMYClass
    //it is set aka initialized to NULL
    myClass *ptrMyClass;
    ptrMyClass = NULL;
    ptrMyClass = &C1;
    //sets pointer ptrMyClass to the location of class C1
    
    // class point uses -> for functions not dot notation
    cout << "Used Arrow -Value of X is: "<< ptrMyClass -> getX() << endl; //will output 42
    ptrMyClass -> setX(104);  cout << "Used Arrow -Value of X is: "<< ptrMyClass -> getX() << endl;
    //sets x to 104 and output 104
    
    
    //example 2
    
    myClass C2(123);
    // declare class taking in 123 as parameter

    //ptr for second class and intialized to null
    myClass * ptrMyClass2;
    ptrMyClass2 = NULL;
    
    // location/address of C2 set to pointer
    ptrMyClass2 = &C2;
    
    //output first address 123 and the takes in parameter 333 and is output after
    cout << "Used Arrow -Value of X is: "<< ptrMyClass2-> getX() << endl;
    ptrMyClass2-> setX(333);
    cout << "Used Arrow -Value of X is: "<< ptrMyClass2-> getX() << endl;
    return 0;
    
}
