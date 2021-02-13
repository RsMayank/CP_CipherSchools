// C++ program to find if two people 
// starting from different positions 
// ever meet or not. 
#include <bits/stdc++.h> 
// using namespace std; 

bool everMeet(int x1, int x2, int v1, int v2) 
{ 
	// If speed of a person at a position before 
	// other person is smaller, then return false. 
	if (x1 < x2 && v1 <= v2) 
	return false; 
	if (x1 > x2 && v1 >=v2) 
	return false; 
	
	// Making sure that x1 is greater 
	if (x1 < x2) 
	{ 
		std::swap(x1, x2); 
		std::swap(v1, v2); 
	}	 
	
	// Until one person crosses other 
	while (x1 >= x2) { 
		if (x1 == x2) 
			return true; 
		
		// first person taking one 
		// jump in each iteration 
		x1 = x1 + v1; 
		
		// second person taking 
		// one jump in each iteration 
		x2 = x2 + v2; 
	} 

	return false; 
} 

// Driver code 
int main() 
{ 
	int x1, v1, x2, v2; 
	std::cin>>x1>>v1>>x2>>v2;
	if (everMeet(x1, x2, v1, v2)) 
		std::cout<<"Yes"<<std::endl; 
	else
		std::cout<<"No"<<std::endl; 
	return 0; 
} 

