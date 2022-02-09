#include <iostream>
int main()
{
   int w;
   std::cin>>w;  
   if(w%2==0 & w!=2) 
   {
       std::cout<<"YES\n";
   }
   else
   {
       std::cout<<"NO\n";
   }
}
/* The premise is: Any integer betwween 1 and 100 is either odd or even. 
Odd number only divides into one odd and one even number. So not fitting. 
Even number has 2 scenario. it can divides into two even numbers or two odd numbers.
Therefore, only if w is an even number, can there be possibility that 
the watermelon would divide into two parts of even numbers. 
(except 2 which gives two odd numbers which are 1's.)
Hence, when this question writes:
"each of the two parts weighs even number of kilos" actually means
"each of the two parts can or could ( not must ) weigh even number of kilos"
*/