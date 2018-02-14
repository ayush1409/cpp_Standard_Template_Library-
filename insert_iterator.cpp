// insert iterator

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec1 = {1,2,3} ;
	vector<int> vec2 = {4,5,6,7,8} ;

	vector<int>::iterator itr = find(vec2.begin(), vec2.end(), 6) ;

	insert_iterator< vector<int> > i_itr(vec2,itr) ;

	copy(vec1.begin(), vec1.end(),	// source
		i_itr) ;				// end

	for(vector<int>::iterator it = vec2.begin() ; it != vec2.end() ; it++){
		cout<<" "<<*it ;
	}
	cout<<endl ;
	// Reverse iterator

	for(vector<int>::reverse_iterator ritr = vec2.rbegin() ; ritr != vec2.rend() ; ritr++){
		cout<<" "<<*ritr ;
	}
	cout<<endl ;

	return 0;
}
