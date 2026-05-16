/* 

Problem:
Given a sorted array of integers (may contain negatives), replace each element by its square and return the array sorted.

My Approach:
You iteratively compare absolute values from both ends of the vector
Swap and square elements to overwrite in-place
Works, but involves multiple swaps and checks  (messy)

Standard Optimized Approach (Recommended):
Use two-pointer technique: left = 0, right = n-1
Create a result vector of same size
Fill it from the back, placing the larger square at the last position each iteration
Move pointers inward until finished

Time Complexity: O(n) – single pass
Space Complexity: O(n) – new vector (if in-place is required, a two-pointer overwrite can also work but is trickier)

Key Insight:
Comparing absolute values from both ends lets you place the largest squares correctly in one pass
Overwriting in-place is messy; using a separate array is standard and cleaner.                                    */






#include<iostream>
#include<vector>
#include<cmath>

int main()
{
   std::vector<int > v ;
   int n , tmp , hold ;

   std::cout<< "Enter the number of elements of the array : " ;
   std::cin>> n ;

   std::cout<< "Enter the elements : \n" ;
   for ( int i{} ; i < n ; ++i )
    {
        std::cin>> tmp ;
        v.push_back(tmp) ;
    }

    int p1 = 0 , p2 = n-1  ;

    while ( p1<p2 )
    {

       if ( std::abs(v[p1]) > std::abs(v[p2]) )
       {
          std::swap(v[p1] , v[p2]) ;

          if (std::abs(v[p2]) < std::abs(v[p1+1]))
          {
            std::swap(v[p2],v[p1+1]) ;

	    hold = v[p2]*v[p2] ;
            v[p2] = hold ;
            --p2 ;
	    continue ;
          }

          hold = v[p2]*v[p2] ;
          v[p2] = hold ;

       }
       else
       {
          if ( std::abs(v[p2]) < std::abs(v[p1+1]) )
          {
	     std::swap(v[p2],v[p1+1]) ;

             hold = v[p2]*v[p2] ;
             v[p2] = hold ;

	  }
         else
          {

             hold = v[p2]*v[p2] ;
             v[p2] = hold ;

          }

       }

       if ( p2 == p1+1 )
       {
          hold = v[p1]*v[p1] ;
          v[p1] = hold ;
       }

       --p2 ;

     }

    std::cout << std::endl ;

    for ( int i{} ; i<n ; ++i )
    {
        std::cout << v[i] << " " ;
    }

    std::cout << std::endl ;

    return 0 ;
}
