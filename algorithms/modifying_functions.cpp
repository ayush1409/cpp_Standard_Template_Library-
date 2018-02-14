// modifying functions in algorithms

/* example such as copy, move , transform , insert, delete */

#include <iostream>
#include <algorithm>
using namespace std ;

bool is_larger(int x){
	return x>4 ;
}

int main() {
	vector<int> vec1 = {1,2,3,4,5,6,7,8} ;
	vector<int> vec2 = {0,0,0,0,0,0,0,0,0,0,0,0,0} ;

	// copy

	copy(vec1.begin(), vec1.end(),	// source
		vec2.begin()) ;			// destination

	for(vector<int>::iterator itr = vec2.begin() ; itr != vec2.end() ; itr++){
		cout<<" "<<*itr ;
	}
	cout<<endl ;

	copy_if(vec1.begin(), vec1.end(),	//source
		vec2.begin(),			// destination
		is_larger) ;			// condition

	for(vector<int>::iterator itr = vec2.begin() ; itr != vec2.end() ; itr++){
		cout<<" "<<*itr ;
	}
	cout<<endl ;

	copy_n(vec1.begin(), 4, vec2.begin()) ;
	for(vector<int>::iterator itr = vec2.begin() ; itr != vec2.end() ; itr++){
		cout<<" "<<*itr ;
	}
	cout<<endl ;

	copy_backward(vec1.begin(), vec1.end(),	// source
			vec2.end()) ;			// destination
	for(vector<int>::iterator itr = vec2.begin() ; itr != vec2.end() ; itr++){
		cout<<" "<<*itr ;
	}
	cout<<endl ;

	cout<<endl ;
	return 0 ;
}
