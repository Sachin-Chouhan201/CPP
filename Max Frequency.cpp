// C++ implementation to find 
// the maximum occurring character in 
// an input string which is lexicographically first 
#include <bits/stdc++.h> 
using namespace std; 


// Driver Code 
int main() 
{ 
	char str[] = "sample program for sam"; 



	// code to find the maximum occurring character in 
	// an input string which is lexicographically first 
	// freq[] used as hash table 
	int freq[26] = { 0 }; 

	// to store maximum frequency 
	int max = -1; 
	int count=0;
	// to store the maximum occurring character 
	char result; 

	// length of 'str' 
	int len = strlen(str); 

	// get frequency of each character of 'str' 
	for (int i = 0; i < len; i++) 
		freq[str[i] - 'a']++; 

	// for each character, where character is obtained by 
	// (i + 'a') check whether it is the maximum character 
	// so far and accodingly update 'result' 
	for (int i = 0; i < 26; i++) 
		if (max < freq[i]) { 
			max = freq[i]; 
			count=freq[i];
			result = (char)(i + 'a'); 
		} 

	// maximum occurring character 

	cout << "Maximum occurring character = "<< result<<endl; 
	cout << "Maximum nmber time = "<< count; 
	return 0; 
} 

