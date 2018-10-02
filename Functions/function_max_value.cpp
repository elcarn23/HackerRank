#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    // Set our initial max value
    int max_value = 0;
    // Set up our array to iterate for checking max value
    int values[4] = {a, b, c, d};

    // Simple loop and sort to push the largest number to the max value spot.
    for (int i = 0; i < 4; i++)
    {
        if (values[i] > max_value){
            max_value = values[i];
        }
    }
    
    // Return our max value.
    return max_value;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
