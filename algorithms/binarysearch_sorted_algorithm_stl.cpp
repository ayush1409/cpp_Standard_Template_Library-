
/* Sorted Data algorithm
	- requires data in pre-sorted form
	- binary search, merge, set operation
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec = {8,9,9,9,45,87,90} ;
	vector<int>::iterator itr ;
	pair< vector<int>::iterator ,vector<int>::iterator > pair_of_itr ;
	//1. Binary Search
	// element if exist
	bool found = binary_search(vec.begin(),vec.end(),9) ;
	cout<<" search for 9 : "<<found<<endl ;

	// search for range of Data
	vector<int> sub = {9,45,66} ;
	found = includes(vec.begin(),vec.end(),		// range #1
				sub.begin(),sub.end()) ;	// range #2
	// returns true if sub exists in vec
	// vec and sub must already Sorted
	cout<<"search for <9,45,66> : "<<found<<endl ;

	// Searching Position
	itr = lower_bound(vec.begin(),vec.end(),9);	// itr = 1
	// returns the first position where 9 can be inserted and still sorted vec
	itr = upper_bound(vec.begin(),vec.end(),9) ;	// itr = 4
	// returns the last position where 9 can be inserted and still sorted vec

	pair_of_itr = equal_range(vec.begin(),vec.end(),9) ;	// <1,4>

	
	cout<<endl ;
	return 0;
}
