
/* Numeric Algorithm (in <numeric>)
	- accumulate, inner product, partial sum, adjacent difference
*/
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec = {1,2,3,4,5} ;
	//1.Accumulate
	int x = accumulate(vec.begin(),vec.end(),10) ;
	// x = 10 + vec[0] + ......
	cout<<x<<endl ;

	// 10*vec[0]*.....
	x = accumulate(vec.begin(),vec.end(), multiplies<int>()) ;

	//2.Inner product
	x = inner_product(vec.begin(),vec.begin()+2,	// range #1
				vec.end()-2,			// range #2
				10) ;					// init value
	// 10 + vec[0]*vec[2] + vec[1]*vec[3] + vec[2]*vec[4]
	cout<<x<<endl ;

	// NOTE : look for partial_sum() and partial_difference()
	cout<<endl;
	return 0 ;
}
