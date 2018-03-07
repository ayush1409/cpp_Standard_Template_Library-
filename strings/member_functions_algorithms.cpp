
#include <iostream>
#include <string>
using namespace std ;

int main(){
	string s1 = "abcdefg" ;
	char buf[20] ;
	size_t len = s1.copy(buf,3) ;			// buf : abc, len == 3
	len = s1.copy(buf, 4, 2) ;			// buf : cdef len == 4

	s1 = "if a job is worth doing, it's worth doing well" ;
	size_t found = s1.find("doing") ;		// found == 17
	found = s1.find("doing", 20) ;		// found == 35, as start finding from 20th position

	// searching for single character
	found = s1.find_first_of("doing") ;		// found == 6 as 'o' comes in "job" before any other character of "doing"
	found = s1.find_first_of("doing",10) ;	// found == 12 as searching start from 10th position
	found = s1.find_first_of("doing",10,1) ;	// found == 17 as it searches for first 'd'

	found = s1.find_last_of("doing") ;		// found == 39 as it searches for the first 'g'
	found = s1.find_first_not_of("doing") ;	// found == 0
	found = s1.find_last_not_of("doing") ;	// found == 44

	string s2 = "hello everyone" ;
	s1.compare(s2) ; 					// return positive if (s1 > s2) ; negative if (s1 < s2)
	if(s1 > s2) {} ;

	s1.compare(3, 2, s2) ;				// compare('starting index', 'number of char', 'string searching for')

	string s3 = s1 + s2 ;

 	return 0 ;
}
