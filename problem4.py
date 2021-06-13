def first_missing_positive(nums):
    s = set(nums)
    i = 1
    while i in s:
        i += 1
    return i