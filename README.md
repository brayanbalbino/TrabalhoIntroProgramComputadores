# Trabalho da disciplina de Introdução a Programação de Computadores, do curso Ciências da Computação
Discente: Flavio Brayan Balbino Silva

Docente: Prof. Me. Ildenor David Sales Junior 

Proposta
Desenvolva em C um programa em que o sistema deverá: 
1. Solicitar a quantidade de alunos da turma. 
2. Registrar o nome e as duas notas de cada aluno. 
3. Calcular a média de cada aluno. 
4. Classificar cada aluno conforme sua média: 
o Média maior ou igual a 6,0: Aprovado. 
o Média entre 5,0 e 5,9: Recuperação. 
o Média abaixo de 5,0: Reprovado. 
5. Exibir uma lista com nome, notas, média e situação de cada aluno. 
6. Calcular a média geral da turma. 
7. Identificar o aluno com a maior média. 
Explicar cada etapa do código e funções específicas que utilizou.

Explicação do código

Variáveis

• turma: quantidade de alunos. i: contador dos laços.

• alunos[100][50]: vetor de nomes (até 100 alunos, 49 letras cada).

• n1[], n2[], md[]: vetores com as duas notas e a média de cada aluno. A posição i pertence sempre ao mesmo aluno.

• soma: acumula as médias. medTurma: média geral da turma.

• destaque: posição do aluno com a maior média.

Etapas

1. Quantidade de alunos: o scanf lê turma. O while repete a pergunta enquanto o valor for menor que 1 ou maior que 100, para não ultrapassar o tamanho dos vetores.
2. Registro dos dados: o for roda uma vez por aluno, de 0 até turma - 1. Em cada volta lê o nome e as duas notas. Cada nota passa por um while que só aceita valores de 0 a 10.
3. Média do aluno: md[i] = (n1[i] + n2[i]) / 2. Em seguida, soma = soma + md[i] acumula as médias para a média geral.
4. Classificação: if / else if / else dentro do segundo for:
   ◦ média maior ou igual a 6,0: Aprovado
   ◦ média maior ou igual a 5,0 (e menor que 6,0, pois a primeira condição já falhou): Recuperação
   ◦ caso contrário: Reprovado
5. Lista final: o segundo for percorre os alunos e exibe nome, notas, média e situação.
6. Média geral da turma: medTurma = soma / turma.
7. Aluno destaque: dentro do primeiro for, o if (md[i] > md[destaque]) compara a média atual com a maior até o momento. Se for maior, destaque = i. No final, alunos[destaque] e md[destaque] mostram o nome e a média do melhor aluno.

Funções utilizadas

• printf(): exibe texto e valores na tela. Usa %d (inteiro), %f (decimal), %.1f (decimal com 1 casa) e %s (texto).
• scanf(): lê o que o usuário digita. O & indica o endereço da variável onde o valor será guardado (não é usado no nome, que já é um vetor).
• " %49[^\n]": lê o nome completo, com espaços, até o Enter. O espaço inicial descarta o Enter anterior e o 49 limita o tamanho.
• main(): função principal, onde o programa começa. O return 0; indica que terminou sem erros.