'''given a set (or tuple, or list) of ints, for each element n, compute the sum of each subset up until element n'''

def subset_sums(nums):
    sums = []
    curr_sum = 0
    for n in nums:
        curr_sum += n
        sums.append(curr_sum)
    return sums
