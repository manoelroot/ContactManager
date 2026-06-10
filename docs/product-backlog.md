# Product Backlog Inicial

Este documento contém os itens principais a serem desenvolvidos para o projeto ContactManager.

## Épicos e Itens

### 1. Gerenciamento de Contatos
- **PB-001**: Como usuário, quero adicionar um contato para armazenar informações pessoais.
- **PB-002**: Como usuário, quero listar todos os contatos salvos para visualizar meu catálogo.
- **PB-003**: Como usuário, quero buscar contatos por nome ou telefone para encontrar um registro rapidamente.
- **PB-004**: Como usuário, quero remover um contato para manter a lista atualizada.

### 2. Persistência de Dados
- **PB-005**: Como usuário, quero salvar contatos em arquivo para manter os dados entre execuções.
- **PB-006**: Como usuário, quero carregar contatos do arquivo ao iniciar o programa para retomar meu catálogo.

### 3. Interface de Terminal
- **PB-007**: Como usuário, quero um menu interativo no terminal para executar ações de forma clara.
- **PB-008**: Como usuário, quero mensagens de sucesso e erro para entender o resultado das operações.

### 4. Documentação e Qualidade
- **PB-009**: Como desenvolvedor, quero documentação de requisitos e arquitetura para orientar o desenvolvimento.
- **PB-010**: Como desenvolvedor, quero testes básicos para validar as funcionalidades principais.

## Prioridade Inicial
1. PB-001: Adicionar contato
2. PB-002: Listar contatos
3. PB-005: Salvar contatos em arquivo
4. PB-006: Carregar contatos do arquivo
5. PB-003: Buscar contatos
6. PB-004: Remover contatos
7. PB-007: Menu de terminal
8. PB-008: Mensagens do sistema
9. PB-009: Documentação
10. PB-010: Testes básicos

## Notas
- Este backlog inicial serve de base para o planejamento das próximas sprints.
- Os itens podem ser refinados e divididos à medida que o projeto avança.

## Planejamento de sprints

### Sprint 1 — 09/06/2026 a 16/06/2026
- **Meta:** estabilizar a versão CLI completa e a persistência local.
- **Itens principais:** PB-001, PB-002, PB-005, PB-006, PB-003.
- **Critérios de aceitação:** o sistema adiciona, lista, busca, remove e salva contatos localmente; o fluxo CLI está validado.

### Sprint 2 — 17/06/2026 a 23/06/2026
- **Meta:** introduzir PostgreSQL como backend e automação com Python.
- **Itens principais:** PB-005 (evolução), PB-006 (evolução), PB-009.
- **Critérios de aceitação:** existe script de migração Python; o banco PostgreSQL armazena e recupera contatos.

### Sprint 3 — 24/06/2026 a 30/06/2026
- **Meta:** criar a primeira interface gráfica do projeto.
- **Itens principais:** PB-007, PB-008, PB-009.
- **Critérios de aceitação:** protótipo de UI está funcional para as operações básicas; a experiência é mais intuitiva que o CLI.

## Aceites
- Cada item do backlog deve ser entregável, testável e documentado.
- O prazo de cada sprint deve ser respeitado sempre que possível, com revisão diária de progresso no diário.
- A documentação deve refletir claramente as mudanças na arquitetura e a evolução do backend.

<!--A atualização frequente do documento é estritamente necessaria para rastrear decisões-->