#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

int main()
{
    int fleets{1} , target , n , position , speed ;
    double time , last_fleet_time ;

    std::vector<std::pair<int,int>> cars ;

    std::cout<< "Enter the target position : " ;
    std::cin >> target ;

    std::cout<< "Enter the number of cars : " ;
    std::cin >> n ;

    cars.reserve(n) ;

    std::cout<< "Enter the positions and speed of the cars :\n" ;
    for ( int i{} ; i<n ; ++i )
    {
        std::cin>> position >> speed ;

        cars.push_back({position,speed}) ;
    }

    std::sort( cars.begin() , cars.end() ) ;

    time = (double)( target - cars[n-1].first ) / cars[n-1].second ;
    last_fleet_time = time ;

    for ( int i{n-2} ; i>=0 ; --i )
    {
        time = (double)(target - cars[i].first) / cars[i].second ;

        if ( time > last_fleet_time )
        {
           ++fleets ;
           last_fleet_time = time ;
        }
    }

    std::cout << std::endl << fleets << std::endl ;

    return 0 ;
}













