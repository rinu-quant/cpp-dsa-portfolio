/*

Problem: Check if two strings are anagrams of each other.

Approach:
Maintain a frequency vector of size 26 (for lowercase letters).
Increment counts for first string, decrement for second.
If all counts are zero → strings are anagrams.

Time Complexity: O(n) – single pass through strings
Space Complexity: O(1) – fixed size frequency vector

Key Insight:
Using a fixed-size array is faster than a hash map for small character sets.               */






#include<iostream>
#include<string>
#include<vector>
#include<cctype>

int main()
{
    std::string s1 , s2 ;
    std::vector<int> freq(26,0)  ;
    int count=0 ;

    std::cout << "Enter the 2 words:\n" ;
    std::getline(std::cin,s1) ;
    std::getline(std::cin,s2) ;

    std::cout<<std::endl ;

    if ( s1.length() == s2.length() )
    {
       for ( int i = 0 ; i<s1.length() ; i++ )
       {
          if ( s1[i] >= 'A' && s1[i] <= 'Z' )
          {
             freq[s1[i]-'A']++ ;
          }
          else
          {
	     freq[s1[i]-'a']++ ;
          }

          if ( s2[i] >= 'A' && s2[i] <= 'Z' )
          {
	     freq[s2[i]-'A']-- ;
          }
          else
          {
	     freq[s2[i]-'a']-- ;
          }

       }
    }
    else
    {
       std::cout << "False" << std::endl ;
      return 0 ;
    }

    for ( int i{} ; i<26 ; ++i )
    {
         if ( freq[i] != 0 )
         {
            std::cout << "False" << std::endl ;
            return 0 ;
         }
         else
         {
            count++ ;
         }
    }

    if ( count == 26)
    {
       std::cout << "True" << std::endl ;
    }

    return 0 ;
}
