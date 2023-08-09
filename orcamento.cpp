#include <stdio.h>
#include <math.h>

int main(){
    
    
    int valor_a_vista , parcelas, pagamento ,acabamento, imovel, pedreiro, dias_trabalhados_pedreiro, eletricista, dias_trabalhados_eletricista, encanador, dias_trabalhados_encanador, pintor, dias_trabalhados_pintor, ajudante, dias_trabalhados_ajudante;
    float  valor_obra_bruta, mensalidade, valor_do_orçamento, metros_quadrados, valor_desconto, valor_total, valor_do_acabamento, mao_de_obra, diaria_pedreiro, diaria_eletricista, diaria_encanador, diaria_pintor, diaria_ajudante;
    
    
    //Mão de obra
    
    do{
        printf("Numero de pedreiros: ");
        scanf("%d", &pedreiro);
     if(pedreiro > 0){
      do{
        printf("Quantos dias o pedreiro trabalhou? ");
        scanf("%d", &dias_trabalhados_pedreiro);
            if (dias_trabalhados_pedreiro < 0 || dias_trabalhados_pedreiro == 0 )
                puts("Valor invalido!! Digite um numero maior que 0");
      } while (dias_trabalhados_pedreiro == 0 || dias_trabalhados_pedreiro < 0);
      diaria_pedreiro = (125 * pedreiro) * dias_trabalhados_pedreiro;
        }
     if(pedreiro < 0)
      printf("Erro!! Numero inválido!!\n");
    } while (pedreiro <0); 
        
      
    do{
    printf("\nNumero de eletricista: ");
    scanf("%d", &eletricista);
     if(eletricista > 0){
      do{
            printf("Quantos dias o eletricista trabalhou? ");
            scanf("%d", &dias_trabalhados_eletricista);
                if (dias_trabalhados_eletricista < 0 || dias_trabalhados_eletricista == 0)
                    puts("Valor invalido!! Digite um numero maior que 0");
      } while (dias_trabalhados_eletricista < 0 || dias_trabalhados_eletricista == 0);
      diaria_eletricista = (150 * eletricista) * dias_trabalhados_eletricista;
        }
     if (eletricista < 0) 
      printf("Erro!! Numero inválido!!\n");
    } while (eletricista <0);
    
    
    do{
    printf("\nNumero de encanador: ");
    scanf("%d", &encanador);
     if(encanador > 0){
     do{
            printf("Quantos dias o encanador trabalhou? ");
            scanf("%d", &dias_trabalhados_encanador);
                if(dias_trabalhados_encanador < 0 || dias_trabalhados_encanador == 0)
                    puts("Valor invalido!! Digite um numero maior que 0");
        } while (dias_trabalhados_encanador < 0 || dias_trabalhados_encanador == 0);
      diaria_encanador = (140 * encanador) * dias_trabalhados_encanador;
        }
     if (encanador < 0) 
      printf("Erro!! Numero inválido!!\n");
    } while (encanador <0);
    
    
    do{
        printf("\nNumero de pintor: ");
        scanf("%d", &pintor);
            if(pintor > 0){
     do{
            printf("Quantos dias o pintor trabalhou? ");
            scanf("%d", &dias_trabalhados_pintor);
                if(dias_trabalhados_pintor < 0 || dias_trabalhados_pintor == 0)
                    puts("Valor invalido!! Digite um numero maior que 0");
        } while (dias_trabalhados_pintor < 0 || dias_trabalhados_pintor == 0);
      diaria_pintor = (130 * pintor) * dias_trabalhados_pintor;
        }
     if (pintor < 0) 
      printf("Erro!! Numero inválido!!\n");
    } while (pintor < 0);
    
    
    do{ 
        printf("\nNumero de ajudante: ");
        scanf("%d", &ajudante);
         if(ajudante > 0){
    do{
        printf("Quantos dias o ajudante trabalhou? ");
        scanf("%d", &dias_trabalhados_ajudante);
            if(dias_trabalhados_ajudante < 0 || dias_trabalhados_ajudante == 0)
                puts("Valor invalido!! Digite um numero maior que 0");
    }while (dias_trabalhados_ajudante < 0 || dias_trabalhados_ajudante == 0);
      diaria_ajudante = (60 * ajudante) * dias_trabalhados_ajudante;
        }
     if (ajudante < 0) 
      printf("Erro!! Numero inválido!!\n");
    } while (ajudante < 0);
    
   
     
    do{
        printf("\nDigite a quantidade de metros quadrados da reforma: ");
        scanf("%f", &metros_quadrados);
            if(metros_quadrados <= 0)
             puts("Valor invalido!! Digite um numero maior que 0");
    } while (metros_quadrados <= 0);
    
     mao_de_obra = diaria_ajudante + diaria_pintor + diaria_encanador + diaria_eletricista + diaria_pedreiro;
    
    // Tipo do imóvel
    
    
    do{
        printf("\nTipo do imovel: \n1- casa \n2- apartamento\n\n");
        scanf ("%d", &imovel);
         if (imovel < 1 || imovel > 2)
          puts("Valor invalido!!");
          getchar();
    } while (imovel < 1 || imovel > 2);
    
    if (imovel == 1)
    valor_obra_bruta = 1300 * metros_quadrados;
     else 
      valor_obra_bruta = 1600 * metros_quadrados;
    
    
    //Acabamento
    
    do{
        printf("\nQual e o tipo de acabamento?\n 1- Padrao A\n 2- Padrao B\n 3- Padrao C\n\n ");
        scanf("%d", &acabamento);
            if(acabamento < 1 || acabamento > 3)
                puts("Digite um valor valido!!");
                getchar();
    } while (acabamento < 1 || acabamento > 3);
      
    if(acabamento == 1)
     valor_do_acabamento = 970 * metros_quadrados;
        else if (acabamento == 2) {
            valor_do_acabamento = 730 * metros_quadrados;
        } 
                else
                    valor_do_acabamento = 460 * metros_quadrados;
    
    valor_do_orçamento = mao_de_obra + valor_obra_bruta + valor_do_acabamento;
    
    do{
        printf("\nVoce pretende parcelar ou pagar a vista?\n1- Parcelar\n2- A vista\n\n");
        scanf("%d", &pagamento);
            if(pagamento < 1 || pagamento > 2)
                puts("Valor invalido!!!!");
                getchar();
    } while (pagamento < 1 || pagamento > 2);
    
    
    
    if (pagamento == 1){
        
        do{
        printf("Pretende pagar em quantas parcelas? ");
        scanf("%d", &parcelas);
         if(parcelas <= 0)
          puts("Valor invalido!! Digite um numero maior que 0\n");
        } while (parcelas <= 0);
        mensalidade = valor_do_orçamento * pow (1.12, 0.5) / parcelas;
     } else 
        valor_desconto = valor_do_orçamento * 0.15;
    
    if (pedreiro > 0)
        printf ("\nO valor pago pelo trabalho do pedreiro foi de: %.2f\n", diaria_pedreiro); 
    
    if (eletricista > 0)
        printf ("O valor pago pelo trabalho do eletricista foi de: %.2f\n", diaria_eletricista);
    
    if (encanador > 0)
        printf ("O valor pago pelo trabalho do encanador foi de: %.2f\n", diaria_encanador); 
    
    if (pintor > 0)
        printf ("O valor pago pelo trabalho do pintor foi de: %.2f\n", diaria_pintor); 
    
    if (ajudante > 0)
        printf ("O valor pago pelo trabalho do ajudante foi de: %.2f\n", diaria_ajudante); 
        
    //printf("Valor do acabamento: %.2f\n", valor_do_acabamento); 
    //printf("Valor total: %.2f\n", valor_do_orçamento); 
    
    if (pagamento == 2){
        printf ("Valor da mão de obra: %.2f\n", valor_obra_bruta);
        printf("Valor do acabamento: %.2f\n", valor_do_acabamento);
        printf("Valor total: %.2f\n", valor_do_orçamento);
        printf("Valor do desconto: %.2f\n", valor_desconto);
        valor_total = valor_do_orçamento - valor_desconto; 
        printf("Valor a ser pago: %.2f\n", valor_total); 
    }
    
    if (pagamento == 1){
        printf ("Valor da mão de obra: %.2f\n", valor_obra_bruta);
        printf("Valor do acabamento: %.2f\n", valor_do_acabamento);
        valor_total = parcelas * mensalidade;
        printf("Valor total: %.2f\n", valor_do_orçamento); 
        printf("Numero de parcelas: %d\n", parcelas);
        printf("O valor da mensalidade e de: %d x %.2f\n", parcelas, mensalidade);
        printf("Valor a ser pago: %.2f", mensalidade * parcelas);
    }

}







