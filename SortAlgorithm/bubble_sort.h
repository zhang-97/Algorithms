/*
1. 冒泡排序概述  两两依次比较，将较大值不断向尾部移动，第i轮遍历确定第i大的值，遍历范围从尾部向前缩减
2. 时间复杂度  n*(n-1)*(n-2) -> O(n^2)
3. 其他特性  in-place 稳定排序
*/
#include<vector>

void bubble_sort(std::vector<int> &vec)
{
    for(int i=0;i<vec.size()-1;++i)
    {
        for(int j=0;j<vec.size()-i-1;++j)
        {
            if(vec[j]>vec[j+1]) std::swap(vec[j],vec[j+1]);
        }
    }
}