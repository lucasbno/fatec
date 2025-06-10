# Sistemas Operacionais II - Resumo

## Introdução ao Linux

- Linux é o kernel, criado por Linus Torvalds em 1991.
- GNU/Linux = kernel Linux + ferramentas GNU.
- Software livre: pode usar, estudar, modificar e compartilhar.
- Quatro liberdades: executar, estudar, redistribuir, melhorar.
- Mascote: Tux.

---

## Distribuições

- Várias versões, feitas por grupos ou empresas.
- Ubuntu: baseada em Debian, fácil, gratuita.

---

## CLI - Command Line Interface

- Terminal poderoso, acesso total ao sistema.
- Permite configurações avançadas.

---

## Estrutura de Diretórios e Sistemas de Arquivos

- Organização em árvore, tudo começa na raiz `/`.
- Diretórios importantes: `/bin`, `/home`, `/etc`, `/tmp`, etc.
- Sistemas de arquivos comuns: EXT, BTRFS.

---

## Tipos Básicos de Arquivos

- Arquivos comuns: dados e programas.
- Diretórios: listas de arquivos.
- Especiais: representam dispositivos.
- Características: diferencia maiúsculas/minúsculas, nomes longos, arquivos ocultos começam com "."

---

## Permissões de Arquivos

- Três grupos: proprietário (u), grupo (g), outros (o).
- Permissões: r (leitura), w (escrita), x (execução).
- Exemplo: `-rwxrw-r--`
- Comando para mudar: `chmod`, pode usar números (ex: 754).

---

## Diretórios e Caminhos

- Estrutura hierárquica, tudo parte da raiz `/`.
- Caminho absoluto começa com `/`, relativo depende do diretório atual.

---

# Roteiros de Laboratório

## Laboratório 6 - Linux

### Parte 1: Criação da Máquina Virtual

- Criar VM no VirtualBox, instalar Ubuntu Server, configurar rede, usar senha padrão.

### Parte 2: Instalação do Ubuntu Server

- Escolher idioma, teclado, rede, disco. Não instalar OpenSSH/snaps. Login como administrador.

---

## Primeiros Comandos no Ubuntu Server

- vi: editar arquivos (`vi arquivo.txt`, `i` para editar, `:wq` para salvar).
- man: manual dos comandos.
- clear: limpa tela.
- ls: lista arquivos.
- cd: troca de diretório.
- mkdir/rmdir: cria/remove diretórios.
- rm: remove arquivos.
- pwd: mostra diretório atual.
- find: busca arquivos.

---

## Laboratório 7 - Linux

### Parte 1: Exercícios Práticos

- Praticar comandos: criar, copiar, mover, remover arquivos/diretórios.
- Verificar permissões, mudar permissões com `chmod`.
- Redirecionamento: `>` (sobrescreve), `>>` (acrescenta).
- cat/sort: mostrar e ordenar conteúdo de arquivos.

### Parte 2: Redirecionamento de Saída

- `>` salva saída em arquivo (sobrescreve).
- `>>` acrescenta ao final do arquivo.

### Parte 3: Comando grep

- grep: busca texto em arquivos, pode salvar resultado em outro arquivo.

### Parte 4: Curingas

- `*` substitui qualquer número de caracteres.
- `?` substitui um caractere.

### Parte 5: Visualizando Arquivos

- head/tail: primeiras/últimas linhas.
- tac: mostra arquivo ao contrário.

### Parte 6: Pipe

- `|` conecta comandos (ex: `cat arquivo | sort`).

### Parte 7: Comando uname

- Mostra informações do sistema.

### Parte 8: Comando lshw

- Mostra detalhes do hardware.

### Parte 9: Compactação com tar

- tar: empacota e compacta arquivos.

---

## Laboratório 8 - Linux

### Parte 1: Gerenciamento de Usuários e Grupos

- groupadd: cria grupo.
- useradd: cria usuário.
- passwd: define senha.
- userdel: remove usuário.

### Parte 2: Alterar Proprietário e Grupo

- chown: muda dono e grupo de arquivos.
- chmod: muda permissões.

### Parte 3: Usando apt-get

- apt-get update/upgrade: atualiza sistema.
- apt-get install/remove: instala/remove programas.

### Parte 4: Instalando Apache

- Instalar Apache, configurar rede, editar página inicial.

---

## Laboratório 9 - Linux

### Parte 1: Gerenciamento de Processos

- ps aux: lista processos.
- top: monitora uso do sistema.
- kill: encerra processo.
- Estados: executando, dormindo, zumbi, órfão.
- Prioridade: nice/renice ajustam prioridade de processos.

### Parte 2: Daemons, Serviços e Processos

- Daemon: processo em segundo plano (ex: sshd, apache2).
- service: gerencia serviços (start, stop, restart,
