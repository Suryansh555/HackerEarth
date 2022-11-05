#include <iostream>
#include <vector>
int main()
{     
int T{};     
std::cin>>T;    
 std::string str{};   
  std::cin>>str;     
std::vector<int> v{};   
  for(int i{1};i<=T;++i)   
  {       
v.push_back(i);    
 }     
int songindex=0;    
 int pindex=0;     
while(true)    
 {         
if(pindex==v.size())  
        pindex=0;   
       if(songindex==str.size())      
    songindex=0;         
if(v.size()==1)     
     {          
  std::cout<<v[0];
             break;       
   }       
if(str[songindex]=='a')    
      {           
pindex++;         
}         
else        
  {           
v.erase(v.begin()+pindex);        
  }         
songindex++;   
  }
}