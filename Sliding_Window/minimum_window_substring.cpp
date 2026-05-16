
/*
Problem:
Given two strings str1 and str2, find the length of the smallest substring in str1
that contains all characters of str2 (including frequency of characters).

Approach:
Use sliding window with two pointers.
Maintain two frequency arrays for str1 and str2.
Expand window with p2, and once all characters match, shrink from p1.
Track the minimum valid window length.

Time Complexity: O(n)
Space Complexity: O(1)

Key Insight:
Classic sliding window + frequency matching for minimum substring problems.
*/




#include<iostream>
#include<string>
#include<vector>

int main()
{
    std::string str1 , str2 ;
    std::vector<int> freq1(256,0) , freq2(256,0) ;

    std::cout << "Enter the 1st string : ";
    std::getline(std::cin,str1) ;
    std::cout << "Enter the 2nd string : ";
    std::getline(std::cin,str2) ;

    int p1=0 , current_length = str1.length()+1 , min_length = str1.length()+1 , count1 = 0 , count2 = 0 ;

    if ( str1.length() < str2.length() )
    {
        std::cout << std::endl ;
        return 1 ;
    }

    for ( int i{} ; i<str2.length() ; ++i )
    {
        if ( freq2[str2[i]] == 0 )
        {
            ++count2 ;
        }
        ++freq2[str2[i]] ;
    }

    for ( int p2{} ; p2<str1.length() ; ++p2 )
    {
        ++freq1[str1[p2]] ;

        if ( freq2[str1[p2]] == freq1[str1[p2]] )
        {
            ++count1 ;
        }

        if (count1 == count2 )
        {
            while ( freq1[str1[p1]] > freq2[str1[p1]] )
            {
                --freq1[str1[p1]] ;
                ++p1 ;
            }

            current_length = p2 - p1 +1 ;

            if ( current_length < min_length )
            {
                min_length = current_length ;
            }
        }
    }

    if ( min_length > str1.length() )
    {
        std::cout << std::endl ;
    }
    else
    {
        std::cout << min_length << std::endl ;
    }

    return 0 ;
}

































