#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop..." << endl;

    while (true)
    {
        // Define needed variables
        int sum = 0;
        int cnt = 0;
        char confirm;

        // Use do-while as long as the user wants to enter tempratures
        do
        {
            // Use temporary variable to store temperatures used in average and i
            int input;

            // Ask for tempereature and confirmation
            cout << "Enter a temprature from Sharjah: ";
            cin >> input;
            cnt++;
            sum += input;
            cout << "Enter another temprature ([Y]es/[N]o)? ";
            cin >> confirm;
        } while ((confirm == 'y') || (confirm == 'Y'));

        // Calculate and display average
        int average = sum / cnt;
        cout << "Based on your input, the average of temperatures in Sharjah is " << average << endl;
    }

    return 0;
}
