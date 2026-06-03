#include<iostream>
#include<stack>
#include<vector>

int main()
{
    int x , tmp ;

    std::cout<<"Enter the number of elements of the array: " ;
    std::cin>> x ;

    std::stack<int> temp ;

    std::vector<int> temperatures ;
    std::vector<int> days (x,0);
    temperatures.reserve(x) ;

    std::cout<<"Enter the elements.\n" ;
    for ( int i{} ; i < x ; ++i )
    {
        std::cin>>tmp ;
        temperatures.push_back(tmp) ;
    }

    temp.push(0) ;
    std::cout<<"\n" ;

    for ( int i{1} ; i < x ; ++i )
    {
        while ( !temp.empty() && ( temperatures[i] > temperatures[temp.top()] ) )
        {
	    days[temp.top()] = i - temp.top() ;
            temp.pop() ;
        }

        temp.push(i) ;
    }

    for ( int j{} ; j<x ; ++j )
    {
	std::cout<<days[j] << " " ;
    }

    std::cout<<"\n" ;

    return 0 ;
}








