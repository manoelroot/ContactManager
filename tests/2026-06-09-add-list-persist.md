# Teste: 2026-06-09 — Adicionar, Listar e Persistir Contatos

## Data
- 2026-06-09

## Objetivo
- Validar os fluxos de adicionar contato, listar contatos e persistir em arquivo.

## Comando
```bash
printf '1
João
11999999999
2
3
' | ./contactmanager
```

## Saída
- Programa exibiu o menu principal.
- Solicitou dados de contato e aceitou nome e telefone.
- Listou o contato `João` com telefone `11999999999`.
- Salvou os contatos antes de encerrar.

## Erros
- Nenhum erro observado.

## Status
- sucesso

## Observações
- O diretório `data/` foi criado automaticamente.
- O arquivo `data/contacts.txt` foi salvo com o contato adicionado.
- Foi verificado que o contato é recarregado na execução subsequente.
