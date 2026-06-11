# Teste 2026-06-11: Adicionar, buscar, remover e persistência

Data: 2026-06-11
Objetivo: validar as operações básicas da primeira fase: adicionar, listar, buscar, remover e salvar contatos.
Comando:
```bash
cd src && mkdir -p output && gcc -Wall -Wextra -g3 main.c contact.c storage.c -o output/main && printf '1\nAlice\n1234\n1\nBob\n5678\n2\n3\nAlice\n4\nBob\ns\n5\n' | ./output/main
```
Saída: 
- adicionou Alice e Bob
- listou os dois contatos
- buscou Alice com sucesso
- removeu Bob com confirmação
- salvou e encerrou sem travar
Erros: nenhum
Status: sucesso
