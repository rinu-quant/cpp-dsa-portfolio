#include<iostream>
#include<string>
#include<vector>

int main()
{
    std::string str ;
    std::vector<int> freq(256,0) ;
    int k , p1 = 0 , max_freq = 0 , max_len = 1 ;

    std::cout << "Enter the string :" ;
    std::getline(std::cin,str) ;
    std::cout << "The number of replacements : " ;
    std:: cin >> k ;

    for ( int p2 = 0 ; p2 < str.length() ; ++p2 )
    {
      ++freq[str[p2]] ;
      max_freq = std::max(max_freq,freq[str[p2]]) ;

      if ( (p2-p1+1) - max_freq > k )
      {
	 --freq[str[p1]] ;
         ++p1 ;
      }

      if ( (p2-p1+1) - max_freq <= k )
      {
	 max_len = std::max( max_len , (p2-p1+1) ) ;
      }

    }

    std::cout << max_len << std::endl ;

    return 0 ;
}




















