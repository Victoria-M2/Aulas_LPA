#include <stdio.h>

int main(void) {
    int idade, cat;
    
    printf("digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 0 || idade > 120){
        printf("idade invalida\n");
        
        return 0;
    }
    
    
    printf("digite sua categoria (1-Atleta, 2-Amador, 3-Profissional): ");
    scanf("%d", &cat);
    
    if (cat < 1 || cat > 3){
        printf("categoria invalida\n");
        
        return 0;
    }
    
    if(idade >= 0 && idade <= 12){
        printf("Infantil ");
    }
    
    if(idade >= 13 && idade <= 17){
        printf("Juvenil ");
    }
    
    if(idade >= 18 && idade <= 59){
        printf("adulto ");
    }
    
    if(idade >= 60 && idade <= 120){
        printf("senior ");
    }
    
    
    
    if(cat == 1){
        printf("Atleta");
    }
    
    if(cat == 2){
        printf("Amador");
    }
    
    if(cat == 3){
        printf("Profissional");
    }
    
    

    return 0;
}
