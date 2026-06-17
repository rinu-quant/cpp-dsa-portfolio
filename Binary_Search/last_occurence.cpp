#include<iostream>
#include<vector>

int main()
{
    int n , tmp , target ;

    std::cout<<"Enter the number of elements : " ;
    std::cin>> n ;

    std::cout<<"Enter the target element : " ;
    std::cin>> target ;

    int left = 0 , right = n-1 ;

    std::vector<int> nums ;
    nums.reserve(n) ;

    std::cout<<"Enter the elements : \n" ;
    for ( int i{} ; i<n ; ++i )
    {
        std::cin>> tmp ;
        nums.push_back(tmp) ;
    }

    while ( left <= right )
    {

	int mid = left + ( right - left )/2 ;

	if ( nums[mid] <= target )
        {
	   left = mid + 1 ;
        }
        else
        {
	   right = right - 1 ;
        }
    }

    if ( nums[left-1] == target )
    {
       std::cout<< std::endl << left - 1 << std::endl ;
    }
    else
    {
       std::cout<< std::endl << "target not found!" << std::endl ;
    }

    return 0 ;
}

