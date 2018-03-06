#include <iostream>
#include <string>
using namespace std;

int main(){
	// constructors
	string s1("hello") ;
	cout<<s1<<endl ;
	string s2("hello",3) ;		// s2: hel
	cout<<s2<<endl ;
	string s3(s1, 2) ;		// s3: ll0
	cout<<s3<<endl ;
	string s4(s1,2,2) ;		// s4: ll
	cout<<s4<<endl ;
	string s5(5,'a') ;		// s5: aaaaa
	cout<<s5<<endl ;
	string s6({'a','b','c'}) ;	// s6: abc
	cout<<s6<<endl ;

	// size
	s1 = "Goodbye" ;
	cout<<s1<<endl ;
	cout<<s1.size()<<endl<<s1.length()<<endl ;	// both are almost same
	cout<<s1.capacity()<<endl ;				// size of storage space currently allocated to s1
	s1.reserve(100) ;						// 100 chars
	cout<<s1.capacity()<<endl ;
	s1.shrink_to_fit() ;					// shrink the capacity to hold the content
	cout<<s1.capacity()<<endl ;
	s1.resize(9); 						// s1: Goodbye\0\0
	s1.resize('x') ;						// s1: Goodbye\0\0xxx
	s1.resize(3) ;						// s1: Goo

	return 0 ;
}
