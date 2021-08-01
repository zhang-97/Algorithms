#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include"bubble_sort.h"
#include"selection_sort.h"
#include"insertion_sort.h"
#include"shell_sort.h"
using namespace std;

// 随机生成一个随机长度的待排序数列
vector<int> generate_random_vector()
{
    srand(time(NULL));

    //限定随机长度最长为100
    int len = rand()%100;
    vector<int> vec(len);
    for(int i=0;i<len;++i)
    {
        vec[i] = rand();
    }
    return vec;
}

int main()
{
    // rand()返回一个0到RAND_MAX间的随机整数 
    // RAND_MAX = 2147483647
    vector<int> un_sort;
    vector<int> standard_sort;
    vector<int> check_sort;
    // 进行1000轮对比测试
    for(int i=0;i<100;++i)
    {
        un_sort = generate_random_vector();
        standard_sort = un_sort;
        check_sort = un_sort;
        sort(standard_sort.begin(),standard_sort.end());
        shell_sort(check_sort);
        if(standard_sort!=check_sort)
        {
            cout<<"测试排序算法出现错误"<<endl;
            break;
        }
        if(i==99) cout<<"测试排序算法正确"<<endl;
    }
    return 0;
}