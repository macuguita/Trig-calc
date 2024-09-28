//
//  main.c
//  Resolver_Tri
//
//  Created by Raúl Prieto Prieto on 26/11/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float ladoA=0,ladoB=0,ladoC=0,anguloLadoA=0,anguloLadoB=0,anguloLadoC=0,cosenoLadoC,cosenoLadoA,cosenoLadoB,senoLadoA,senoLadoB,senoLadoC;
    int opc;
    int i;
    
    for (i=0; i<3; i++) {
        printf("Dime que tres datos quieres introducir\n");
        printf("1.-Introducir ladoA\n2.-Introducir ladoB\n3.-Introducir ladoC\n");
        printf("4.-Introducir angulo ladoA\n5.-Introducir angulo ladoB\n6.-Introducir angulo ladoC\n");
        do{
            scanf("%d",&opc);
        }while(opc<=0||opc>6);
        
        switch(opc){
            case 1:
                printf("LadoA:");
                scanf("%f",&ladoA);
                
                break;
            case 2:
                printf("LadoB:");
                scanf("%f",&ladoB);
             
                break;
            case 3:
                printf("LadoC:");
                scanf("%f",&ladoC);
              
                break;
            case 4:
                printf("Angulo ladoA:");
                scanf("%f",&anguloLadoA);
                
                break;
            case 5:
                printf("Angulo ladoB:");
                scanf("%f",&anguloLadoB);
                
                break;
            case 6:
                printf("Angulo ladoC:");
                scanf("%f",&anguloLadoC);
                
                break;
            
        }
       
    }
    if(anguloLadoA==0&&anguloLadoB==0&&anguloLadoC==0){
            cosenoLadoC=(ladoC*ladoC-ladoA*ladoA-ladoB*ladoB)/(-2*ladoA*ladoB);
            anguloLadoC=acosf(cosenoLadoC);
            printf("angulo ladoC:%f radianes\n",anguloLadoC);
            cosenoLadoA=(ladoA*ladoA-ladoC*ladoC-ladoB*ladoB)/(-2*ladoC*ladoB);
            anguloLadoA=acosf(cosenoLadoA);
            printf("angulo ladoA: %f radianes\n",anguloLadoA);
            anguloLadoB=3.14159-anguloLadoC-anguloLadoA;
            printf("angulo ladoB: %f radianes\n",anguloLadoB);
        }
    if(ladoA==0&&ladoB==0&&ladoC==0){printf("Tiene infinitas soluciones\n");}
    
    if(ladoA==0&&anguloLadoA==0&&anguloLadoB==0){
        senoLadoC=sinf(anguloLadoC);
        senoLadoB=ladoB*senoLadoC/ladoC;
        anguloLadoB=asinf(senoLadoB);
        anguloLadoA=3.14159-anguloLadoB-anguloLadoC;
        senoLadoA=sinf(anguloLadoA);
        ladoA=ladoB*senoLadoA/senoLadoB;
        printf("Angulo a: %f radianes \n",anguloLadoA);
        printf("Angulo b: %f radianes \n",anguloLadoB);
        printf("Lado a: %f \n",ladoA);
    }
    
    if(ladoA==0&&anguloLadoA==0&&anguloLadoC==0){
        senoLadoB=sinf(anguloLadoB);
        senoLadoC=(ladoC*senoLadoB)/ladoB;
        anguloLadoC=asinf(senoLadoC);
        anguloLadoA=3.14159-anguloLadoB-anguloLadoC;
        senoLadoA=sinf(anguloLadoA);
        ladoA=(ladoB*senoLadoA)/senoLadoB;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo a: %f radianes \n",anguloLadoA);
        printf("Angulo c: %f radianes \n",anguloLadoC);
        
    }
    
    if(ladoA==0&&anguloLadoC==0&&anguloLadoB==0){
        ladoA=sqrtf(ladoB*ladoB+ladoC*ladoC-2*ladoB*ladoC*cosf(anguloLadoA));
        senoLadoA=sinf(anguloLadoA);
        senoLadoB=(ladoB*senoLadoA)/ladoA;
        anguloLadoB=asinf(senoLadoB);
        anguloLadoC=3.14159-anguloLadoB-anguloLadoA;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo b: %f radianes \n",anguloLadoB);
        printf("Angulo c: %f radianes \n",anguloLadoC);
    }
    
    if(ladoA==0&&anguloLadoA==0&&ladoB==0){
        senoLadoB=sinf(anguloLadoB);
        senoLadoC=sinf(anguloLadoC);
        ladoB=(ladoC*senoLadoB)/senoLadoC;
        anguloLadoA=3.14159-anguloLadoB-anguloLadoC;
        senoLadoA=sinf(anguloLadoA);
        ladoA=(ladoC*senoLadoA)/senoLadoC;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo a: %f radianes \n",anguloLadoA);
        printf("Lado b: %f \n",ladoB);
    }
    
    if(ladoA==0&&anguloLadoA==0&&ladoC==0){
        senoLadoC=sinf(anguloLadoC);
        senoLadoB=sinf(anguloLadoB);
        ladoC=(ladoC*senoLadoC)/senoLadoB;
        anguloLadoA=3.14159-anguloLadoB-anguloLadoC;
        senoLadoA=sinf(anguloLadoA);
        ladoA=(ladoB*senoLadoA)/senoLadoB;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo a: %f radianes \n",anguloLadoA);
        printf("Lado c: %f \n",ladoC);
    }
    
    if(ladoA==0&&anguloLadoB==0&&ladoB==0){
        senoLadoA=sinf(anguloLadoA);
        senoLadoC=sinf(anguloLadoC);
        ladoA=(ladoC*senoLadoA)/senoLadoC;
        anguloLadoB=3.14159-anguloLadoA-anguloLadoC;
        senoLadoB=sinf(anguloLadoB);
        ladoB=(ladoC*senoLadoB)/senoLadoC;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo b: %f radianes \n",anguloLadoB);
        printf("Lado b: %f \n",ladoB);
    }
    
    if(ladoA==0&&anguloLadoC==0&&ladoB==0){
        anguloLadoC=3.14159-anguloLadoA-anguloLadoB;
        senoLadoC=sinf(anguloLadoC);
        senoLadoA=sinf(anguloLadoA);
        ladoA=(ladoC*senoLadoA)/senoLadoC;
        senoLadoB=sinf(anguloLadoB);
        ladoB=(ladoC*senoLadoB)/senoLadoC;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo c: %f radianes \n",anguloLadoC);
        printf("Lado b: %f \n",ladoB);
    }
    
    if(ladoA==0&&anguloLadoB==0&&ladoC==0){
        anguloLadoB=3.14159-anguloLadoA-anguloLadoC;
        senoLadoB=sinf(anguloLadoB);
        senoLadoA=sinf(anguloLadoA);
        senoLadoC=sinf(anguloLadoC);
        ladoA=(ladoB*senoLadoA)/senoLadoB;
        ladoC=(ladoB*senoLadoC)/senoLadoB;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo b: %f radianes \n",anguloLadoB);
        printf("Lado c: %f \n",ladoC);
    }
    
    if(ladoA==0&&anguloLadoC==0&&ladoC==0){
        anguloLadoC=3.14159-anguloLadoA-anguloLadoB;
        senoLadoC=sinf(anguloLadoC);
        senoLadoB=sinf(anguloLadoB);
        senoLadoA=sinf(anguloLadoA);
        ladoC=(ladoB*senoLadoC)/senoLadoB;
        ladoA=(ladoB*senoLadoA)/senoLadoB;
        printf("Lado a: %f \n",ladoA);
        printf("Angulo c: %f radianes \n",anguloLadoC);
        printf("Lado c: %f \n",ladoC);
        
    }
    
    
    /***************************************************************/
    
    if(ladoB==0&&anguloLadoA==0&&anguloLadoB){
        senoLadoC=sinf(anguloLadoC);
        senoLadoA=(senoLadoC*ladoA)/ladoC;
        anguloLadoA=asinf(senoLadoA);
        anguloLadoB=3.14159-anguloLadoA-anguloLadoC;
        senoLadoB=sinf(anguloLadoB);
        ladoB=(ladoC*senoLadoB)/senoLadoC;
        printf("Angulo a: %f \n",anguloLadoA);
        printf("Angulo b: %f radianes \n",anguloLadoB);
        printf("Lado b: %f \n",ladoB);
    }
    
    if(ladoB==0&&anguloLadoA==0&&anguloLadoC){
        ladoB=sqrtf(ladoC*ladoC+ladoA*ladoA-2*ladoC*ladoA*cosf(anguloLadoB));
        senoLadoB=sinf(anguloLadoB);
        senoLadoA=(senoLadoB*ladoA)/ladoB;
        anguloLadoA=asinf(senoLadoA);
        anguloLadoC=3.14159-anguloLadoA-anguloLadoB;
        printf("Angulo a: %f \n",anguloLadoA);
        printf("Angulo c: %f radianes \n",anguloLadoC);
        printf("Lado b: %f \n",ladoB);
    }
    
    if(ladoB==0&&anguloLadoC==0&&anguloLadoB){
        senoLadoA=sinf(anguloLadoA);
        senoLadoC=(senoLadoA*ladoC)/ladoA;
        anguloLadoC=asinf(senoLadoC);
        anguloLadoB=3.14159-anguloLadoA-anguloLadoC;
        senoLadoB=sinf(anguloLadoB);
        ladoB=(ladoA*senoLadoB)/senoLadoA;
        printf("Angulo c: %f \n",anguloLadoC);
        printf("Angulo b: %f radianes \n",anguloLadoB);
        printf("Lado b: %f \n",ladoB);

    }

    
    if(ladoB==0&&anguloLadoA==0&&ladoC==0){
        anguloLadoA=3.14159-anguloLadoC-anguloLadoB;
        senoLadoA=sinf(anguloLadoA);
        senoLadoB=sinf(anguloLadoB);
        senoLadoC=sinf(anguloLadoC);
        ladoB=(ladoA*senoLadoB)/senoLadoA;
        ladoC=(ladoA*senoLadoC)/senoLadoA;
        printf("Lado b: %f \n",ladoB);
        printf("Angulo a: %f radianes \n",anguloLadoA);
        printf("Lado c: %f \n",ladoC);
    }
    
    if(ladoB==0&&anguloLadoB==0&&ladoC==0){
        senoLadoC=sinf(anguloLadoC);
        senoLadoA=sinf(anguloLadoA);
        ladoC=(ladoA*senoLadoC)/senoLadoA;
        anguloLadoB=3.14159-anguloLadoC-anguloLadoA;
        senoLadoB=sinf(anguloLadoB);
        ladoB=(ladoA*senoLadoB)/senoLadoA;
        printf("Lado b: %f \n",ladoB);
        printf("Angulo b: %f radianes \n",anguloLadoB);
        printf("Lado c: %f \n",ladoC);
    }
    
    if(ladoB==0&&anguloLadoC==0&&ladoC==0){
        senoLadoB=sinf(anguloLadoB);
        senoLadoA=sinf(anguloLadoA);
        ladoB=(ladoA*senoLadoB)/senoLadoA;
        anguloLadoC=3.14159-anguloLadoB-anguloLadoA;
        senoLadoC=sinf(anguloLadoC);
        ladoC=(ladoA*senoLadoC)/senoLadoA;
        printf("Lado c: %f \n",ladoC);
        printf("Angulo c: %f radianes \n",anguloLadoC);
        printf("Lado b: %f \n",ladoB);
    }
    
    /***************************************************************/
    
    if(ladoC==0&&anguloLadoA==0&&anguloLadoC==0){
        senoLadoB=sinf(anguloLadoB);
        senoLadoA=(senoLadoB*ladoA)/ladoB;
        anguloLadoA=asinf(senoLadoA);
        anguloLadoC=3.14159-anguloLadoA-anguloLadoB;
        senoLadoC=sinf(anguloLadoC);
        ladoC=(ladoB*senoLadoC)/senoLadoB;
        printf("Angulo a: %f \n",anguloLadoA);
        printf("Angulo c: %f radianes \n",anguloLadoC);
        printf("Lado c: %f \n",ladoC);
    }
    
    if(ladoC==0&&anguloLadoC==0&&anguloLadoB==0){
        senoLadoA=sinf(anguloLadoA);
        senoLadoB=(senoLadoA*ladoA)/ladoA;
        anguloLadoB=asinf(senoLadoB);
        anguloLadoC=3.14159-anguloLadoA-anguloLadoB;
        senoLadoC=sinf(anguloLadoC);
        ladoC=(ladoA*senoLadoC)/senoLadoA;
        printf("Angulo b: %f \n",anguloLadoB);
        printf("Angulo c: %f radianes \n",anguloLadoC);
        printf("Lado c: %f \n",ladoC);

    }
    
    return 0;
}
