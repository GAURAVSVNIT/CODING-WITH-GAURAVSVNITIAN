from collections import deque

def main():
    import sys
    input = sys.stdin.read().split()
    ptr = 0
    n = int(input[ptr])
    ptr += 1
    m = int(input[ptr])
    ptr += 1
    k = int(input[ptr])
    ptr += 1
    
    edges = []
    for _ in range(m):
        u = input[ptr]
        ptr += 1
        v = input[ptr]
        ptr += 1
        edges.append((u, v))
    
    name_to_id = {}
    current_id = 0
    for u, v in edges:
        if u not in name_to_id:
            name_to_id[u] = current_id
            current_id += 1
        if v not in name_to_id:
            name_to_id[v] = current_id
            current_id += 1
    
    while current_id < n:
        name_to_id[f"isolated_{current_id}"] = current_id
        current_id += 1
    
    # Build adjacency list
    adj = [[] for _ in range(n)]
    for u, v in edges:
        uid = name_to_id[u]
        vid = name_to_id[v]
        adj[uid].append(vid)
        adj[vid].append(uid)
    
    visited = [False] * n
    components = []
    for i in range(n):
        if not visited[i]:
            q = deque()
            q.append(i)
            visited[i] = True
            size = 1
            while q:
                node = q.popleft()
                for neighbor in adj[node]:
                    if not visited[neighbor]:
                        visited[neighbor] = True
                        size += 1
                        q.append(neighbor)
            components.append(size)
    
    components.sort(reverse=True)
    
    
    total = sum(components[:k])
    
    print(total)

if __name__ == "__main__":
    main()