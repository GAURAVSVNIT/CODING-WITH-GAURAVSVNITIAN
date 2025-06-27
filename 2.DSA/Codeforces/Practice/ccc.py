import bisect

def main():
    import sys
    input = sys.stdin.read().split()
    idx = 0
    t = int(input[idx])
    idx += 1
    for _ in range(t):
        n = int(input[idx])
        idx += 1
        a = list(map(int, input[idx:idx+n]))
        idx += n
        if n == 0:
            print(0)
            continue
        prefix_max = []
        global_max = 0
        for i in range(n):
            x = a[i] - 2
            # Find the largest j < i where a[j] <= x
            j_max = bisect.bisect_right(a, x, 0, i) - 1
            if j_max >= 0:
                current_dp = prefix_max[j_max] + 1
            else:
                current_dp = 0
            if current_dp > global_max:
                global_max = current_dp
            if i == 0:
                prefix_max.append(current_dp)
            else:
                prefix_max.append(max(prefix_max[i-1], current_dp))
        print(global_max + 1)

if __name__ == "__main__":
    main()