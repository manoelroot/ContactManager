# Rastreamento de Testes

Este diretório armazena os testes executados no ContactManager e serve como histórico de execução.

Cada arquivo de teste deve conter:
- `Data`: data da execução
- `Objetivo`: o que está sendo validado
- `Comando`: o comando usado para executar o teste
- `Saída`: o resultado exibido pelo programa
- `Erros`: mensagens de erro ou problemas encontrados
- `Status`: `sucesso` ou `falha`

### Convenção de nomes
Use nomes de arquivo com data e descrição curta, por exemplo:

- `2026-06-09-add-list-persist.md`
- `2026-06-10-remove-search.md`

### Uso
1. Execute o comando de teste.
2. Registre a saída e qualquer erro.
3. Defina se o teste foi um sucesso ou falha.
4. Salve o arquivo neste diretório.
