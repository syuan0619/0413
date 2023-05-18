#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 5

template <class Type>
class BubbleSort
{

private:
    Type *data;

public:
    void inputdata();
    void show();
    void ascending();
    void descending();
};
template <class Type>
void BubbleSort<Type>::inputdata()
{
    data = new Type[SIZE];
    cout << "Enter 5 data: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << setw(2) << (i + 1) << ": ";
        cin >> data[i];
    }
}
template <class Type>
void BubbleSort<Type>::ascending()
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                Type temp;
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
template <class Type>
void BubbleSort<Type>::descending()
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (data[j] < data[j + 1])
            {
                Type temp;
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
template <class Type>
void BubbleSort<Type>::show()
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(15) << data[i] << endl;
    }
}
int main()
{

    // type=int
    BubbleSort<int> obj1; // 型態確定
    obj1.inputdata();
    char choice;

    cout << endl;

    cout << "a: ascending sort" << endl;
    cout << "b: descending sort" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    cout << "\n Original data: " << endl;
    obj1.show();
    if (choice == 'a')
    {
        obj1.ascending();
    }
    else
    {
        obj1.descending();
    }
    cout << "After sorting data: " << endl;
    obj1.show();
    return 0;

    // type=double
    BubbleSort<double> obj2; // 型態確定
    obj2.inputdata();

    cout << endl;

    cout << "a: ascending sort" << endl;
    cout << "b: descending sort" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    cout << "\n Original data: " << endl;
    obj2.show();
    if (choice == 'a')
    {
        obj2.ascending();
    }
    else
    {
        obj2.descending();
    }
    cout << "After sorting data: " << endl;
    obj2.show();
    cout<< endl;
    return 0;


    // type=string
    cout << endl;
    BubbleSort<string> obj3; // 型態確定
    obj3.inputdata();

    cout << endl;

    cout << "a: ascending sort" << endl;
    cout << "b: descending sort" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    cout << "\n Original data: " << endl;
    obj3.show();
    if (choice == 'a')
    {
        obj3.ascending();
    }
    else
    {
        obj3.descending();
    }
    cout << "After sorting data: " << endl;
    obj3.show();
    return 0;
}