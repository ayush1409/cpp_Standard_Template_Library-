// function objects (functors)
// using class as a function

#include <iostream>
#include <algorithm>
using namespace std ;
class X {
	public :
		void operator ()( string x){
			cout<<"calling function X with parameter : "<<x<<endl ;
		}
};

int main(){

	X foo ;
	foo("hi") ;

	/* some build-in functions like (functors)
		less		geater	geater_equal	less_equal		not_equal_to
		logical_and 	logical_not		logical_or		multiplies
		minus		plus		divide	modulus	negate
	*/
	// NOTE : these are usefull when we don't know about data
	// examples
	int x = multiplies<int>()(3,4) ;	// x = 3*4

	if(not_equal_to<int>()(x,10)){	// x != 10
		cout<<"\n x : "<<x<<endl ;
	}
	cout<<endl ;
	return 0 ;
}

/* Benifits of functors
	1. Smart functions : capabilities beyond operator ()
		it can remember state.
	2. it can have its own type.
*/
