#include<iostream>
#include<unordered_map>
#include<vector>
#include<cmath>

int main()
{
    int n , tmp , k , rem , sum= 0 ;

    std::cout<< "Enter the number of elements : " ;
    std::cin>> n ;

    std::cout<< "Enter the value of k : " ;
    std::cin>> k ;
    k = std::abs(k) ;

    std::vector<int> v ;
    v.reserve(n) ;

    std::unordered_map<int,int> s ;
    s.reserve(n) ;

    s[0] = -1 ;

    std::cout<< "Enter the elements of the array : \n" ;
    for ( int i{} ; i<n ; ++i )
    {
        std::cin >> tmp ;
        v.push_back(tmp) ;
    }

    if ( k == 0 )
    {
       for ( int i{0} ; i<n ; ++i )
       {
           sum += v[i] ;
           auto it = s.find(sum) ;

           if ( (it != s.end() ) && ( (i - it->second) >= 2 ) )
           {
              std::cout << "\ntrue\n" ;
              return 0 ;
           }
           else if ( it == s.end() )
           {
              s[sum] = i ;
           }
       }
    }
    else
    {
       for ( int i{0} ; i<n ; ++i )
       {
           sum += v[i] ;
           rem = sum%k ;
           rem = (rem+k) % k ;
           auto it = s.find(rem) ;

           if ( ( it != s.end() ) && ( (i - it->second) >= 2 ) )
           {
              std::cout << "\ntrue\n" ;
              return 0 ;
           }
           else if ( it == s.end() )
           {
	      s[rem] = i ;
           }

       }
    }

    std::cout << "\nfalse\n" ;

    return 0 ;
}


