// examples of list

#include <iostream>
#include <list>
#include <algorithm>
using namespace std ;

int main(){
	list<int> mylist = {5,2,9};
	mylist.push_back(4) ;
	mylist.push_front(7) ;

	list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2) ;
	mylist.insert(itr,8) ;		// takes O(1)

	itr++ ;
	mylist.erase(itr) ;		//takes O(1)

	/* Properties
		1. fast insert/delete at any place : O(1)
		2. slow search : O(n) but much slower then vectors
		3. no random access
	*/

	// but is very usefull beacause of the following functional

	// mylist1.splice(itr, mylist2, itr_a, itr_b) ;		// tskes O(1)

	for(list<int>::iterator itr = mylist.begin() ; itr != mylist.end() ; itr++)
		cout<<" "<<*itr ;

	cout<<endl ;
	return 0 ;
}
