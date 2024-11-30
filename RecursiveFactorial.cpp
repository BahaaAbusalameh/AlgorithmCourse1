#include<iostream>
#include<chrono>
using namespace std;
long long recfactorial(long long n)
{
 if(n==0||n==1)
 return 1;
 else
 return n*recfactorial(n-1);
}
int main()
{
    long long n;
    cin>>n;
    auto start = chrono::high_resolution_clock::now();
    cout<<recfactorial(n)<<endl;
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast< chrono::microseconds>(end - start);
   cout<<"time execution : "<<duration.count()<<endl;
        
    return 0;
}
