#include <iostream>
#include <string>
using namespace std ;

int main(){
	string s1 ;
	getline(cin, s1) ;			// similar to cin>>s1 ; default delimitter = '\n'
	getline(cin, s1, ';') ;			// delimitter == ;
	cout<<s1<<endl ;

	// convert a number into string
	s1 = to_string(8) ;
	s1 = to_string(2.3e7) ;			// s1: 23000000.000000
	cout<<s1<<endl ;
	s1 = to_string(0xa4) ;			// hexadecimal to string, s1: 164
	s1 = to_string(034) ;			// ocatal to string , s1:28

	// convert string to number
	s1 = "190" ;
	int i = stoi(s1) ;
	cout<<i<<endl ;

	s1 = "190 abcdes";
	size_t pos ;
	i = stoi(s1, &pos) ;			// i== 190, pos==3
	cout<<i<<endl ;

	s1 = "a monkey" ;
	//i = stoi(s1, &pos) ;			// exeption of invalid_arguement
	//i = stoi(s1, &pos, 16) ;		// i ==10 because it searches for first hexadecimal value and convert it into decimal
	cout<<i<<endl ;

	// there some similar funtions such as stol(), stod(), stof() etc.
	return 0 ;
}
