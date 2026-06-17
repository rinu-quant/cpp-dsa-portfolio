#include<iostream>
#include<vector>

int main()
{
    int n , tmp , target ;

    std::cout<<"Enter the number of elements : " ;
    std::cin>> n ;

    std::cout << "Enter the target value : " ;
    std::cin >> target ;

    std::vector<int> nums ;
    nums.reserve(n) ;

    int left=0 , right=n-1 ;

    std::cout<<"Enter the Elements : \n" ;
    for ( int i{} ; i<n ; ++i )
    {
	std::cin >> tmp ;
        nums.push_back(tmp) ;
    }

    while ( left <= right )
    {
       int mid = left + ( right - left ) / 2 ;

       if ( nums[mid] >= target )
       {
	  right = mid - 1 ;
       }
       else
       {
          left = mid + 1 ;
       }
    }

    if ( nums[right+1] == target )
    {
       std::cout<< std::endl << right+1 << std::endl ;
    }
    else
    {
       std::cout<< std::endl << "target not found!"<< std::endl ;
    }

    return 0;
}
