/* Sorting in STL */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec  = {9,1,10,2,45,3,90,4,9,5,8} ;

	sort(vec.begin(),vec.end()) ;
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout<<" "<<*it ;
	cout<<endl ;
/*
	bool lsb_less(int x,int y){
		return (x%10)<(y%10) ;
	}
*/
	sort(vec.begin(),vec.end(),[](int x,int y){return (x%10)<(y%10) ;}) ;
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout<<" "<<*it ;
	cout<<endl ;

	vec  = {9,1,10,2,45,3,90,4,9,5,8} ;

	//Problem 1: find the top 5 student according to their marks

	partial_sort(vec.begin(),vec.begin()+5,vec.end(), greater<int>()) ;	// greater<int>() is a functor

	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout<<" "<<*it;
	cout<<endl ;

	//Problem 2: finding the top 5 students but i don't care about their order
	vec  = {9,1,10,2,45,3,90,4,9,5,8} ;
	nth_element(vec.begin(),vec.begin()+5,vec.end(),greater<int>()) ;
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout<<" "<<*it ;
	cout<<endl ;

	//Problem 3: Move the students whose scores is less then 10 into the front
	vec  = {9,1,10,2,45,3,90,4,9,5,8} ;

	partition(vec.begin(),vec.end(),[](int x){return x<10 ;}) ;
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout<<" "<<*it ;
	cout<<endl ;

	vec  = {9,1,10,2,45,3,90,4,9,5,8} ;
	stable_partition(vec.begin(),vec.end(),[](int x){return x<10 ;}) ;
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout<<" "<<*it ;
	cout<<endl ;
	cout<<endl ;
	return 0 ;
}
