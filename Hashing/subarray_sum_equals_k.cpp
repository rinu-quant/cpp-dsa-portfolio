#include<iostream>
#include<vector>
#include<unordered_map>

int main()
{
    int k , n , tmp , count=0 , current_sum=0 ;

    std::cout<< "Enter the size of the array : " ;
    std::cin>>n ;

    std::vector<int> v ;
    v.reserve(n) ;

    std::unordered_map<int,int> sum ;
    sum.reserve(n) ;
    sum[0] = 1 ;

    std::cout<< "Enter the value k : " ;
    std::cin>>k ;

    std::cout<<"Enter the elememts of the array :\n" ;
    for ( int i{} ; i<n ; ++i )
    {
	std::cin>>tmp ;
        v.push_back(tmp) ;
    }

    for ( int i{} ; i<n ; ++i )
    {
	current_sum += v[i] ;

        if ( sum.find(current_sum - k) != sum.end() )
        {
	   count += sum[current_sum - k] ;
        }

        sum[current_sum]++ ;

    }

    std::cout<< "\n" << count << "\n" ;

    return 0 ;
}










