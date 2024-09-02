# Conversão de Números Decimais para Binário em C

## Descrição
Este projeto em C implementa um programa para converter números decimais positivos em seus equivalentes binários. A conversão é realizada utilizando uma estrutura de pilha, que armazena os restos da divisão por 2 durante o processo de conversão.

## Funcionalidades
- **Conversão Decimal para Binário**: Converte um número decimal positivo inserido pelo usuário em seu equivalente binário.
- **Utilização de Pilha**: O programa utiliza uma pilha para armazenar os restos das divisões sucessivas, permitindo a construção do número binário na ordem correta.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o binario binario.c tad_pilha2.c
   ```
2. Execute o programa:
   ```bash
   ./binario
   ```
3. Insira um número decimal positivo quando solicitado, e o programa exibirá o número binário correspondente.

## Exemplo de Uso
Ao executar o programa, você será solicitado a inserir um número decimal:
```plaintext
Digite um inteiro decimal positivo: 10
O correspondente binario é: 1010
Deseja mais um numero(s/n)? s
Digite um inteiro decimal positivo: 15
O correspondente binario é: 1111
Deseja mais um numero(s/n)? n
```

## Estrutura de Dados
O projeto utiliza uma pilha (`tipo_pilha`) para armazenar os restos da divisão por 2, que são posteriormente desempilhados para formar o número binário. A pilha é gerenciada pela biblioteca `tad_pilha2.h`, que oferece funções para criar a pilha, empilhar e desempilhar elementos, e verificar se a pilha está vazia.

## Funções Principais
- **criarPilha(tipo_pilha *p)**: Inicializa uma pilha vazia.
- **empilharElemento(tipo_pilha *p, elemento e)**: Empilha um novo elemento.
- **desempilharElemento(tipo_pilha *p, elemento *e)**: Remove e retorna o elemento do topo da pilha.
- **pilhaVazia(tipo_pilha p)**: Verifica se a pilha está vazia.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
