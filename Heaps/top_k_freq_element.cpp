#include<iostream>
#include<unordered_map>
#include<queue>

int main()
{
    int k , x , tmp ;

    std::cout<<"Enter the number of elemmts of the array: ";
    std::cin>>x ;

    std::cout<<"Enter the value of k :" ;
    std::cin>>k ;

    std::unordered_map<int,int> map ;
    map.reserve(x) ;

    std::priority_queue<std::pair<int,int>> nums ;

    std::cout<<"Enter the elememts of the array:\n" ;
    for (int i{} ; i<x ; ++i )
    {
	std::cin>>tmp ;
        map[tmp]++ ;
    }

    for (const auto& val : map )
    {
	nums.push({val.second,val.first}) ;
    }

    std::cout<<"\n" ;

    for (int i{} ; i<k ; ++i )
    {
        std::cout<<nums.top().second<<" " ;
        nums.pop() ;
    }

    std::cout<<"\n" ;
    return 0;

}

