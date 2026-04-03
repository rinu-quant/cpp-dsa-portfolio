/*

Problem: Remove duplicates from a sorted vector while preserving order.

Approach:
Use a write pointer to track the last unique element’s index.
Iterate through the vector; if the current element is different from the last written, increment write and copy the element.

Time Complexity: O(n) – single pass
Space Complexity: O(1) – in-place

Key Insight:
Efficient in-place removal avoids extra memory.                                    */




#include<iostream>
#include<vector>

int main()
{
    std::vector<int > v ;
    int n , tmp , write = 0 ;

    std::cout<< "Enter the number of elements of the array : " ;
    std::cin>> n ;

    std::cout<< "Enter the elements : \n" ;
    for ( int i{} ; i < n ; ++i )
     {
        std::cin>> tmp ;
        v.push_back(tmp) ;
     }

    for ( int i = 1 ; i < n ; ++i )
     {
	if ( v[i] != v[write] )
         {
           write++ ;
           v[write] = v[i] ;
         }
     }

    std::cout<< "The array after deleting dups :" ;
    for ( int i{} ; i <= write ; ++i )
     {
	std::cout<<v[i]<< " " ;
     }
    std::cout<< std::endl ;
    return 0 ;
}
