#include <bits/stdc++.h>

using namespace std;

void TOH(int d, char t1, char t2, char t3)
{
    if (d == 1)
    {
        cout << "\nShift top disk from tower " << t1 << " to tower " << t2;
        return;
    }

    TOH(d - 1, t1, t3, t2);
    cout << "\nShift top disk from tower " << t1 << " to tower " << t2;

    TOH(d - 1, t3, t2, t1);
}

int main()
{
    int d;
    cout << "Enter no. of disks: ";
    cin >> d;

    if (d < 1)
        cout << "There are no disks to shift.";
    else
        TOH(d, '1', '2', '3');
    cout << "\n\n" << d << " disks have been shifted in " << pow(2, d) - 1 << " moves.\n";

    return 0;
}
