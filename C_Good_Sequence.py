n=int(input())
l=list(map(int,input().split()))
mp={}
for i in l:
    mp[i]=mp.get(i,0)+1
ans=0
for i,j in mp.items():
    if(j>=i):
        ans+=j-i
    else: ans+=j

print(ans)
