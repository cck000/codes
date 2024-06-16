N1, N2, N3, N4 = map(float, input().split())

Media = (N1*0.2)+(N2*0.3)+(N3*0.4)+(N4*0.1) - 0.0001

if Media >= 7:
    print(f"Media: {Media:.1f}\nAluno aprovado.")
elif Media <4.9:
    print(f"Media: {Media:.1f}\nAluno reprovado.")
else:
    print(f"Media: {Media:.1f}\nAluno em exame.")
    NF = float(input())
    Media_Final = (NF+Media)/2
    if Media_Final >=5:
        print(f"Nota do exame: {NF:.1f}\nAluno aprovado.\nMedia final: {Media_Final:.1f}")

