# Método de Henrique

**O Método de Henrique é uma forma simplificada do Algoritmo de Horner.**
Imagine um número decimal em que, a cada caractere de um número binário, é realizada uma multiplicação por dois. Caso o caractere seja 1, o resultado da multiplicação é somado a 1. **Denominado como Método de Henrique**, esse é um **método de conversão de binário para decimal extremamente simples e válido para todos os casos.**

## Representação mais simples:

$X = Número\ atual$  
  
0 — $X × 2$  
1 — $X × 2 + 1$  

## Exemplo com "1011011":

**1** — $2 × 0 + 1 = 1$  
**0** — $2 × 1 = 2$  
**1** — $2 × 2 + 1 = 5$  
**1** — $2 × 5 + 1 = 11$  
**0** — $2 × 11 = 22$  
**1** — $2 × 22 + 1 = 45$  
**1** — $2 × 45 + 1 = 91$  

Logo, **1011011 equivale a 91**.
