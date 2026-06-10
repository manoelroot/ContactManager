# Testes

## 2026-06-05 - Primeiro caso de teste
Objetivo: validar a funcionalidade de adicionar e listar contatos com a implementação atual.

Passos:
1. Compilar o projeto e garantir que o código atual tenha pelo menos o fluxo básico funcional.
2. Executar o programa e selecionar a opção de adicionar contato.
3. Inserir um nome simples, por exemplo: `João`.
4. Inserir um telefone simples, por exemplo: `11999999999`.
5. Selecionar a opção de listar contatos.

Resultado esperado:
- O contato `João` deve aparecer na listagem com o telefone `11999999999`.
- A aplicação não deve travar ou apresentar erro de execução ao listar contatos.

Observações:
- Essa validação inicial foca em `src/contact.c` e no menu de interação ainda não implementado em `src/main.c`.
- Caso a persistência em arquivo ainda não esteja funcionando, o teste deve ser considerado como um primeiro passo para validar o fluxo de entrada e exibição dos dados.

## Situação atual de testes
- O código atual precisa ser ajustado antes que este caso de teste possa ser executado com sucesso.
- Após a correção de `src/storage.c`, deve-se verificar também a persistência em `data/contacts.txt`.
- Um próximo caso de teste deve incluir a remoção de contatos e a verificação de recarga de dados após reiniciar o programa.

## Histórico de testes executados
- Os casos de teste registrados são armazenados em `tests/`.
- Cada arquivo contém data, objetivo, comando, saída, erros e status.
- Exemplo: `tests/2026-06-09-add-list-persist.md`.
