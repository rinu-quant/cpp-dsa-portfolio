#include<iostream>
#include<vector>

int main()
{
    int n , tmp , target ;

    std::cout<<"Enter the number of elememts of the array : " ;
    std::cin >> n ;

    std::cout<<"Enter the value you want to find : " ;
    std::cin >> target ;

    std::vector<int> nums ;
    nums.reserve(n) ;

    int left = 0 , right = n-1 ;

    std::cout<< "Enter the elements : \n" ;
    for ( int i{} ; i<n ; ++i )
    {
	std::cin >> tmp ;
        nums.push_back(tmp) ;
    }

    while ( left <= right )
    {
        int mid = left + ( ( right - left ) / 2 ) ;

	if ( nums[mid] == target )
        {
	   std::cout << mid <<std::endl ;
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

    std::cout << std:: endl << "-1" << std::endl ;

    return 0 ;

}
