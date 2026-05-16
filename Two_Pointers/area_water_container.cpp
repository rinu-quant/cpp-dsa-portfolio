/* Problem:
     Given an array of heights, calculate how much water can be trapped after raining.

     Approach:
     Use two-pointer method: left and right
     Track max height to the left and right
     Water at position = min(max_left, max_right) - height[i]

     Time Complexity: O(n)
     Space Complexity: O(1)

     Key Insight: Two-pointer traversal avoids O(n²) nested loops.
*/




#include<iostream>
#include<vector>
#include<math.h>

int main ()
{
    std::vector<int> v ;
    v.reserve(10) ;

    int num , tmp ;
    std::cout << "Enter the size of arrray :" ;
    std::cin >> num ;

    std::cout << "Enter the elements \n" ;
    for ( int i=0 ; i<num ; ++i)
     {
	std::cin >> tmp ;
        v.push_back(tmp) ;
     }

    int left = 0 , right = v.size()-1 ;
    double max_area = 0 , current_area ;

    for ( int i{} ; left<right ; ++i )
      {
	current_area = (right-left)* fmin( v[left] , v[right] ) ;
        max_area = fmax( current_area , max_area ) ;

        if ( v[left] < v[right] )
         {
	   left++ ;
         }
        else
         {
           right-- ;
         }
      }

    std::cout << "The max Area = " << max_area << std::endl ;
    return 0 ;
}
