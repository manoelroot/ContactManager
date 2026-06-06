# Convenção de Commits

Este projeto utiliza um padrão de mensagens de commit para manter o histórico organizado e fácil de entender.

## Prefixos de commit

Use um dos seguintes prefixos no início da mensagem de commit:

- `STR:` — alterações de estrutura, reorganização de pastas, refatoração e ajustes de arquitetura.
- `FEAT:` — nova implementação, nova função ou nova funcionalidade.
- `FIX:` — correções de bugs ou problemas do código.
- `TEST:` — criação ou atualização de testes, scripts de build ou validações.
- `DOCS:` — alterações na documentação do projeto.
- `CHORE:` — tarefas de manutenção, limpeza, formatação, dependências e outros ajustes gerais.

## Modelo de mensagem

Formato recomendado:

```
PREFIX: breve descrição do que mudou

Detalhes opcionais sobre a mudança e o motivo.
```

Exemplos:

- `STR: reorganize documentação e atualize estrutura de projetos`
- `FEAT: adicionar menu principal em src/main.c`
- `FIX: corrigir leitura de arquivo em src/storage.c`
- `TEST: adicionar caso de teste para listagem de contatos`
- `DOCS: documentar convenção de commits e fluxo do projeto`

## Boas práticas

- Use o prefixo correto para o tipo de mudança.
- Mantenha a descrição curta e clara.
- Adicione mais detalhes no corpo do commit quando necessário.
- Use inglês ou português de forma consistente em todo o repositório.
