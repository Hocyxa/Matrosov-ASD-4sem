#include <iostream>
#include "Map_Tree.h"
#include <chrono>


int main()
{
    Map_Tree m;
    int a[10];
    for (int j = 0; j < 10; ++j) {
        auto begin = std::chrono::steady_clock::now();
        for (int i = 0; i < 200000; ++i) {
            m.insert(j * 200000 + i, "-");
        }
        auto end = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
        a[j] = duration.count();
        std::cout << duration.count() << std::endl;
    }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    int t = sum / 10;
    std::cout << t << std::endl;
    return 0;
}

//Среднее значения
// 10к - 699 
// 50k - 3882
// 100к - 7436
// 150k - 13117
// 200k - 17231