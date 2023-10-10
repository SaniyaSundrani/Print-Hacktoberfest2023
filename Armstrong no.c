// C++ program to find all Armstrong numbers
// in a given range
#include <bits/stdc++.h>
using namespace std;
 
void isArmstrong(int left, int right)
{
    for (int i = left; i <= right; i++) {
        int sum = 0;
        int temp = i;
        while (temp > 0) {
            // Finding the lastdigit
            int lastdigit = temp % 10;
 
            // Finding the sum
            sum += pow(lastdigit, 3);
            temp /= 10;
        }
 
        // Condition to print the number if
        // it is armstrong number
        if (sum == i) {
            cout << i << " ";
        }
    }
    cout << endl;
}
 
// Driver code
int main()
{
    int left = 5, right = 1000;
    isArmstrong(left, right);
    return 0;
}
