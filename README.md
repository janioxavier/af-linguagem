# af-linguagem

## Como executar no ambiente linux com flex e yacc instalados?

### opção 1:

#### 1. Dê permissão ao arquivo Makefile

chmod +x Makefile

#### 2. Execute o arquivo makefile

./Makefile

#### 3. Execute o analisador passando o arquivo de test

parse < test1.txt

### opção 2:

#### 1. execute os comandos:

flex af.lex
yacc -vd af.y
gcc lex.yy.c y.tab.c -o parse

#### 2. execute o analisador passando o arquivo de test

parse < test1.txt
