
// associative array (array + map or unordered_map)
// similar to dictionaries in python

#include <iostream>
#include <array>
#include <unordered_map>
using namespace std ;
/*
void foo(const unordered_map<char,string>& m){
	// m['s'] = "SUNDAY" ;		// gives an error
	// cout<<m['s']<<endl ;		// gives an error

	// to print use iterator

	unordered_map<char,string>::iterator itr = m.find('s') ;

	if(itr != m.end())
		cout<<"m['s'] : "<< *itr ;
}
*/
int main(){
	unordered_map<char, string> day = {{'s',"sunday"},{'m',"monday"}} ;

	cout<<"\nday['s'] : "<<day['s'] ;
	cout<<"\nday['m'] : "<<day.at('m') ;

	day['w'] = "wednesday" ;
	cout<<"\nday['w'] : "<<day['w'] ;

	//foo(day) ;
	cout<<endl ;
	return 0 ;
}
