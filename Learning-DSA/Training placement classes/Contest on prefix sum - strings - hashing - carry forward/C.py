def prefix_sum(arr):
    prefix = [0] * len(arr)
    prefix[0] = arr[0]
    for i in range(1, len(arr)):
        prefix[i] = prefix[i-1] + arr[i]
    return prefix

def query_sum(prefix, i, j):
    if i == 0:
        return prefix[j]
    else:
        return prefix[j] - prefix[i-1]

# Input
N = int(input())
numbers = list(map(int, input().split()))
Q = int(input())

# Calculate prefix sum array
prefix_sum_array = prefix_sum(numbers)

# Process queries
for _ in range(Q):
    i, j = map(int, input().split())
    print(query_sum(prefix_sum_array, i, j))
