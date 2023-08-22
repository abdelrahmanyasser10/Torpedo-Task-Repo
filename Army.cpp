#include "handle.h"

int main()
{
    Army General;
    General.Options();

    bool decision = 1;

    while (decision)
    {
        cout << "Would you like to see Options again?" << endl
             << "1.Yes" << endl
             << "0.No" << endl;
        cout << "Your Choice: ";
        cin >> decision;

        if (decision)
        {
            cout << endl
                 << endl;
            General.Options();
        }
        else
        {
            cout << endl
                 << endl
                 << "Thnaks For Using Our Program!" << endl;
            exit(1);
        }
    }

    return 0;
}