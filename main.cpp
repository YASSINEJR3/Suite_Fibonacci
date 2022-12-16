#include <iostream>

using namespace std;


///Storing intermediate results (Dynamic programming solution)
int Fibonacci_dynamic(int n)
{
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2 ; i <= n ;i++)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}

///Recursion Solution
int Fibonacci_recur(int n)
{
    if(n<=1)
        return n;
    return Fibonacci_recur(n-1)+Fibonacci_recur(n-2);
}

int main()
{
    ///complexité linéaire O(n)
    cout << Fibonacci_dynamic(70) <<endl;

    ///complexité expenentielle O(2^n)
    cout << Fibonacci_recur(70) <<endl;

    return 0;
}
