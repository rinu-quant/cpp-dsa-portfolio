#include<iostream>
#include<queue>

int main()
{
    std::pair<int,int> p ;
    int n , distance , k ;

    std::priority_queue<std::pair<int,std::pair<int,int>>> points ;

    std::cout<<"Enter the number of points : " ;
    std::cin>> n ;

    std::cout<<"Enter the value of k : " ;
    std::cin>> k ;

    std::cout<<"Enter the points :\n" ;
    for ( int i{} ; i<n ; ++i )
    {
        std::cin >> p.first >> p.second ;
        distance = (p.first*p.first) + (p.second*p.second) ;
        points.push({distance , p} ) ;
        if ( points.size() > k )
        {
            points.pop() ;
        }
    }

    std::cout<<std::endl ;

    for ( int i{} ; i<=points.size() ; ++i )
    {
	std::cout <<"("<< points.top().second.first << "," << points.top().second.second << ")" <<" ";
        points.pop() ;
    }

    std::cout<<"\n" ;

    return 0 ;
}
