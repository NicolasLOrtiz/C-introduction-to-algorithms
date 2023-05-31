# 1.1 Algorithms
Algoritmos são processo computacionais para resolver um problema. Eles têm três etapas: 
1. Input, a entrada de dados
2. Processes, o processo realizados nos dados
3. Output, o resultado no processo com resultado no Input

## Conjectura P ≠ NP
A conjectura P ≠ NP é um dos problemas mais importantes e difíceis na ciência da computação. Ela afirma que existem problemas que podem ser resolvidos em tempo polinomial por uma máquina de Turing não-determinística (NP), mas não por uma máquina de Turing determinística (P).

Em outras palavras, a conjectura afirma haver problemas para os quais não existe um algoritmo eficiente que possa encontrar uma solução, mas se uma solução for dada, ela pode ser verificada em um tempo razoável. Por exemplo, o problema de encontrar um caminho mais curto em um grafo é um problema P, pois pode ser resolvido em tempo polinomial, mas o problema de encontrar o caminho mais curto em um grafo que passe por todos os seus vértices é um problema NP-completo, pois ainda não foi encontrado um algoritmo eficiente para resolvê-lo.

A resolução da conjectura P ≠ NP tem implicações significativas em diversas áreas, como criptografia, inteligência artificial, biologia computacional, teoria dos jogos, entre outras. Se a conjectura for verdadeira, isso significa que muitos problemas que são difíceis de resolver na prática permanecerão assim, e que a criptografia baseada em problemas NP-completos, por exemplo, permanecerá segura. No entanto, se a conjectura for falsa, isso terá implicações igualmente significativas, como a possibilidade de se encontrar soluções eficientes para problemas NP-completos, o que teria um grande impacto na tecnologia e na sociedade em geral.

## NP-completo
"NP-completo" se refere a uma classe de problemas na teoria da complexidade computacional considerados alguns dos problemas mais difíceis de resolver usando computadores.

Um problema NP-completo é um problema que pertence à classe NP (tempo polinomial não-determinístico), o que significa que uma solução pode ser verificada em tempo polinomial (ou seja, em um tempo proporcional ao tamanho da entrada). No entanto, os melhores algoritmos conhecidos para resolver problemas NP-completos têm complexidade de tempo exponencial, o que significa que o tempo necessário para resolver o problema cresce exponencialmente com o tamanho da entrada.

Muitos problemas importantes de otimização, como o problema do caixeiro-viajante e o problema da mochila, são NP-completos. Esses problemas têm aplicações em áreas como logística, agendamento e criptografia.

Apesar de sua dificuldade, os problemas NP-completos foram amplamente estudados em ciência da computação e matemática, e muitos algoritmos e heurísticas foram desenvolvidos para resolvê-los. No entanto, encontrar um algoritmo eficiente para resolver qualquer problema NP-completo teria implicações significativas para o campo da ciência da computação, já que provaria a conjectura amplamente aceita de que P ≠ NP, e teria implicações práticas para muitos problemas importantes do mundo real.

## Exercises
### 1.1-1
Um exemplo de "sorting" na realidade, é organizar um arranjo (Array) de filtro selecionado em ordem alfabética. A maneira comparar com o menor esforço seria comparar as iniciais em pares de palavras e caso fosse a mesma letra, passar para a próxima letra. Com isso ir alterando a ordem do arranjo conforme as palavras esteja na frente ou atrás em comparação com o par comparado

### 1.1-2
Além da velocidade de um algoritmo, acho importante considerar a manutenibilidade, a resiliência a erros, a confiabilidade e a qualidade do código. Além disso, alguns que não pensei enquanto desenvolvia a resposta: consumo de recursos; facilidade de uso; Adaptabilidade.

### 1.1-3
Uma estrutura de dados são as matrizes. Elas são conjuntos de array de duas dimensões. Acredito que o ponto negativo de utilizá-las é a complexidade adicional na manipulação dos dados.

### 1.1-4
São semelhantes por ter como objetivo buscar a menor distância percorrida. A diferença é que no problema do caminho mais curto, é a distância entre dois pontos. Já no traveling-salesperson temos múltiplas combinações entre os pontos.

### 1.1-5
Um problema que apenas a melhor solução é eficiente é a orientação da navegação da torre de comando da torre de comando de um aeroporto. Qualquer erro nas instruções pode gerar tragédias com muitas vítimas. 

Já um que a melhor solução aproximada é uma rota de GPS para um determinado destino em uma cidade grande. É possível ter vários caminhos com várias condições de trânsito e distâncias de rotas.

### 1.1-6
Um exemplo de problema que às vezes tem toda a entrada disponível é as eleições, já que todos os votos são inseridos e depois computados. Já um exemplo que não faz diferença são as campanhas personalizadas de marketing baseada nos dados pessoais coletados na internet, com poucas informações é possível sugerir opções de compra. 


