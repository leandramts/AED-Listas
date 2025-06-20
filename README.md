# Lista de Exercícios 2 - Busca Sequencial e Binária

Este repositório contém as soluções para a Lista de Exercícios 2 de Algoritmos e Estruturas de Dados I, focada em Busca Sequencial e Binária. [cite_start]As questões foram elaboradas pelo Prof. Flávio José M. Coelho.

## Questões:

1.  **Classe `Course`:**
    [cite_start]Codifique uma classe chamada `Course` para representar uma disciplina de um curso de uma faculdade, contendo os seguintes campos: `courseName` (nome da disciplina, string), `courseNumber` (código da disciplina, string, campo chave) e `credits` (número de horas da disciplina, inteiro). [cite_start]Considere que a classe possui um construtor com parâmetros que recebe os valores de todos os campos. [cite_start]Escreva um método chamado `display` da classe `Course` para imprimir os campos conforme o exemplo abaixo. [cite_start]Escreva um programa principal que leia os campos de uma disciplina a partir do teclado e imprima a disciplina com o método `display`, de acordo com os seguintes exemplos:

    **Exemplo de Entrada/Saída:**
    ```
    Entrada:
    Matemática Discreta
    NCMD
    60
    Saída:
    Matemática Discreta, NCMD, 60h

    Entrada:
    Algoritmos e Estruturas de Dados 1
    NCAED1
    90
    Saída:
    Algoritmos e Estruturas de Dados 1, NCAED1, 90h
    [cite_start]``` 

2.  **Alocação Dinâmica de Vetores de `Course` e Impressão:**
    Escreva um programa principal que aloque dinamicamente um vetor de disciplinas cujo tamanho será lido como entrada do programa, assim como os dados de cada disciplina a ser inserida nesse vetor. Escreva um procedimento para imprimir cada disciplina do vetor e que utilize o método `display` da disciplina. Para isso, siga o seguinte formato de entrada e saída¹:

    **Exemplo de Entrada/Saída:**
    ```
    Entrada:
    3
    Matemática Discreta
    NCMD
    60
    Algoritmos e Estruturas de Dados 1
    NCAEDI
    90
    Projeto e Análise de Algoritmos
    NCPAA
    60
    Saída:
    Matemática Discreta, NCMD, 60h
    Algoritmos e Estruturas de Dados 1, NCAED1, 90h
    Projeto e Análise de Algoritmos, NCPAA, 60h
    ``` 
    ¹Você pode digitar uma entrada, linha por linha, em um arquivo texto. Depois, ao executar seu programa, você copia todas as linhas da sua entrada no arquivo texto e as cola onde seu programa está esperando pela entrada (pode ser em um terminal do S.O. ou na janela de entrada/saída da sua IDE ou editor de código). Dessa forma, todas as linhas coladas serão automaticamente lidas pelos comandos de entrada do seu programa, que prosseguirá até o processamento da saída.

3.  **Busca Sequencial por Chave (sem Sentinela):**
    Estenda o programa da questão anterior e codifique uma função para uma busca sequencial por chave (sem sentinela) para tentar encontrar uma disciplina no vetor de disciplinas. Na chamada da busca, caso a disciplina seja encontrada, mostre seus dados ; caso contrário, imprima uma mensagem conforme mostra o exemplo abaixo. A entrada requer a lista de disciplinas para povoar o vetor, seguida da chave de busca. Para isso, siga o seguinte formato de entrada e saída (NCAMMD e NCPAA em negrito, nas últimas linhas das duas entradas de exemplo, são as chaves de busca):

    **Exemplo de Entrada/Saída:**
    ```
    Entrada:
    4
    Matemática Discreta
    NCMD
    60
    Aprendizado de Máquina e Mineração de Dados
    NCAMMD
    60
    Projeto e Análise de Algoritmos
    NCPAA
    60
    Algoritmos e Estruturas de Dados 1
    NCAED1
    90
    NCAMMD
    Saída:
    Aprendizado de Máquina e Mineração de Dados, NCAMMD, 60h

    Entrada:
    3
    Matemática Discreta
    NOMD
    60
    Aprendizado de Máquina e Mineração de Dados
    NCAMMD
    60
    Algoritmos e Estruturas de Dados 1
    NCAED1
    90
    NCPAA
    Saída:
    Nenhuma disciplina com código NCPAA foi encontrada.
    ``` 

4.  **Busca Sequencial com Sentinela:**
    Crie uma nova versão do código do exercício anterior empregando uma busca sequencial com sentinela. Nas buscas em que a sentinela for encontrada, imprima o valor da posição da sentinela no vetor de disciplinas.

5.  **Busca Binária:**
    Crie uma nova versão do código do exercício anterior que empregue uma busca binária. Em lugar de imprimir as disciplinas como saída, imprima apenas o número de vezes em que o vetor de disciplinas é dividido ao meio durante a busca.
