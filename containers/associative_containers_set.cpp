// examples of set

#include <iostream>
#include <set>
using namespace std ;

int main(){

	set<int> myset ;

	myset.insert(3) ;
	myset.insert(1) ;
	myset.insert(7) ;		//myset = {1,3,7}

	// insert command returns a pair of values (iterator,bool)
	// in which iterator points to the location of insertion and
	// bool denotes wheather the value is inserted or not

	pair< set<int>::iterator, bool > ret ;
	ret = myset.insert(9) ;

	for(set<int>::iterator itr = myset.begin() ; itr != myset.end() ; itr++)
		cout<<" "<<*itr ;
	//set<int>::iterator it ;

	//it = myset.find(7) ;
	cout<<endl ;
	return 0 ;
}
