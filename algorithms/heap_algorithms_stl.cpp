/* Heap ALgorithms (max heap)*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec = {9,1,10,2,45,3,90,4,9,5,8} ;

	make_heap(vec.begin(),vec.end()) ;
	for(vector<int>::iterator itr = vec.begin(); itr != vec.end() ; itr++)
		cout<<" "<<*itr ;
	cout<<endl ;

	pop_heap(vec.begin(),vec.end()) ;	// 1. swap vec[0] with vec[size]
							// 2. Heapify[vec.begin(), vec.end()-1]

	vec.pop_back();				// removes the last(largest) element
	for(vector<int>::iterator itr = vec.begin(); itr != vec.end() ; itr++)
		cout<<" "<<*itr ;
	cout<<endl ;

	// Add new element :
	vec.push_back(100) ;
	push_heap(vec.begin(),vec.end()) ;	// Heapify the last element of the vec
	for(vector<int>::iterator itr = vec.begin(); itr != vec.end() ; itr++)
		cout<<" "<<*itr ;
	cout<<endl ;

	// Heap Sorting :
	vec = {9,1,10,2,45,3,90,4,9,5,8} ;
	make_heap(vec.begin(),vec.end()) ;
	sort_heap(vec.begin(),vec.end()) ;	// NOTE : this works only on heaps thus first we have to apply make_heap()
	
	for(vector<int>::iterator itr = vec.begin(); itr != vec.end() ; itr++)
		cout<<" "<<*itr ;
	cout<<endl ;

	cout<<endl ;
	return 0 ;
}
