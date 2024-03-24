#include<iostream>
using namespace std;

void MaxMin( int i , int j, int& max ,int& min , int a[])
{
    if (i == j)
    {
        max = min = a[i];
    }
    else if( i == j-1)
    {
        if(a[i] < a[j])
        {
            max = a[j];
            min = a[i];
        }
        else
        {
            max = a[i];
            min =a[j]; 
        }
        
    }
    else
    {
        int mid = (i+j)/2;
        int max1 , min1;
        MaxMin(i, mid , max , min , a);
        MaxMin(mid+1, j , max1, min1 , a);

        if ( max < max1 )
        {
            max = max1;
        }
        if ( min > min1 )
        {
            min = min1;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array :"<< endl;
    cin>> n;

    int a[n];
    cout << "Enter the elements of array :" ;
    for(int i =0 ;  i<n ; i++)
    {
        cin >> a[i];
    }

    int max , min ;

    MaxMin(0 , n-1 , max ,min , a);

    cout << "Maximum number :" << max << endl;
    cout << "Minimum number :" << min << endl;

    return 0;
}