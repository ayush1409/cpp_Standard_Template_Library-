
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

int main(){
	string s1 = "Variety is the spice of life" ;
	// if we eanna search for the occurance of letter 'e'
	int num = count(s1.begin(), s1.end(), 'e') ;			// num == 4
	cout<<num<<endl ;
	// count the occurance of characters 'a' to 'e' use a lamda function
	num = count_if(s1.begin(), s1.end(), [](char c){return (c <= 'e' && c >= 'a');}) ;		// num ==6
	cout<<num<<endl ;

	s1 = "Goodness is better then beauty." ;
	// to search for concecutive n elements
	string :: iterator itr = search_n(s1.begin(), s1.begin()+20, 2, 's') ;				//itr -> first 's'

	//s1.erase(itr, itr+5);
	//s1.insert(itr, 3, 'x') ;
	//s1.replace(itr, itr+3, 3, 'y') ;					// replace the given range by 3 'y', ie. replacing substring

	//is_permutation(s1.begin(), s1.end(), s2.begin()) ;		// checks weather s1 is a is a permutation of s2 or not
	replace(s1.begin(), s1.end(), 'e', ' ') ;			// replacing characters
	cout<<s1<<endl ;

	string s2 = "Goodness is better then beauty." ;
	transform(s1.begin(), s1.end(), s2.begin(),
			[](char c){
				if(c < 'n')
					return 'a' ;
				else
					return 'z' ;
			}) ;
	cout<<s2<<endl;

	s1 = "abcdefg" ;
	rotate(s1.begin(), s1.begin()+3, s1.end()) ;			// s1.begin()+3 becomes first element
	cout<<s1<<endl ;
	
	return 0 ;
}
