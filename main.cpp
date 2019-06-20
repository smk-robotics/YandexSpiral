#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int N = 4; // Размер матрицы

vector<vector<int>> m(N, vector<int>(N));

int main()
{
    int index = 1;

    /// Заполнение матрицы
    for (int lap = 0; lap <= round(N/2); lap++)
    {
        for (int i = lap; i < N - lap; i++)
        {
            m[lap][i] = index;
            index++;
        }

        for (int i = lap + 1; i < N - lap; i++)
        {
            m[i][N - 1 - lap] = index;
            index++;
        }

        for (int i = N - 2 - lap; i >= lap; i--)
        {
            m[N - 1 - lap][i] = index;
            index++;
        }

        for (int i = N - 2 - lap; i > lap; i--)
        {
            m[i][lap] = index;
            index++;
        }
    }

    /// Вывод матрицы
    cout << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
