# ContactManager
---

ContactManager é um protótipo de sistema de gerenciamento de contatos para terminal desenvolvido em C.

![MVP planejado do ContactManager](docs/diagramas/mvp-projeto-final.svg)

O projeto foca em:
- operações básicas de cadastro, consulta, remoção e persistência de contatos.
- organização modular de código em `include/` e `src/`.
- documentação técnica e rastreamento do desenvolvimento.

# Objetivo

Permitir que um usuário manipule contatos em linha de comando e mantenha os dados gravados localmente em arquivo.

# Escopo atual

* Adicionar contatos
* Listar contatos
* Buscar contatos
* Remover contatos
* Salvar contatos em arquivo
* Carregar contatos ao iniciar

# Estrutura do projeto

```
ContactManager/
├─ README.md
├─ LICENSE
├─ docs/
│  ├─ README.md
│  ├─ arquitetura.md
│  ├─ casos-de-uso.md
│  ├─ fluxos.md
│  ├─ modelos-de-dados.md
│  ├─ product-backlog.md
│  ├─ requisitos.md
│  ├─ resultados.md
│  ├─ testes.md
│  └─ diario/
│     └─ diario.md
├─ include/
│  ├─ contact.h
│  └─ storage.h
└─ src/
   ├─ main.c
   ├─ contact.c
   └─ storage.c
```

# Como compilar

O projeto ainda está em desenvolvimento. Para compilar após corrigir as implementações, use:

```bash
mkdir -p data
gcc -Iinclude src/main.c src/contact.c src/storage.c -o contactmanager
```

# Status do projeto

* Implementação parcial em `src/contact.c`.
* Interface de persistência definida em `include/storage.h`.
* `src/storage.c` ainda precisa de correção e validação.
* `src/main.c` ainda não contém o menu principal e o fluxo de execução.

# Documentação

* `docs/README.md` — índice da documentação do projeto.
* `docs/requisitos.md` — requisitos funcionais e não funcionais.
* `docs/arquitetura.md` — arquitetura do sistema em C.
* `docs/casos-de-uso.md` — casos de uso e diagramas.
* `docs/fluxos.md` — fluxos operacionais do sistema.
* `docs/modelos-de-dados.md` — modelo de dados e formato de persistência.
* `docs/product-backlog.md` — backlog de funcionalidades.
* `docs/resultados.md` — resultados concluídos.
* `docs/testes.md` — casos de teste.
* `docs/diario/diario.md` — histórico de desenvolvimento.
* `CONTRIBUTING.md` — guia de convenção de commits.

# Convenção de commits

Use prefixos de commit para organizar o histórico do projeto:

- `STR:` — estrutura e refatoração
- `FEAT:` — nova implementação ou função
- `FIX:` — correções de bug
- `TEST:` — testes, builds e validações
- `DOCS:` — documentação
- `CHORE:` — manutenção geral

# Observações

O projeto está em fase de desenvolvimento e a documentação foi reorganizada para refletir o estado atual do código e do planejamento.
