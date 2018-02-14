//array containers

#include <iostream>
#include <array>
using namespace std ;
int main(){
	array<int, 3> arr = {3,4,5} ;

	arr[2] = 6 ;

	for(int i = 0 ; i<3 ; i++)
		cout<<" "<<arr[i] ;

	return 0 ;
}
