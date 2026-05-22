#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*
    *
    * *
    * * *
    * * * *
    */
    // for(int i=0; i<n; i++)
    // {
    //     for(int j = 0; j<n; j++)
    //     {
    //         if(j <= i)
    //             cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    /*
    1
    1 2
    1 2 3
    1 2 3 4
    */
//    for(int i=0; i<n; i++)
//     {
//         for(int j = 0; j<n; j++)
//         {
//             if(j <= i)
//                 cout << j + 1 << " ";
//         }
//         cout << endl;
//     }

    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */
    // for(int i=0; i<n; i++)
    // {
    //     for(int j = 0; j<n; j++)
    //     {
    //         if(j <= i)
    //             cout << i + 1 << " ";
    //     }
    //     cout << endl;
    // }

    /*
    * * * *
    * * *
    * *
    * 
    */
    // for(int i=0; i<n; i++)
    // {
    //     for(int j = 0; j<n; j++)
    //     {
    //         if(j >= i)
    //             cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    /*
    1 2 3 4
    1 2 3
    1 2
    1
    */
//    for(int i=0; i<n; i++)
//     {
//         for(int j = 0; j<n; j++)
//         {
//             if(j >= i)
//                 cout << j+ 1 << " ";
//         }
//         cout << endl;
//     }

    /*
        *
      * * *
    * * * * *
    */
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j< n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int j=0; j<(2*i) -1; j++)
    //     {
    //         cout << "*";
    //     }
    //     for(int j=0; j< n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    /*
    * * * * *
      * * *
        *
    */
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i;j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int j=0; j< 2*(n-i) -1; j++)
    //     {
    //         cout << "*";
    //     }
    //     for(int j=0; j<i;j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    /*
        *
      * * *
    * * * * *
    * * * * *
      * * *
        *
    */
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for(int j = 0; j < (2 * i) - 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for(int j = 0; j < 2 * (n - i) - 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    /*
    *
    * *
    * * *
    * * * *
    * * *
    * *
    * 
    */
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0; j<n;j++)
    //     {
    //         if(i >= j)
    //         {
    //             cout << "*" << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int i=0; i<n-1;i++)
    // {
    //     for(int j=0; j<n;j++)
    //     {
    //         if(i < j)
    //         {
    //             cout << "*" << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    */
    // bool flag = true;
    // for(int i=0; i<n; i++)
    // {
    //     if(i % 2 == 1)
    //     {
    //         for(int j=0; j<n; j++)
    //         {
    //             if(i >= j)
    //             {
    //                 if(flag == true)
    //                 {
    //                     cout << "0" << " ";
    //                     flag = false;
    //                 }
    //                 else
    //                 {
    //                     cout << "1" << " ";
    //                     flag = true;
    //                 }
    //             }
    //         }
    //     }
    //     else
    //     {
    //         for(int j=0; j<n; j++)
    //         {
    //             if(i >= j)
    //             {
    //                 if(flag == true)
    //                 {
    //                     cout << "1" << " ";
    //                     flag = false;
    //                 }
    //                 else
    //                 {
    //                     cout << "0" << " ";
    //                     flag = true;
    //                 }
    //             }
    //         }
    //     }
    //     flag = true;
    //     cout << endl;
    // }


    /*
    1             1
    1 2         2 1
    1 2 3     3 2 1
    1 2 3 4 4 3 2 1
    */

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout << j+1 << " ";   
    //     }
    //     for(int j=0; j<2*(n-i-1); j++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int j=i+1; j>0; j--)
    //     {
    //         cout << j << " ";   
    //     }
    //     cout << endl;
    // }

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */
   
    // int count = 1;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n;j++)
    //     {
    //         if(i >= j)
    //         {
    //             cout << count << " ";
    //             count++;
    //         }
    //     }
    //     cout << endl;
    // }

    /*
    E
    D E
    C D E
    B C D E
    A B C D E
    */

    // char alpha = 'A';

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         if(i >= j)
    //         {
    //             cout << (char)(alpha + n - i + j - 1) << " "; 
    //         }
    //     }
    //     cout << endl;
    // }

    /*
    * * * * * *
    * *     * *
    *         *
    *         *
    * *     * *
    * * * * * *
    */

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     for(int j=0; j<2*i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i=n-1; i>=0; i--)
    // {
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     for(int j=0; j<2*i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    /*
    *         *
    * *     * *
    * * * * * *
    * *     * *
    *         *
    */

    // for(int i=n-1; i>=0; i--)
    // {
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     for(int j=0; j<2*i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i=1; i<n; i++)
    // {
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     for(int j=0; j<2*i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int j=0; j<(n-i); j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    /*
    * * * *
    *     *
    *     *
    * * * *
    */

    // for(int i=0; i<n; i++)
    // {
    //     if(i ==0 || i== (n-1))
    //     {
    //         for(int j=0; j<n; j++)
    //         {
    //             cout << "*" << " ";
    //         }
    //     }
    //     else
    //     {
    //         for(int j=0; j<n; j++)
    //         {
    //             if(j == 0 || j == (n-1))
    //             {
    //                 cout << "*" << " ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //     }

    //     cout << endl;
    // }

    /*
    3 3 3 3 3
    3 2 2 2 3
    3 2 1 2 3
    3 2 2 2 3
    3 3 3 3 3
    */

    //Code not working
    // for(int i=0; i<(2*n)-1; i++)
    // {
    //     for(int k=n; k>0; k--)
    //     {
    //         if(i == 0 || i == (2*n)-2)
    //         {
    //             for(int j=0; j<(2*n)-1; j++)
    //             {
    //                 cout << k << " ";
    //             }
    //         }
    //         else
    //         {
    //             for(int j=0; j<2*n-1; j++)
    //             {
    //                 if(j == 0 || j == 2*(n-1))
    //                 {
    //                     cout << k << " ";
    //                 }
    //                 else{
    //                     cout << "  ";
    //                 }
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    //Working code

    //Distance

    int top, bottom, right, left;

    for(int i=0; i< 2*n-1; i++)
    {
        for(int j=0; j< 2*n-1; j++)
        {
            top = i;
            bottom = 2*(n-1) - i;
            left = j;
            right = 2*(n-1) - j;

            int min_dist = min(min(top,bottom), min(left, right));

            int value = n- min_dist;

            cout << value << " ";
        }
        cout << endl;
    }
}