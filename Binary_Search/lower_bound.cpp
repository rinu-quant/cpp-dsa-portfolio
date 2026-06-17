#include<iostream>
#include<vector>

int main()
{
    int n , target , tmp ;

    std::cout << "Enter the number of elements : " ;
    std::cin >> n ;

    std::cout << "Enter the target element : " ;
    std::cin >> target ;

    int left = 0 , right = n-1 ;

    std::vector<int> nums ;
    nums.reserve(n) ;

    std::cout << "Enter the elements : \n" ;
    for ( int i{} ; i<n ; ++i )
    {
	std::cin >> tmp ;
        nums.push_back(tmp) ;
    }

    while (left <= right )
    {
        int mid = left + ( right - left )/2 ;

	if ( nums[mid] >= target )
        {
	    right = mid - 1 ;
        }
        else
        {
	    left = mid + 1 ;
        }
    }

    if ( nums[left] >= target )
    {
       std::cout << std::endl << left << std::endl ;
    }
    else
    {
       std::cout << std::endl << n << std::endl ;
    }

    return 0 ;
}
