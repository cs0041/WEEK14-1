#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void countsoul(char* M, char* L, char* U, char* D,char *R ,int *s)
{
   
    if (*M == '2' && *U == '1' && *L  == '1' && *D == '1' && *R == '1')
    {

        *s = *s + 1 ;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    char c[1000][1000];
    int soul = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < b; k++)
        {
            countsoul(&c[i][k], &c[i - 1][k], &c[i][k - 1], &c[i][k + 1], &c[i + 1][k], &soul);
        }
    }
    cout << "soul : " << soul << endl;
    return 0;
}
