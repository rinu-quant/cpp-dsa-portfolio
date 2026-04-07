/*

Problem:
Find all unique triplets in a vector that sum to zero.

Approach:
Sort the vector.
Fix one element, then use two-pointer technique for the remaining two.
Skip duplicates to ensure only unique triplets are included.

Time Complexity: O(n²) – outer loop + two-pointer scan
Space Complexity: O(1) extra (excluding result storage)

Key Insight:
This is a classic intermediate problem that tests sorting, two-pointer logic, and duplicate handling.         */



#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int> v ;
    v.reserve(10) ;
    int n , tmp ;

    std::cout << "Enter the size of array:" ;
    std::cin >> n ;

    std::cout << "Enter the elements of array\n" ;

    for ( int i{} ; i<n ; i++)
    {
        std::cin >> tmp ;
        v.push_back(tmp) ;
    }

    std::sort(v.begin(),v.end()) ;

    std::cout << std::endl ;

    for ( int i{} ; i<n ; i++)
    {

        if ( i>0  && v[i] == v[i-1] )
        {
	   continue ;
	    }

        for ( int p1 = i+1 , p2 = n-1 ; p1<p2 ; )
        {
            if ( -v[i] == v[p1] + v[p2] )
            {
               std::cout << v[i] << " " << v[p1] << " " << v[p2] << "\n" ;
               p1++ ;
               p2-- ;
            }
            else if ( v[p1] + v[p2] < -v[i])
            {
                p1++ ;
            }
            else
            {
                p2--;
            }


	        while ( p1<p2 && v[p1] == v[p1-1] )
            {
                p1++ ;
            }

            while ( p1<p2 && v[p2] == v[p2+1] )
            {
	        p2-- ;
            }


        }


    }

    return 0 ;
}
































