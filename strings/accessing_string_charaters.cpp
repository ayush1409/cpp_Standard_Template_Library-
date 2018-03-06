
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1 = "Goodbye" ;

	cout<<s1[2]<<endl ;
	s1[2] = 'x' ;		// s1: Goxdbye
	s1.at(2) = 'y' ;		// s1: Goydbye
	//s1.at(20) ;		//throws an exeption out_of_range
	//s1[20] ;			//undefined behavior

	cout<<s1.front()<<endl ;		// 'G'
	cout<<s1.back()<<endl ;			// 'e'
	s1.push_back('z') ;			// s1: Goydbyez
	cout<<s1<<endl ;

	s1.pop_back() ;
	cout<<s1<<endl ;
	string s2(s1.begin(), s1.begin()+3);
	cout<<s2<<endl ;

	// Rnged access
	// assign, append, replace, insert

	string s3 = "Dragon Land" ;

	s1.assign(s3) ; 			// s1 = s3
	s1.assign(s3, 2, 4) ;		// s1 : agon
	s1.assign("wisdom") ;
	s1.assign("wisdom",3) ;		// s1 : wis
	s1.assign(3,'x') ;		// s1 : xxx
	s1.assign({'a','b','c'}) ;	// s1 : abc

	s1.append(" def") ;		// s1 : abc def
	s1.insert(2, "mountain", 4) ;	// s1 : abmounc def
	s1.replace(2, 5, s3, 3, 3) ;	// s1 : abgon def

	s1.erase(1, 4) ;
	cout<<s3.substr(2,4)<<endl ;

	s1 = "abc";
	s1.c_str() ; 			// s1 : abc\0
	s1.data() ;				// s1 : abc

	cout<<"s1 : "<<s1<<" s2 : "<<s3<<endl ;
	s1.swap(s3) ;
	cout<<"s1 : "<<s1<<" s2 : "<<s3<<endl ;
	return 0 ;
}
