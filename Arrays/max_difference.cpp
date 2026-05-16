/*

Problem:
Find the maximum difference between two elements such that the larger element comes after the smaller element.

Approach:
Track the minimum value seen so far in the vector.
For each element, calculate the difference with the minimum (current_diff = v[i] - min).
Update max_diff if current_diff is larger.
Update min if the current element is smaller than the previous min.

Time Complexity: O(n)
Space Complexity: O(1)

Key Insight:
No need for nested loops; a single pass suffices.       */


#include<iostream>
#include<vector>

int main()
{
    std::vector<int > v ;
    int n , tmp , min , max_diff , current_diff ;

    std::cout<< "Enter the number of elements of the array : " ;
    std::cin>> n ;

    std::cout<< "Enter the elements : \n" ;
    for ( int i{} ; i < n ; ++i )
     {
        std::cin>> tmp ;
        v.push_back(tmp) ;
     }

    min = v[0] ;
    max_diff = v[1] - v[0] ;

    for ( int i=1 ; i<n ; ++i )
     {
        current_diff = v[i] - min ;
        if ( v[i] < min )
         {
	   min = v[i] ;
         }
        if ( current_diff > max_diff )
         {
	   max_diff = current_diff ;
         }
     }

    std::cout <<  "The max difference in the array : " << max_diff;

    return 0 ;
}
