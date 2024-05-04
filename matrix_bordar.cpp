#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    cout << "lotfan matrix 3*3 khod ra vared konid : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int vector[3];
    cout << "lotfan ye bordar 3 taie ra vared konid : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> vector[i];
    }

    int result[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i] += matrix[i][j] * vector[j];
        }
    }

    // چاپ نتیجه
    cout << "hasel zarb matrix dar bordar barabar ast ba : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}