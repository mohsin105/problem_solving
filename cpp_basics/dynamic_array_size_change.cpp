#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[3];
    int *b=new int[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    delete[] a;
    a= new int[5];
    for(int i=0;i<3;i++)
    {
        a[i]=b[i];
    }

    return 0;
}


/*Algorithm:


    1. Declare a d-array
    2. Declare another d-array of same size.
    3. Copying the first array to the second.
    4. Deleting the first array.
    5. Creating a new d-array at the address of the first array with a new size.
    6. Copy the second array back to the first array.
    7. So the first array elements remain the same but with new size.
    8. Delete second d-array.

*/