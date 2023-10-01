#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int max = 7,
        min = 1;
    srand(time(0));
    cout<<rand()%(max - min) + min;
    getch();
    return 1;
}