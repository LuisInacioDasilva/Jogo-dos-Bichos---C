
#include<stdio.h>
#include<locale.h>
//INTEGRANTES DO TRABALHO DO JOGO DO BICHO:
//LUIS INACIO DA SILVA RIBEIRO
//RICHARD INADA PEREIRA
int main(){
    int mamifero, quadrupede,herbivoro,voa,andaenada,carnivoro;
    float leao,cavalo,homem,macaco,morcego,baleia,avestruz,pinguim,pato,aguia,tartaruga,crocodilo,cobra = 0;
    setlocale(LC_ALL,"Portuguese_Brazil");
    int x;
    do{
    leao = 0;
    cavalo = 0;
    homem = 0;
    macaco = 0;
    morcego = 0;
    baleia = 0;
    avestruz = 0;
    pinguim = 0;
    pato = 0;
    aguia = 0;
    tartaruga = 0;
    crocodilo = 0;
    cobra = 0;
    printf("\t\t\t\t\tEscolha um animal que está presente nesta lista e o programa tentará adivinhar:");
    printf("\n- Leão \n- Cavalo \n- Homem \n- Macaco \n- Morcego \n- Baleia \n- Avestruz \n- Pinguim \n- Pato \n- Águia \n- Tartaruga \n- Crocodilo \n- Cobra");
    printf("\n");
    printf("\n\t\t\t\t\t\t\tEscolheu? agora vamos as perguntas!");
    printf("\n\t\t\t\t\t\t\tResponda 1 para SIM e 2 para NÃO");
        printf("\nSeu animal é um Mamifero?: ");
        scanf("%d", &mamifero);
        printf("\nSeu animal é um Quadrúpede?: ");
        scanf("%d", &quadrupede);
        printf("\nSeu animal é Carnivoro?: ");
        scanf("%d", &carnivoro);
        printf("\nSeu animal é Herbivoro?: ");
        scanf("%d", &herbivoro);
        printf("\nSeu animal Voa?: ");
        scanf("%d", &voa);
        printf("\nSeu animal consegue Andar e Nadar?: ");
        scanf("%d", &andaenada);


switch(mamifero){
    case 1:
    leao = leao + 76;
    cavalo = cavalo + 76;
    homem = homem + 76;
    macaco = macaco + 76;
    morcego = morcego + 76;
    baleia = baleia + 76;
    pato = pato + 76;
    aguia = aguia + 76;
    tartaruga = tartaruga + 76;
    crocodilo = crocodilo + 76;
    cobra = cobra + 76;
    avestruz = avestruz + 76;
    pinguim = pinguim + 76;
    case 2:
    aguia = aguia - 76;
    tartaruga = tartaruga - 76;
    crocodilo = crocodilo - 76;
    cobra = cobra - 76;
    avestruz = avestruz - 76;
    pinguim = pinguim - 76;
    leao = leao - 76;
    cavalo = cavalo - 76;
    homem = homem - 76;
    macaco = macaco - 76;
    morcego = morcego - 76;
    baleia = baleia - 76;
    pato = pato - 76;

}

switch(quadrupede){
   case 1:
    leao = leao + 52;
    cavalo = cavalo + 52;
    homem = homem + 52;
    macaco = macaco + 52;
    morcego = morcego + 52;
    baleia = baleia + 52;
    pato = pato + 52;
    aguia = aguia + 52;
    tartaruga = tartaruga + 52;
    crocodilo = crocodilo + 52;
    cobra = cobra + 52;
    avestruz = avestruz + 52;
    pinguim = pinguim + 52;
    case 2:
    aguia = aguia - 52;
    tartaruga = tartaruga - 52;
    crocodilo = crocodilo - 52;
    cobra = cobra - 52;
    avestruz = avestruz - 52;
    pinguim = pinguim - 52;
    leao = leao - 52;
    cavalo = cavalo - 52;
    homem = homem - 52;
    macaco = macaco - 52;
    morcego = morcego - 52;
    baleia = baleia - 52;
    pato = pato - 52;
}

switch(carnivoro){
   case 1:
    leao = leao + 36;
    cavalo = cavalo + 36;
    homem = homem + 36;
    macaco = macaco + 36;
    morcego = morcego + 36;
    baleia = baleia + 36;
    pato = pato + 36;
    aguia = aguia + 36;
    tartaruga = tartaruga + 36;
    crocodilo = crocodilo + 36;
    cobra = cobra + 36;
    avestruz = avestruz + 36;
    pinguim = pinguim + 36;
    case 2:
    aguia = aguia - 36;
    tartaruga = tartaruga - 36;
    crocodilo = crocodilo - 36;
    cobra = cobra - 36;
    avestruz = avestruz - 36;
    pinguim = pinguim - 36;
    leao = leao - 36;
    cavalo = cavalo - 36;
    homem = homem - 36;
    macaco = macaco - 36;
    morcego = morcego - 36;
    baleia = baleia - 36;
    pato = pato - 36;

}

switch(herbivoro){
     case 1:
    leao = leao + 10;
    cavalo = cavalo + 10;
    homem = homem + 10;
    macaco = macaco + 10;
    morcego = morcego + 10;
    baleia = baleia + 10;
    pato = pato + 10;
    aguia = aguia + 10;
    tartaruga = tartaruga + 10;
    crocodilo = crocodilo + 10;
    cobra = cobra + 10;
    avestruz = avestruz + 10;
    pinguim = pinguim + 10;
    case 2:
    aguia = aguia - 10;
    tartaruga = tartaruga - 10;
    crocodilo = crocodilo - 10;
    cobra = cobra - 10;
    avestruz = avestruz - 10;
    pinguim = pinguim - 10;
    leao = leao - 10;
    cavalo = cavalo - 10;
    homem = homem - 10;
    macaco = macaco - 10;
    morcego = morcego - 10;
    baleia = baleia - 10;
    pato = pato - 10;


}
switch(voa){
  case 1:
    leao = leao + 49;
    cavalo = cavalo + 49;
    homem = homem + 49;
    macaco = macaco + 49;
    morcego = morcego + 49;
    baleia = baleia + 49;
    pato = pato + 49;
    aguia = aguia + 49;
    tartaruga = tartaruga + 49;
    crocodilo = crocodilo + 49;
    cobra = cobra + 49;
    avestruz = avestruz + 49;
    pinguim = pinguim + 49;
    case 2:
    aguia = aguia - 49;
    tartaruga = tartaruga - 49;
    crocodilo = crocodilo - 49;
    cobra = cobra - 49;
    avestruz = avestruz - 49;
    pinguim = pinguim - 49;
    leao = leao - 49;
    cavalo = cavalo - 49;
    homem = homem - 49;
    macaco = macaco - 49;
    morcego = morcego - 49;
    baleia = baleia - 49;
    pato = pato - 49;


}
switch(andaenada){
    case 1:
    leao = leao + 21;
    cavalo = cavalo + 21;
    homem = homem + 21;
    macaco = macaco + 21;
    morcego = morcego + 21;
    baleia = baleia + 21;
    pato = pato + 21;
    aguia = aguia + 21;
    tartaruga = tartaruga + 21;
    crocodilo = crocodilo + 21;
    cobra = cobra + 21;
    avestruz = avestruz + 21;
    pinguim = pinguim + 21;
    case 2:
    aguia = aguia - 21;
    tartaruga = tartaruga - 21;
    crocodilo = crocodilo - 21;
    cobra = cobra - 21;
    avestruz = avestruz - 21;
    pinguim = pinguim - 21;
    leao = leao - 21;
    cavalo = cavalo - 21;
    homem = homem - 21;
    macaco = macaco - 21;
    morcego = morcego - 21;
    baleia = baleia - 21;
    pato = pato - 21;


}
    if (leao == -59){
    printf("\nSeu animal é o Leão!");

 }
    else if (cavalo == -106){
    printf("\nSeu animal é o Cavalo!");

 }
    else if (macaco == -116){
    printf("\nSeu animal é o Macaco!");

 }
    else if (pato == -98 ){
    printf("\nSeu animal é o Pato!");

 }
   else if (morcego == -119){
    printf("\nSeu animal é o Morcego!");

 }
    else if (baleia ==-132){
    printf("\nSeu animal é a Baleia!");

 }

    else if (crocodilo == -135){
    printf("\nSeu animal é o Crocodilo!");

}
     else if(pinguim == -187){
    printf("\nSeu animal é o Pinguim!");

 }

    else if (aguia == -159){
    printf("\nSeu animal é a Águia!");

 }
    else if(tartaruga == -171){
    printf("\nSeu animal é a Tartaruga!");

}
    else if (homem == -147){
    printf("\nSeu animal é o Homem!");

 }

  else if(cobra == -208){
    printf("\nSeu animal é a Cobra!");

    }

    else if (avestruz ==-244){
    printf("\nSeu animal é o Avestruz!");
    printf("\n");


 }
 else{
    printf("\nEste animal não existe na lista!");
 }
 printf("\nDeseja jogar novamente? Se SIM, digite 1: ");
 printf("\nCaso deseje ENCERRAR digite qualquer coisa: ");
 scanf("%d", &x);
}while(x == 1);

}
