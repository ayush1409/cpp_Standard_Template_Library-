

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec = {0,0,0,0,0} ;
	vector<int> vec2 ;

	fill(vec.begin(),vec.end(),9) ;		// {9,9,9,9,9}

	fill_n(vec.begin(),3,9) ;			// {9,9,9,0,0}

	generate(vec.begin(),vec.end(),rand) ;	// {4,6,3,6,8}

	generate_n(vec.begin(),3,rand);		// {2,35,6,0,0}

	// similarly replace function

	replace(vec.begin(),vec.end(),		// data range
		6,						// old value condition
		9) ;						// new value

	replace_if(vec.begin(),vec.end(),
		[](int x){return x>80 ;},
		9) ;

	replace_copy(vec.begin(),vec.end(),		// data range
			vec.begin(),			// destination
			6,					// old value condition
			9) ;					// new value

	/* also see to the Order changing algorithms
	such as -
		reverse, rotate,permute,suffle

	NOTE : these changes the order of the elements but not the elements themself
	*/
	return 0 ;
}
