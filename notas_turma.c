#include <stdio.h>

int main() {
    int turma, i;
    char alunos[100][50];
    float n1[100], n2[100], md[100];
    float soma = 0, medTurma;
    int destaque = 0;

    // 1. Solicitar ao usuário o número de alunos na turma
    printf("Quantos alunos há na turma? (1 a 100): ");
    scanf("%d", &turma);
    while (turma < 1 || turma > 100) {
        printf("Valor inválido! Digite de 1 a 100: ");
        scanf("%d", &turma);
    }

    // 2 e 3. Registrar o cadastro e notas dos alunos, calcular a média das duas notas e acumular a soma das médias
    for (i = 0; i < turma; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Nome e sobrenome: ");
        scanf(" %49[^\n]", alunos[i]);

        printf("Nota 1 (0 a 10): ");
        scanf("%f", &n1[i]);
        while (n1[i] < 0 || n1[i] > 10) {
            printf("Nota inválida! Digite de 0 a 10: ");
            scanf("%f", &n1[i]);
        }

        printf("Nota 2 (0 a 10): ");
        scanf("%f", &n2[i]);
        while (n2[i] < 0 || n2[i] > 10) {
            printf("Nota inválida! Digite de 0 a 10: ");
            scanf("%f", &n2[i]);
        }

        md[i] = (n1[i] + n2[i]) / 2;
        soma = soma + md[i];

        // 7. Verifica se e a maior média até agora e armazena o índice do aluno destaque
        if (md[i] > md[destaque]) {
            destaque = i;
        }
    }

    // 4 e 5. Classificar e exibir a lista de alunos com suas notas, médias e situação
    printf("\n========== NOTAS DA TURMA ==========\n");
    for (i = 0; i < turma; i++) {
        printf("Nome: %s\n", alunos[i]);
        printf("Notas: %.1f e %.1f\n", n1[i], n2[i]);
        printf("Média: %.1f\n", md[i]);

        if (md[i] >= 6.0) {
            printf("Situação: Aprovado\n");
        } else if (md[i] >= 5.0) {
            printf("Situação: Recuperação\n");
        } else {
            printf("Situação: Reprovado\n");
        }
        printf("----------------------------------------\n");
    }

    // 6. Calcular a média geral da turma
    medTurma = soma / turma;
    printf("Média geral da turma: %.2f\n", medTurma);

    // 7. Aluno destaque com maior média
    printf("Destaque da Turma: %s (%.1f)\n", alunos[destaque], md[destaque]);

    return 0;
}
