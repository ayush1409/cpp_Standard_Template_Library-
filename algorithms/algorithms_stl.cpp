//algorithms in stl ;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

bool is_odd(int x){
	return x%2 ;
}

int main() {
	vector<int> vec = {4,2,5,1,3,9} ;

	vector<int>::iterator itr = min_element(vec.begin(),vec.end()) ;	// itr -> 1

	//NOTE 1 :algorithm function always work in half opened manner i.e [begin,end)

	sort(vec.begin(),itr) ;		// vec = {2,4,5,1,3,9}

	reverse(itr,vec.end());		//vec = {2,4,5,9,3,1} and itr -> 9

	vector<int> vec2 ;
/*
	copy(itr,vec.end(),		// source
		vec2.begin()) ; 		// destination
*/
	for(vector<int>::iterator it = vec.begin() ; it != vec.end() ; it++){
		cout<<" "<<*it ;
	}

	// NOTE 2: more efficient way to insert items i.e append elements is

	vec2.insert(vec2.begin(),		// inserting location
			itr,vec.end()) ;	// range to be inserted

	cout<<endl ;
	for(vector<int>::iterator it = vec2.begin() ; it != vec2.end() ; it++){
		cout<<" "<<*it ;
	}

	// NOTE 3: algorithms with function
	itr = find_if(vec.begin(),vec.end(),is_odd) ;	// returns the first element thar satisfy the function condition i.e itr -> 5
	cout<<"\n "<<*itr ;
	cout<<endl ;

	// NOTE 4: alogorithm with native array

	int ar[4] = {1,2,3,4} ;
	sort(ar,ar+4);

	for(int i = 0 ; i<4 ; i++)
		cout<<" "<<ar[i] ;

	cout<<endl ;
	return 0 ;
}
