/*

Problem:
Remove all zeros from a vector while keeping the order of other elements intact.

Approach:
Iterate through the vector
Copy non-zero elements to a new vector OR shift in-place
Resize the vector at the end

Time Complexity: O(n)
Space Complexity: O(1) in-place / O(n) if using extra vector

Key Insight:
Preserving order requires either shifting elements or collecting non-zero elements.

*/




#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v ;
    v.reserve(10) ;

    int n ,hold , tmp , p=0 ;
    std::cout << "Enter the size of the array:" ;
    std::cin >> n ;

    std::cout << "Enter the elements.\n" ;
    for ( int i{} ; i<n ; ++i )
     {
        std::cin >> tmp ;
        v.push_back(tmp) ;
     }

    for ( int j{} ; j<n ; ++j )
     {
        if ( v[j] != 0 )
         {
           hold = v[j] ;
           v[j] = v[p] ;
           v[p] = hold ;
           p++ ;
         }
     }

    std::cout << std::endl << std::endl ;

    for ( int k{} ; k<p ; ++k )
     {
        std::cout << v[k] << " " ;
     }
    return 0 ;
}
