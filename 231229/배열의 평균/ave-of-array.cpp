#include <iostream>
using namespace std;

int main()
{
    double array[2][4] = {0};
    double row_mean_array[2] = {0};
    double colm_mean_array[4] = {0};
    double all_mean = 0;
    //소수점 자리 지정해주기
    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    //값 불러오기
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int temp;
            cin >> temp;
            array[i][j] = temp;
        }
    }

    //행 평균
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
        for (int j = 0; j < (sizeof(array[0]) / sizeof(array[0][0])); j++)
        {
            row_mean_array[i] += array[i][j];
        }
    }
    for (int i = 0; i < sizeof(row_mean_array) / sizeof(row_mean_array[0]); i++)
    {
        row_mean_array[i] = row_mean_array[i] / (sizeof(array[0]) / sizeof(array[0][0]));
    }


    //열 평균
    for (int i = 0; i < (sizeof(array[0]) / sizeof(array[0][0])); i++)
    {
        for (int j = 0; j < (sizeof(array) / sizeof(array[0])); j++)
        {
            colm_mean_array[i] += array[j][i];
        }
    }
    for (int i = 0; i < sizeof(colm_mean_array) / sizeof(colm_mean_array[0]); i++)
    {
        colm_mean_array[i] = colm_mean_array[i] / (sizeof(array) / sizeof(array[0]));
    }

    //전체 평균
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
        for (int j = 0; j < (sizeof(array[0]) / sizeof(array[0][0])); j++)
        {
            all_mean += array[i][j];
        }
    }
    all_mean = all_mean / (sizeof(array) / sizeof(array[0][0]));

    cout << row_mean_array[0] << " " << row_mean_array[1] << endl;
    cout << colm_mean_array[0] << " " << colm_mean_array[1] << " " << colm_mean_array[2] << " " << colm_mean_array[3] << endl;
    cout << all_mean << endl;

    return 0;
}