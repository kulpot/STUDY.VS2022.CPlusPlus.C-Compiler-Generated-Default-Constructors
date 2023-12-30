#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// ------------------------------- C++ Structs vs Classes -------------------------------
//ref link:https://www.youtube.com/watch?v=3LHmBMdKkyI&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=4

// C++ default accessability 

//struct Mytype		// defaults to public
class Mytype
//class Person	// defaults to private
{
public:		// required for class Mytype which is private
	void foo() {}
	//Person()		// Constructor 
	//{
	//	cout << "Person()" << endl;
	//}
	//~Person()				// Destructor
	//{
	//	cout << "~Person()" << endl;
	//}
};

void main()
{
	Mytype instance;
	instance.foo();		// error in class Mytype which is a private
	//cout << "Before the scoped block" << endl;
	//Person person;
	//cout << "After the scoped block" << endl;
}



























// ------------------------------------ C++ Why The Semicolon After a Class Declaration ----------------------------------
//ref linK:https://www.youtube.com/watch?v=E-309a2ngsY&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=3

// for C++	just use a semicolon at the end of a class because its required
// At the end of a declaration of a data type you put a semicolon.
// A class is a data type.

//struct MyType
//{
//	void foo() {}
//};		// semicolon here -> means its required
//
//int myInt;				// int 4 bytes
//float anotherDataElement;
//
//class MyClass		// Declaring a class called MyClass
//{
//};
////} instance;		// for C++	just use a semicolon at the end of a class
//
//MyClass anotherClass;		// anotehrClass is an instance of MyClass
//
////int main()
////{
////	return 0;
////}
//
//void main()
//{
//	myInt = 5;
//	//MyType instance;
//	//instance.foo();
//}































// --------------------------------------- C++ Constructors and Destructors ------------------------------------
//ref link:https://www.youtube.com/watch?v=eeooGDIyQpM&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=4

// Destructor - is for cleaning up classes

//class Person
//{
//public:
//	Person()		// Constructor 
//	{
//		cout << "Person()" << endl;
//	}
//	~Person()				// Destructor
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//void main()
//{
//	cout << "Before the scoped block" << endl;
//	//{
//	//	Person person;	// person stack scope
//	//}				// C++ cleanup for Destructor ~Person()
//	Person person;
//	cout << "After the scoped block" << endl;
//	//Person person;
//}// C++ cleanup for Destructor ~Person()	-- Person person not inside a {}































// -------------------------------- C++ Classes --------------------------------
// ref link:https://www.youtube.com/watch?v=a9R9mP3oJBY&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6

// C++ Classes - 

//class Person
//{
//public:
//	string firstName;
//	string lastName;
////private:
//};
//
//void main()
//{	
//	//Person person = new Person();		// C# or Java
//	Person person;		// "person" object is in stack instead on the heap
//	person.firstName = "Kulpot";
//	person.lastName = "King";
//	cout << person.firstName << " " << person.lastName;
//}