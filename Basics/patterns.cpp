#include <iostream>

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
}