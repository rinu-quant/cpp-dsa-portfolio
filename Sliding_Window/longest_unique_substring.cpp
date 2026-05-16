/*

Problem:
Given a string, find the length of the longest substring without repeating characters.

Approach:
Use a sliding window with two pointers.
Maintain a hash/vector to track character indices.
Expand the right pointer until a repeat occurs, then move the left pointer forward.

Time Complexity: O(n) – each character is visited at most twice
Space Complexity: O(1) – fixed-size hash/vector for characters

Key Insight:
This demonstrates string handling, sliding window, and optimized linear scanning, highly valued in algorithmic interviews.                          */



#include<iostream>
#include<string>
#include<vector>

int main()
{
    std::string str ;
    std::vector<int> freq(256,0) ;

    std::cout << "Enter the string : " ;
    std::getline(std::cin,str) ;

    int p2 = 0 , max_length = 0 , current_length = 0 ;

    for ( int p1 = 0 ;  p1<str.length() ; p1++ )
    {
        freq[str[p1]]++ ;

        while ( freq[str[p1]] > 1 )
        {

           freq[str[p2]]-- ;
           p2++ ;

        }

        current_length = (p1-p2)+1 ;

	if ( current_length > max_length )
        {
           max_length = current_length ;
        }

    }

    std::cout << max_length << std::endl ;

    return 0 ;
}















