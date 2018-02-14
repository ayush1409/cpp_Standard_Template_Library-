
// example on vectors

//ALL includes may usefull in STL code
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>		//map and multi-map
#include <set>		//set and multiset
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <functional>

using namespace std ;


int main(){
	vector<int > vec ;
	vec.push_back(4) ;
	vec.push_back(1) ;
	vec.push_back(8) ;

	vector<int>::iterator it ;
	/* NOTE : vec.begin() and vec.end() gives us half-open content : [begin,end)*/

	for(it = vec.begin() ; it != vec.end() ; it++)
		cout<<" "<<*it ;
	cout<<"\nnow the sorted vector is :" ;
	sort(vec.begin(),vec.end()) ;

	// this traversing technique is faster as compared to rest
	for(it = vec.begin() ; it != vec.end() ; it++)
		cout<<" "<<*it ;

	cout<<"\nanother way to traverse vector \n" ;
	for(int i = 0 ; i<vec.size() ; i++){
		cout<<" "<<vec[i] ;	//or we can do vec.at(i)....random access
	}

	cout<<"\nanother way to traverse vector \n" ;
	//c++11 provides another way to traverse vector
	for(it:vec){
		cout<<" "<<it ;
	}

	int *p = &vec[0] ;	// now we can use p as array having the value same as the vector had
	cout<<"\np[0] : "<<p[0] ;

	if(vec.empty()){cout<<"sorry! vec empty";}

	cout<<"\nvec.size() : "<<vec.size() ;

	vector<int> vec2(vec) ;		//copy constructor, vec2 <- vec

	vec.clear() ;	//vec is cleared now

	vec2.swap(vec) ;	//vec2 values swapped into vec i.e vec2 is empty now
	cout<<"\nvec now :" ;
	for(it = vec.begin() ; it != vec.end() ; it++)
		cout<<" "<<*it ;
	cout<<endl ;
	return 0 ;
}
