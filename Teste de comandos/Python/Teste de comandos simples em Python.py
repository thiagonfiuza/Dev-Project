#Anotação de comandos em Python
# -*- coding: utf-8 -*-
#comando para os caracteres especiais (Acentos e Ç) serem reconhecidos e interpretados
print('Olá Mundo')
print('Bem vindos ao teste simples de comandos em Python')

a = 1
b = 5
c = 10
d = 1.1

#Imprimindo texto na tela
print('O valor de a = ',a)
print('O valor de b = ',b)

#Estruturas condicionais
if a > b:
  print("Maior")
elif a == b:
    print("Igual")
else:
      print("Menor")

#Operadores Logicos
#Condicional com and
if a > b and b < c:
  print('A é maior que B que é menor que C')
else:
    print('Um dos dois esta incorreto')

#Condicional com and
if a > b or b < c:
  print('A é maior que B ou B é menor que C')
else:
    print('Nenhum dos dois esta correto')

print('\n')

#Operadores matematicos
print('2 + 2 = ', 2 + 2) #Adição
print('2 - 2 = ', 2 - 2) #Subtração
print('2 * 2 = ', 2 * 2) #Multiplicão
print('2 ^ 2 = ', 2 ** 2) #Exponenciação
print('2 / 2 = ', 2 / 2) #Divisão
print('2 % 2 = ', 2 % 2) #Resto da divisão
