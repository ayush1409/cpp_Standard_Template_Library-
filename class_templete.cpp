
// class templete working with function templete

#include<iostream>
#include <vector>
using namespace std ;

template <typename T>
T square(T x){
	return x*x ;
}

template <typename T>
class Bovector{
	T arr[1000];
	int size ;
	public :
		Bovector():size(0){}

		void push(T x){
			arr[size] = x; size++;
		}
		void print() const {
			for(int i = 0 ; i<size ; i++)
				cout<<" "<<arr[i] ;
		}
		T get(int i) const {return arr[i] ;}
		int getsize() const {return size ;}
};

template<typename T>
Bovector<T> operator*(Bovector<T> &v1, Bovector<T> &v2){
	Bovector<T> ret ;
	for(int i = 0 ; i<v1.getsize() ; i++){
		ret.push(v1.get(i) * v2.get(i)) ;
	}
	return ret ;
}

int main(){
	Bovector<int> bv ;
	bv.push(2) ;
	bv.push(4) ;
	bv.push(6) ;
	bv.push(8) ;
	bv.push(10) ;
	bv.print() ;

	bv = square(bv) ;
	cout<<"\nsquared vector : ";
	bv.print() ;
	cout<<endl ;
	return 0 ;
}
