T = int(input())
for _ in range(T):
    s = input()
    if len(s) < 3:
        print("Dynamic")
    else:
        f = {}
        for c in s:
            if c not in f:
                f[c] = 1
            else:
                f[c] += 1
        sorted_f = [f[c] for c in f]
        sorted_f.sort(reverse=True)
        found = True
        
        for x in range(len(sorted_f) - 2):
            if sorted_f[x] != sorted_f[x + 1] + sorted_f[x + 2]:
                found = False
                break
        
        print("Dynamic" if found else "Not")
