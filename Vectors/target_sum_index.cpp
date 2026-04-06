/*

Problem:
Find pairs of elements in a sorted vector whose sum equals a target value, and print their indices.

Approach:
Use two-pointer method:
Start left at index 0, right at n-1.
Compute sum = v[left] + v[right].
If sum > target, decrement right.
If sum < target, increment left.
If sum == target, output indices and move pointers.

Time Complexity: O(n) – single pass
Space Complexity: O(1) – no extra data structures

Key Insight:
Two-pointer technique is far faster than brute-force O(n²) for sorted arrays/vectors.                 */







#include<iostream>
#include<vector>

int main()
{
    std::vector<int > v ;
    int n , tmp , target ;

    std::cout<< "Enter the number of elements of the array : " ;
    std::cin>> n ;

    std::cout<< "Enter the elements : \n" ;
    for ( int i{} ; i < n ; ++i )
     {
        std::cin>> tmp ;
        v.push_back(tmp) ;
     }

    int left=0 , right = n-1 , sum ;

    std::cout << "Enter the target sum : ";
    std::cin >> target ;

    for (int i{} ; left <  right ; ++i )
     {
        sum = v[left] + v[right] ;

        if ( sum > target )
         {
	   right-- ;
         }
        else if ( sum < target )
         {
	   left++ ;
         }
        else
         {
	     std::cout << left << " " << right << std::endl ;
             right-- ;
         }

     }

    return 0 ;
}
