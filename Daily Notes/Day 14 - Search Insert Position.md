# 35. Search Insert Position

#### 每天摸鱼一段代码，今天是 **2022年12月7日**，第14天

#### 详情：wuff.garafox.com 

## 问题

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

## 代码

```c
int searchInsert(int* nums, int numsSize, int target){
    if(target < nums[0]){
        return 0;
    }

    if(target > nums[numsSize - 1]){
        return numsSize;
    }

    for(int i = 0; i < numsSize; i++){
        if(nums[i] == target){
            return i;
        }
    }

    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] < target && nums[i + 1] > target){
            return i + 1;
        }
    }

    return -1;
}
```

## 运行

| Runtime           | Memory             |
| ----------------- | ------------------ |
| 6 ms, beats 70.9% | 6 MB, beats 78.97% |

## 总结

