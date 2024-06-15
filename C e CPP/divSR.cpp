//le um txt com quiciente e divisor e retorna o quociente e o resto usando divisao sem restauração em um txt de saida
#include <stdio.h>

void NRDA(int &quociente, int &divisor, int &resto)
{
    int  n = 0, s;
    resto = 0;
    for(int i = quociente; i > 0; i >>=1)
    {
        n++;
    }

        for(int i = 0; i < n; i++)
        {
            s = (resto < 0) * 2 - 1;

            quociente <<= 1;
            resto <<= 1;

            if(quociente >= 1 << n)
            {
                quociente &= ~(1 << n);
                resto++;
            }

            resto += s * divisor;

            if(resto >= 0)
                quociente |= 1;
        }
        resto += (resto < 0) * divisor;
    }

    int main()
    {
        int quociente, divisor, resto;

        char path[50];

        printf("Digite o caminho para o arquivo de entrada: ");
        scanf("%s", path);

        FILE *entrada = fopen(path, "r"), *saida = fopen("saida.txt","w");
        if(!entrada || !saida) return 0;

        fprintf(saida,"quo.\tresto\n");
        while(fscanf(entrada,"%d %d", &quociente, &divisor) != EOF)
        {
            NRDA(quociente, divisor, resto);
            fprintf(saida, "%d\t\t%d\n", quociente, resto);
        }

        fclose(entrada);
        fclose(saida);
    }   