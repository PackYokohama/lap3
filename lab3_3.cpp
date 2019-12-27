#include <iostream>
using namespace std;
int main()
{
float N = 2;
float x = 0;
 
 while (N <= 19){
 	x = x+(1/(4+N));
    N = N+1;

 }  
 cout << x; 
 return 0;
}
