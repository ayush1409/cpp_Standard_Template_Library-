
/* MERGE */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec1 = {8,9,9,10} ;
	vector<int> vec2 = {7,9,10} ;
	vector<int> vec_out = {0,0,0,0,0,0,0} ;
/*	// both array must be sorted
	merge(vec1.begin(),vec1.end(),	// input range #1
		vec2.begin(),vec2.end(),	// input range #2
		vec_out.begin()) ;		// output location

	for(vector<int>::iterator itr = vec_out.begin() ; itr != vec_out.end() ; itr++)
		cout<<" "<<*itr ;
	cout<<endl ;
*/
	vector<int> vec = {1,2,3,4,1,2,3,4,5} ;
	inplace_merge(vec.begin(),vec.begin()+4,vec.end()) ;
	
	for(vector<int>::iterator itr = vec.begin() ; itr != vec.end() ; itr++)
		cout<<" "<<*itr ;

	cout<<endl ;
	return 0 ;
}
