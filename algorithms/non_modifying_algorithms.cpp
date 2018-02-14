
/*
	Non modifying algorithms such as
		count, min and max, compare, linear search, attribute
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){

	vector<int> vec = {3,4,5,1,2,8,9,6,10,7,2,4,5} ;
	vector<int> vec2 = {3,4,5,1,2} ;
	vector<int>::iterator itr1,itr2,itr ;
	pair<vector<int>::iterator, vector<int>::iterator> pair_of_itr ;

	//1. COUNTING
	int n = count(vec.begin(),vec.end(),5) ;		// 2
	cout<<n<<endl ;
	int m = count_if(vec.begin(), vec.end(),[](int x){return x>5 ;}) ;	// 5
	cout<<m<<endl ;

	//2. MIN MAX
	itr = max_element(vec.begin(),vec.end()) ;		// 10
	cout<<*itr<<endl ;
	itr = max_element(vec.begin(), vec.end(), [](int x,int y){return (x%10)<(y%10) ;}) ;	// 9
	cout<<*itr<<endl ;
	pair_of_itr = minmax_element(vec.begin(),vec.end(),
						[](int x, int y){return (x%10)<(y%10) ;}) ;		// <10,9>
	cout<<*(pair_of_itr.first)<<" "<<*(pair_of_itr.second)<<endl ;

	// 3. Linear search(use when the data is not sorted)
		// it returns the first match
	itr = find(vec.begin(),vec.end(),5) ;		// 3
	cout<<*itr<<endl ;
	itr = find_if(vec.begin(),vec.end(),[](int x){return x>5 ;}) ;	// 8
	cout<<*itr<<endl ;
	// search_n() used for searching consecutive n elements given
	// search() can also be used to search subrange
	vector<int> sub = {8,9,6,10} ;
	itr = search(vec.begin(),vec.end(),		// range in which search is performed
			sub.begin(), sub.end()) ;	// subrange that is searched
	cout<<*itr<<endl ;				// 8

	//NOTE : look for find_first_of() function

	//NOTE : look for adjacent_find() and its generalised form

	//NOTE : look for equal(), is_permutation(), mismatch(), lexograpical_compare()
			// and their generalised form as well

	//NOTE : look for check attributes functions such as
		// is_sorted(), is_sorted_util(), is_partitioned(), is_heap(), is_heap_util()
		// all_of(), any_of(), none_of()
	cout<<endl ;
	return 0;
}
