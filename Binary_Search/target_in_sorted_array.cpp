#include<iostream>
#include<vector>

int main()
{
    int target , n , tmp ;

    std::cout<<"Enter the number of elements : " ;
    std::cin >> n ;

    std::cout <<"Enter the target value : " ;
    std::cin >> target ;

    std::vector<int> nums ;
    nums.reserve(n) ;

    std::cout<<"Enter the elements : \n" ;
    for ( int i{} ; i<n ; ++i )
    {
        std::cin>> tmp ;
        nums.push_back(tmp) ;
    }

    int left=0 , right = n-1 ;

    while ( left <= right )
    {
        int mid = left + ( right - left) / 2 ;

        if ( nums[mid] == target )
        {
            std::cout << std::endl << mid << std::endl ;
            return 0 ;
        }
        else if ( nums[mid] > target )
        {
	     right = mid - 1 ;
        }
        else
        {
	     left = mid + 1 ;
        }
    }

    std::cout << std::endl << left <<  std::endl ;

    return 0 ;
}
