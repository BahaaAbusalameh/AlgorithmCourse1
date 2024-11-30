#include<iostream>
#include<chrono>
using namespace std;
long long factorial(long long n)
{
    long long fact =1;
    for (long long i=1 ; i<=n;i++)
    fact*=i;
    
    return fact;
}
int main()
{
    long long n;
    cin>>n;
    auto start = std::chrono::high_resolution_clock::now();
    cout<<factorial(n)<<endl;
    auto end =std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
   cout<<"time execution : "<<duration.count()<<endl;
    
    return 0;
}
