#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int quantidade_alunos = 0, reprovados = 0, aprovados = 0, exames = 0;
    char aluno[50]; 
    float nota1, nota2, mediaTurma = 0, media;
    
    while (quantidade_alunos < 6) {
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno); 
        
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);
        
        media = (nota1 + nota2) / 2;
        
        if (media < 2.9) {
            printf("O aluno %s tem média %.2f e está Reprovado\n", aluno, media);
            reprovados += 1;
        } else if (media < 6.9) {
            printf("O aluno %s tem média %.2f e está de exame\n", aluno, media);
            exames += 1;
        } else {
            printf("O aluno %s tem média %.2f e está aprovado\n", aluno, media);
            aprovados += 1;
            
        }
        
        mediaTurma += media;
        
        quantidade_alunos++;
    }
    
    mediaTurma = mediaTurma / 6;
    printf("A média da turma é %.2f\n", mediaTurma);
    printf("A quantidade de aprovados da turma é %d\n", aprovados);
    printf("A quantidade de pessoas em exame da turma é %d\n", exames);
    printf("A quantidade de reprovados é %d\n", reprovados);
    
    return 0;
}
