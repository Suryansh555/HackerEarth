#include <iostream>
#include <algorithm>
int main()
{    
 std::string str{};     
std::cin>>str;    
 std::string mystring="0abcdefghijklmnopqrstuvwxyz";   
  long long int sum = 0;     
for(int i{0};i<str.size();++i)     
{   
   std::string::iterator it = std::find(mystring.begin(),mystring.end(),str[i]);   
   sum += it-mystring.begin();    
 }     
std::cout<<sum;
}