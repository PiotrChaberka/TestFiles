#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

void petlafor()
{
    int a; int b;
    cin >> a;

    for(int i = 0; i <= a; i++) // ++i, i++ = i = i + 1
    {

        if(i == 5)
        {
            continue;
        }
        else if(i > 30)
        {
            break;
        }

        cout << i << endl;
    };



}

void pentlawhile()
{
    int x; cin >> x;


    while (x <= 15) // while( 1 + 1 == 2) !true while(1+1==3)
    {
        cout << x << "\n";
        x++;
    }
}

bool resztazdzielenia()
    {
        int xz = 0;
        cin >> xz;
        if(xz %2 == 0)
        {
         return(xz);
        }
    }


int main() {



// petlafor();

//pentlawhile();
resztazdzielenia();




}

//    || OR      && AND     ! NOT


// Chcesz aby program wypisał liczby od 1 do 10
// for ( xxx ) { cout << i; }
// int i = 1;   i <= 10;  i++;

/*

if (warunek)
{
Wykonaj to co jest w klamerkach
}
else
{
Wykonaj coś inengo
}

cin >> a;
caut << a;
cout >> a;
printf(a


*/

/* komentarz */



