p = input().split()

pq = [int(p[0]), int(p[1]), int(p[2])]

maior = (pq[0]+ pq[1]+ (abs(pq[0]-pq[1])))/2

maior = (pq[2]+maior+(abs(maior-pq[2])))/2

print("%d eh o maior" %maior)
