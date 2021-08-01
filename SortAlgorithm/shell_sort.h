/*
1. 希尔排序概述  插入排序的改进版 增量分组排序，不断缩小增量分组 最后增量为1进行一次插入排序
2. 时间复杂度  n*(n-1)*(n-2) -> O(n^2)
3. 其他特性  in-place 不稳定排序 (不稳定排序： 两个相同的值排序后顺位发生变化)
   eg. 8 8 3 横跨的情况下 第一个8与3 交换位置破坏了稳定性
*/
#include<vector>
void shell_sort(std::vector<int> &vec)
{
    // 希尔排序 增量gap从len/2逐渐减半至1
    for(int gap=vec.size()/2;gap>0;gap/=2)
    {
        for(int i=gap;i<vec.size();++i)
        {
            int min_pos = i;
            while(min_pos-gap>=0 && vec[min_pos-gap]>vec[min_pos])
            {
                // 下三行为不额外使用空间的交换方法
                // vec[min_pos-gap] = vec[min_pos-gap] + vec[min_pos];
                // vec[min_pos] = vec[min_pos-gap] - vec[min_pos];
                // vec[min_pos-gap] = vec[min_pos-gap] - vec[min_pos];
                std::swap(vec[min_pos-gap],vec[min_pos]);
                min_pos-=gap;
            }


        }

    }
}