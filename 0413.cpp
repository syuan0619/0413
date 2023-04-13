#include <iostream>
using namespace std;
// void sum();
// int main()
// {
//     sum();
//     return 0;
// }
// void sum()
// {
//     int total = 0;
//     for (int i = 0; i <= 100; i++)
//     {
//         total += i;
//     }
//     cout << "total = " << total << endl;
// }
void sum(int);
int main()
{

    sum(100);
}
void sum(int end)
{
    int total = 0;
    for (int i = 0; i <= end; i++)
    {
        total += i;
    }
    cout << "total = " << total << endl;
}
