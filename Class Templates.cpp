#include <iostream> 
using namespace std; 

template <typename T> 
class Array { 
private: 
	T *ptr; 
	int size; 
public: 
	Array(T arr[], int s); 
	void print(); 
}; 

template <typename T> 
Array<T>::Array(T arr[], int s) { 
	ptr = new T[s]; 
	size = s; 
	for(int i = 0; i < size; i++) 
		ptr[i] = arr[i]; 
} 

template <typename T> 
void Array<T>::print() { 
	for (int i = 0; i < size; i++) 
		cout<<" "<<*(ptr + i); 
	cout<<endl; 
} 

int main() { 
	char arr[5] = {'1', '2', '3', '4', '5'}; 
	Array<char> a(arr, 5); 
	int Arr[5] = {1,2,3,4,5}; 
	Array<int> b(Arr, 5); 
	char crr[5] = {'a', 'e', 'i', 'o', 'u'}; 
	Array<char> c(crr, 5); 
	a.print(); 
	b.print();
	c.print();
	return 0; 
} 

