## Perguntas Extras

1. Explique o que significa cada uma destas características do Linux:

a. **Case sensitive:**  
R: Distingue maiúsculas de minúsculas em nomes de arquivos e comandos.

b. **Sistema aberto:**  
R: Código-fonte disponível para qualquer um estudar, modificar e distribuir.

c. **Multitarefa:**  
R: Executa vários programas/processos ao mesmo tempo.

d. **Multiusuário:**  
R: Permite que vários usuários usem o sistema simultaneamente.

---

2. O Linux é um sistema operacional ou um kernel?  
R: O Linux é um kernel, não um sistema operacional completo.

---

3. O que é um sistema de arquivos?  
R: É o método usado pelo sistema operacional para organizar, armazenar e acessar arquivos em um disco.

---

4. Explique a função dos diretórios logo abaixo do diretório raiz (/):

- bin: Programas essenciais do sistema.  
- boot: Arquivos de inicialização do sistema.  
- dev: Arquivos de dispositivos.  
- etc: Arquivos de configuração.  
- home: Diretórios dos usuários.  
- lib: Bibliotecas essenciais.  
- media: Pontos de montagem de mídias removíveis.  
- mnt: Pontos de montagem temporários.  
- opt: Programas opcionais.  
- root: Home do usuário root.  
- sbin: Programas de administração do sistema.  
- tmp: Arquivos temporários.  
- usr: Programas e dados de usuários.  
- var: Arquivos variáveis (logs, filas).

---

5. O que significa o Linux ter uma estrutura de diretório em árvore?  
R: Todos os diretórios e arquivos partem de um único diretório raiz `/`, formando uma estrutura hierárquica.

---

6. Qual é o caminho absoluto do arquivo "vendas.jan.16" dentro do diretório "luizinho"?  
R: `/home/luizinho/vendas.jan.16`

---

7. Qual é o caminho relativo do arquivo "vendas.jan.16" a partir do diretório "huguinho"?  
R: `../luizinho/vendas.jan.16`

---

8. O que significa o conteúdo das colunas A até E do comando `ls -al`?

- A: Permissões  
- B: Número de links  
- C: Usuário dono  
- D: Grupo dono  
- E: Tamanho do arquivo

---

9. O que cada grupo de informação representa na coluna A?

1. Tipo de arquivo  
2. Permissões do usuário dono  
3. Permissões do grupo  
4. Permissões dos outros

---

10. O que significam as letras r, w e x?

- r: leitura  
- w: escrita  
- x: execução

---

11. O que significa o "-" na coluna 1? E se fosse "d"?

- "-": Arquivo comum  
- "d": Diretório

---

12. Permissões do arquivo "- r w x r - x - - -":

- Usuário dono: leitura, escrita e execução  
- Grupo: leitura e execução  
- Outros: sem permissão

---

13. O que significam os números 754 no comando `chmod 754 arquivo.teste`?

- 7 (user): rwx  
- 5 (group): r-x  
- 4 (others): r--  
O comando dá todas as permissões ao dono, leitura e execução ao grupo, e só leitura aos outros.

---

14. O que significam os elementos do prompt de comando?

- `jrs`: nome do usuário  
- `@ubusrv-gui`: nome do computador  
- `~`: diretório home do usuário  
- `$`: usuário comum

---

15. O que significa o símbolo "#" no lugar do "$" no prompt?  
R: Indica que está logado como root (administrador).

---

---

## Laboratório 7 - Linux

**PARTE 1**
1. Logue-se como usuário administrador e em seguida eleve sua sessão para root.  
R: Use o comando `sudo -i` ou `su` para virar root.

2. Vá para o diretório raiz do sistema (/)  
R: Use `cd /`.

3. Crie um diretório chamado testeaula logo abaixo do raiz.  
R: `mkdir /testeaula`

4. Entre neste diretório.  
R: `cd /testeaula`

5. Utilizando um editor, crie um arquivo chamado alunos.ads com o seguinte conteúdo:  
R: Use `nano alunos.ads` ou `vi alunos.ads` e digite o conteúdo.

6. Salve e saia do editor.  
R: No nano, `Ctrl+O` para salvar e `Ctrl+X` para sair. No vi, `:wq`.

7. Confirme que você se encontra no diretório /testeaula.  
R: Use `pwd` e veja se mostra `/testeaula`.

8. Liste os arquivos deste diretório, com detalhes.  
R: `ls -l`

9. Quem é o proprietário deste arquivo e quais são suas permissões?  
R: Veja na saída do `ls -l`, normalmente o root é o dono e as permissões aparecem na esquerda.

10. Altere as permissões deste arquivo de modo que APENAS o dono (user) fique com rw- e o restante sem nenhuma permissão.  
R: `chmod 600 alunos.ads`

11. Renomeie o arquivo alunos.ads para alunos2.ads.  
R: `mv alunos.ads alunos2.ads`

12. Copie o arquivo alunos2.ads para alunos2.ads.atual no mesmo diretório em que se encontra. Verifique!  
R: `cp alunos2.ads alunos2.ads.atual` e depois `ls`

13. Apague o arquivo alunos2.ads. Verifique!  
R: `rm alunos2.ads` e depois `ls`

14. Confirme que você se encontra no diretório /testeaula e que nele só há o arquivo alunos2.ads.atual.  
R: Use `pwd` e `ls`

15. Execute o comando `cd ~` e diga o que aconteceu (pesquise, se for necessário).  
R: Você vai para o diretório home do usuário atual.

16. Confirme que está no diretório /root.  
R: Use `pwd` e veja se mostra `/root`.

17. Copie o arquivo alunos2.ads.atual que está em /testeaula para o diretório atual e verifique a cópia.  
R: `cp /testeaula/alunos2.ads.atual .` e depois `ls`

18. Execute o comando `cat alunos2.ads.atual` e diga o que aconteceu.  
R: Mostra o conteúdo do arquivo na tela.

19. Execute o comando `sort alunos2.ads.atual` e diga o que aconteceu.  
R: Mostra o conteúdo do arquivo em ordem alfabética.

**PARTE 2**
20. Explique o que os símbolos `>` e `>>` fazem (procure por “Linux redirecionamento de saída” no Google) e a diferença entre eles.  
R: `>` sobrescreve o arquivo, `>>` acrescenta ao final do arquivo.

21. Nos exercícios 18 e 19 o resultado dos comandos apenas foi exibido na tela do computador. Execute agora o comando `cat alunos2.ads.atual > alunos.velho` e em seguida use o `ls -l` para verificar o seu diretório atual. Execute também o comando `cat alunos.velho` para verificar. O que aconteceu?  
R: O conteúdo de alunos2.ads.atual foi salvo em alunos.velho.

22. No seu diretório atual (/root) execute agora o comando `sort alunos2.ads.atual >> alunos.velho` e novamente verifique o arquivo alunos.velho com o comando cat. O que aconteceu?  
R: O conteúdo ordenado foi adicionado ao final de alunos.velho.

**PARTE 3**
23. Execute o comando `grep MARIA alunos.velho` e diga o que aconteceu.  
R: Mostra as linhas do arquivo que contêm "MARIA".

24. Execute o comando `grep MARIA alunos.velho > aluno.maria` e diga o que aconteceu.  
R: Salva as linhas que contêm "MARIA" no arquivo aluno.maria.

25. Quantas vezes a palavra LUIZ foi repetida no arquivo alunos.velho?  
R: Use `grep -c LUIZ alunos.velho` para contar.

26. O que o comando `grep CARLA ./*` faz?  
R: Procura por "CARLA" em todos os arquivos do diretório atual.

**PARTE 4**
27. O que os curingas `*` e `?` representam?  
R: `*` substitui qualquer quantidade de caracteres; `?` substitui um único caractere.

28. Execute o comando `find / -name ls*` e explique o que este comando faz e também o resultado obtido.  
R: Procura por arquivos que começam com "ls" em todo o sistema.

29. Agora execute `find / -name ls?` e compare os resultados. Qual é a diferença deste resultado para o anterior?  
R: Procura arquivos com "ls" seguido de apenas um caractere; o anterior pega qualquer quantidade.

**PARTE 5**
30. Exiba as quatro primeiras linhas do arquivo alunos.velho.  
R: `head -n 4 alunos.velho`

31. Exiba as três últimas linhas do mesmo arquivo.  
R: `tail -n 3 alunos.velho`

32. Exiba este arquivo mostrando na tela o resultado ao contrário.  
R: `tac alunos.velho`

**PARTE 6**
33. O que faz o comando `cat alunos2.ads.atual | sort`?  
R: Mostra o conteúdo do arquivo em ordem alfabética.

34. O que faz o comando `cat alunos2.ads.atual | grep MARIA`?  
R: Mostra as linhas do arquivo que contêm "MARIA".

35. O que faz o comando `ls /bin | grep tty | sort`?  
R: Lista arquivos do /bin que têm "tty" no nome, em ordem alfabética.

36. O que faz o comando `ls /bin | grep tty | sort -r > comandostty`?  
R: Salva a lista dos arquivos com "tty" em ordem reversa no arquivo comandostty.

**PARTE 7**
37. Explique a função do comando `uname`. Faça testes em seu terminal.  
R: Mostra informações do sistema operacional.

**PARTE 8**
38. O que faz o comando `lshw`?  
R: Mostra detalhes do hardware do computador.

39. O que faz o comando `lshw -short`?  
R: Mostra um resumo do hardware.

40. O que faz o comando `lshw -c network`?  
R: Mostra informações sobre as placas de rede.

**PARTE 9**
41. Execute o comando: `tar -cvf todos.tar alunos2.ads.atual alunos.velho comandostty`  
R: Cria um arquivo todos.tar com os três arquivos dentro.

42. Liste os arquivos do diretório.  
R: `ls`

43. Foi criado um arquivo todos.tar com os três arquivos empacotados? Verifique o conteúdo com `tar -tvf todos.tar`.  
R: Sim, o comando mostra os arquivos dentro do todos.tar.

44. Estando em /root crie um diretório chamado todos.  
R: `mkdir todos`

45. Mude para /root/todos e copie o arquivo todos.tar para este diretório.  
R: `cd todos` e `cp ../todos.tar .`

46. Descompacte o arquivo todos.tar com o comando `tar -xvf todos.tar` e verifique o conteúdo deste diretório.  
R: Extrai os arquivos do todos.tar para o diretório atual.

---

## Laboratório 8 - Linux

**PARTE 1**
1. Crie um grupo chamado alunos com GID 4321.  
R: `groupadd -g 4321 alunos`

2. Crie um usuário chamado aluno1, com senha S3nh@aluno1, seu diretório em /home/aluno1 e que pertença ao grupo alunos.  
R: `useradd -m -d /home/aluno1 -g alunos aluno1`  
Depois: `passwd aluno1`

3. Crie um usuário chamado aluno2, com senha S3nh@aluno2, seu diretório em /home/aluno2 e que pertença ao grupo alunos.  
R: `useradd -m -d /home/aluno2 -g alunos aluno2`  
Depois: `passwd aluno2`

4. Use Alt-F2 para abrir uma nova sessão e logue-se com aluno1.  
R: Pressione Alt+F2 e faça login com aluno1.

5. Use Alt-F3 para abrir uma nova sessão e logue-se com aluno2.  
R: Pressione Alt+F3 e faça login com aluno2.

6. Estando na sessão de aluno1, teste o comando `who am i`.  
R: Mostra quem está logado e de onde.

7. Estando na sessão de aluno1, use `pwd` para verificar se está em seu diretório Home (/home/aluno1). Faça o mesmo com aluno2.  
R: `pwd` mostra o diretório atual, deve ser /home/aluno1 ou /home/aluno2.

8. Volte para a primeira sessão, a de root (Alt-F1) e exclua o aluno2, inclusive com seus arquivos. Caso dê um erro, volte à sessão de aluno2 (Alt-F3) e deslogue-se com comando exit.  
R: `userdel -r aluno2`

9. Volte à sessão de aluno1 e troque sua própria senha.  
R: `passwd`

**PARTE 2**
1. Na sessão de root (Alt-F1), entre no diretório Home de aluno1 (/home/aluno1).  
R: `cd /home/aluno1`

2. Crie aí um arquivo chamado teste.sh com o conteúdo: `echo "Testando..."`  
R: `echo 'echo "Testando..."' > teste.sh`

3. Salve o arquivo e mude suas permissões para 700.  
R: `chmod 700 teste.sh`

4. Teste sua execução, com `./teste.sh`.  
R: Deve aparecer "Testando..." na tela.

5. Você deve ver a palavra "Testando" em sua tela.  
R: Sim.

6. Agora, vá para a sessão de aluno1 (Alt-F2) e entre em seu diretório Home (/home/aluno1).  
R: `cd /home/aluno1`

7. Tente rodar o arquivo com `./teste.sh` e verá erro de permissão, certo?  
R: Sim, pois o dono é root.

8. Com o comando `ls -al` você verá que este arquivo, apesar de estar no diretório dele (aluno1), pertence a root root.  
R: Sim.

9. Volte à sessão de root (Alt-F1) e use o comando chown para permitir que o usuário aluno1, do grupo alunos, seja o novo proprietário deste arquivo.  
R: `chown aluno1:alunos teste.sh`

10. Volte à sessão de aluno1 e novamente tente executar o script.  
R: Agora deve funcionar.

**PARTE 3**
1. Como usuário root, faça a atualização de sua lista de pacotes.  
R: `apt-get update`

2. Em seguida, faça a atualização dos pacotes instalados.  
R: `apt-get upgrade`

3. Depois, instale o editor de textos joe.  
R: `apt-get install joe`

4. Edite um arquivo teste com o joe (joe teste).  
R: `joe teste`

5. Salve o arquivo e saia do editor. Veja no menu a opção correta!  
R: Ctrl+K, depois X para sair.

6. Remova o joe completamente, inclusive seus arquivos de configuração.  
R: `apt-get remove --purge joe`

7. Tente editar o arquivo teste novamente com o joe (joe teste) e verá que retornará um erro!  
R: Sim, joe não estará mais instalado.

**PARTE 4**
1. Faça a atualização de pacotes do sistema.  
R: `apt update` e `apt upgrade`

2. Instale o servidor Apache.  
R: `apt install apache2`

3. Altere a configuração da placa de rede para Bridge.  
R: No VirtualBox, ajuste a rede para "Bridge Adapter".

4. Reinicie a placa de rede.  
R: `ip link set <interface> down` e `ip link set <interface> up`

5. Verifique o endereço IP atribuído ao seu Linux.  
R: `ip a show`

6. Teste o serviço acessando pelo navegador do host.  
R: Digite o IP no navegador.

7. Faça uma cópia do arquivo index.html para index.html.original.  
R: `cp /var/www/html/index.html /var/www/html/index.html.original`

8. Edite o arquivo index.html e personalize a mensagem.  
R: `nano /var/www/html/index.html`

9. Atualize a página no navegador e veja a alteração.  
R: Recarregue a página.

---

## Laboratório 9 - Linux

**PARTE 1**
1. Logue-se e eleve sua sessão à root no primeiro terminal e crie um usuário aluno1.  
R: `useradd aluno1` e `passwd aluno1`

2. Logue o aluno1 na sessão 2 (Alt-F2). Volte à sessão do root (Alt-F1).  
R: Alt+F2, login com aluno1, depois Alt+F1.

3. Dê o comando top e analise a tela. Interprete as 5 linhas de cabeçalho. Responda: o processador de sua máquina está sendo muito usado? Qual é a memória total do seu sistema? Qual a quantidade de memória livre?  
R: As 5 linhas mostram uptime, usuários, tarefas, uso de CPU e memória total/livre. Veja os valores na tela.

4. Saia do top. Para encerrar, use CTRL-C ou Q.  
R: Pressione Ctrl+C ou Q.

5. Ainda como root, dê o comando ps aux e diga o que ele retorna.  
R: Lista todos os processos em execução.

6. Instale o apache2 (caso ainda não tenha feito) e inicie o serviço.  
R: `apt install apache2` e `service apache2 start`

7. Para filtrar a saída do comando da etapa 5, use grep para encontrar o serviço apache2.  
R: `ps aux | grep apache2`

8. Quais são os PIDs dos processos encontrados na questão anterior?  
R: Estão na segunda coluna da saída do comando acima.

9. Vá para a seção do aluno1 (Alt-F2) e execute o editor de textos vi. Não é preciso digitar nada. Deixe-o rodando...  
R: `vi`

10. Volte à sessão do administrador (Alt-F1). Descubra qual é o PID do vi que está sendo executado por aluno1. Anote.  
R: Use `ps aux | grep vi` e veja o PID.

11. Qual é o "terminal" (sessão) onde está sendo executado o vi de aluno1? (procure por tty...)  
R: Veja na coluna "TTY" da saída do `ps aux | grep vi`.

12. Mate este processo (vi de aluno1) usando o comando kill, forçando seu encerramento.  
R: `kill -9 <PID>`

13. Volte à sessão de aluno1 e confira se o editor foi finalizado.  
R: O vi deve ter fechado.

14. Ainda como aluno1, carregue o vi novamente, deixe-o aberto e volte à sessão do root.  
R: `vi`

15. Descubra novamente o PID deste novo processo (vi de aluno1).  
R: `ps aux | grep vi`

16. Estude os possíveis estados de Processos em Linux. Faça um pequeno resumo de cada um deles e explique também o que é um processo “órfão”.  
R:  
- R: executando  
- S: dormindo  
- D: esperando E/S  
- Z: zumbi  
- T: parado  
Processo órfão: processo cujo pai terminou antes dele.

17. Explique o que são e a diferença entre Prioridade (Priority) e Nice, e também explique como funcionam os comandos nice e renice.  
R: Prioridade define ordem de execução. Nice ajusta prioridade do processo. `nice` inicia com prioridade diferente, `renice` altera de processo já rodando.

18. Explique o que são processos Zumbis no Linux.  
R: Processos que já terminaram, mas ainda aparecem na tabela de processos porque o pai não leu seu status.

**PARTE 2**
a. O que é o “init” em um sistema Linux?  
R: É o primeiro processo iniciado pelo kernel, responsável por iniciar os demais processos.

b. Dê alguns exemplos de daemons Linux.  
R: sshd, crond, cupsd, apache2.

1. Instale o apache2 usando o apt-get install apache2 (qual é o procedimento que deve ser feito antes de instalar um novo binário?).  
R: Atualizar a lista de pacotes com `apt-get update`.

2. Verifique qual é o status atual do serviço apache2.  
R: `systemctl status apache2`

3. Ele está rodando? Qual seu PID?  
R: Veja na saída do comando acima.

4. Qual é o comando para reiniciá-lo? Faça!  
R: `systemctl restart apache2`

5. Qual é o seu novo PID? Como verificou?  
R: Veja na saída do `systemctl status apache2` ou `ps aux | grep apache2`.

6. Agora, pare-o. Qual comando usou?  
R: `systemctl stop apache2`

7. E por fim, inicie-o novamente.  
R: `systemctl start apache2`

8. Verifique o status e confirme que está rodando...  
R: `systemctl status apache2`
