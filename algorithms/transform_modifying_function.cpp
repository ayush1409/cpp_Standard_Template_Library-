// Transform : it transform the data in different form and save it in another place

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
	vector<int> vec = {5,6,7,8,9,0,1} ;
	vector<int> vec2 = {5,6,7,8,9,0,1} ;
	vector<int> vec3 = {0,0,0,0,0,0,0,0,0,0,0} ;

	transform(vec.begin(),vec.end(),		//source
			vec3.begin(),			//destination
			[](int x){return x-1 ;});	//operation

	for(vector<int>::iterator it = vec3.begin(); it != vec3.end(); it++)
		cout<<" "<<*it ;
	cout<<endl ;
	transform(vec.begin(),vec.end(),			// source 1
			vec2.begin(),vec2.end(),		// source 2
			vec3.begin(),				//destination
			[](int x, int y){return x+y ;}) ;	//operation
	/* vec3[0] = vec[0] + vec2[0]
		"	  "		"
		"	  "		"
	*/

	for(vector<int>::iterator it = vec3.begin(); it != vec3.end(); it++)
		cout<<" "<<*it ;


	cout<<endl ;
	return 0 ;
}
