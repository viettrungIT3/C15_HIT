#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    int count = 0;
    while ( n > 0 &&  m > 0 )
    {
    	int count2 = 0;
        if ( m > n )
        {
            count2 = m / n;
            count += count2;
            cout<<"Co "<<count2<<" hinh vuong co canh bang "<<n<<endl;
            m -= count2 * n;
        }
        else if ( n > m )
        {
            count2 = n / m;
            count += count2;
            cout<<"Co "<<count2<<" hinh vuong co canh bang "<<m<<endl;
            n -= count2*m;
        }
        else {
        	count2 = n / m;
            count += count2;
            cout<<"Co "<<count2<<" hinh vuong co canh bang "<<m<<endl;
        	n -= n;
			m -= m;	
		}
//        cout<<"\t"<<m<<" "<<n;
//        count++;
    }
    cout<<"\n"<<count<<endl;
    
    return 0;
}
