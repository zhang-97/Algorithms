/*
1. 选择排序概述  从0开始遍历找到最小值位置，最后与0位置交换，随后依次从1位置开始
2. 时间复杂度  n*(n-1)*(n-2) -> O(n^2)
3. 其他特性  in-place 不稳定排序 (不稳定排序： 两个相同的值排序后顺位发生变化)
   eg. 8 8 3 横跨的情况下 第一个8与3 交换位置破坏了稳定性
*/
#include<vector>
void selection_sort(std::vector<int> &vec)
{
    int min_pos;  // 记录该轮中的最小值的位置
    int min_val;  // 记录每一轮最小值
    for(int i=0;i<vec.size()-1;++i)  // 确定到倒数第二位即可 末位自动满足
    {
        min_pos = i;
        min_val = vec[i];
        for(int j=i+1;j<vec.size();++j)
        {
            if(vec[j]<min_val)
            {
                // 更新信息
                min_pos = j;
                min_val = vec[j];
            }
        }
        std::swap(vec[i],vec[min_pos]);
    }
}