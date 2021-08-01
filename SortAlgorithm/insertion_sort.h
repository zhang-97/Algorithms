/*
1. 插入排序概述  第0个元素自然有序，在此基础上插入第1个位置的元素，依次向前比较进行交换。同理，前i个元素自然有序，i+1个元素插入交换即可
2. 时间复杂度  n*(n-1)*(n-2) -> O(n^2)
3. 其他特性  in-place 稳定排序 依次比较的过程中不会影响相对位置顺序
*/
#include<vector>
void insertion_sort(std::vector<int> &vec)
{
    int pos=0;
    // i=0 自然有序 可从i=1开始，到数组末vec.size()-1
    for(int i=1;i<vec.size();++i)
    {
        pos = i;  // 表明交换的起始位置
        while(pos>0)  // pos>0 即还有交换的可能
        {
            if(vec[pos]>=vec[pos-1]) break;  // 取=是为了保护其稳定性 否则相等的值也会交换
            else
            {
                std::swap(vec[pos],vec[pos-1]);
                --pos; // 该值的位置已经在pos-1
            }
        }
    }
}