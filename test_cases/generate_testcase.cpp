#include<bits/stdc++.h>
using namespace std;
long long int random(long long int n)
{
    return (rand()%n)+1;
}
long long int random1()
{
	return (rand() % 100000000)+1;
}
int main()
{
    long long int i;
    freopen("input_testcase2.txt","w",stdout); // stores the random testcase in "testcase.txt" file.
    srand(time(NULL));
    long long int a,b,n,k;
    a=random(300000);
    b=random(300000);
    n=max(a,b); // value of n
    k=min(a,b); // value of k
    vector<int> vect(n);
    generate(vect.begin(),vect.end(),random1); // generates the integer array of length n with random values.
    sort(vect.begin(),vect.end()); // sort the array in ascending order.
    cout<<n<<" "<<k<<endl;
    for (auto i = vect.begin(); i != vect.end(); ++i) 
        cout << *i << " "; 
    cout<<"\n";
    return 0;
}