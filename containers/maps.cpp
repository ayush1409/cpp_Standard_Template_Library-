
// maps are associated containers in STL

#include <iostream>
#include <map>
using namespace std ;

int main(){
	map<char,int> mymap ;
	mymap.insert(pair<char,int>('a',10)) ;
	mymap.insert(make_pair('z',20)) ;	// no need to specify the datatypes
							// as function template do automatic type checking
	for(map<char,int>::iterator itr = mymap.begin() ; itr != mymap.end() ; itr++){
		cout<<"\n"<<(*itr).first<<" => "<<(*itr).second ;
	}

	cout<<endl ;
	return 0 ;
}
