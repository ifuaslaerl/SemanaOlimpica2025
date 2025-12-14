# Semana Olímpica de Informática UFRJ 2025

Seja muito bem-vindo(a) ao repositório oficial de soluções da **Semana Olímpica 2025**, organizada pela **UFRJ**. Este espaço foi criado para centralizar os códigos, exemplos e gabaritos das atividades realizadas durante a nossa semana de treinamento intensivo.

---

## Para os Alunos

Parabéns por participar da Semana Olímpica! Sabemos que a jornada na Programação Competitiva é desafiadora, mas cada problema resolvido é um passo rumo à medalha.

### Como usar este repositório?
1.  **Tente primeiro:** A melhor forma de aprender é "quebrar a cabeça". Só consulte o gabarito depois de tentar resolver o problema sozinho ou de ter discutido com colegas.
2.  **Estude o código:** Não faça apenas *copy-paste*. Leia os comentários, entenda a lógica e a complexidade do algoritmo utilizado.
3.  **Dúvidas:** Se mesmo com o código a solução não ficou clara, procure um dos monitores ou instrutores no nosso discord!

### Estrutura dos Conteúdos
O material está organizado cronologicamente e por tópicos para facilitar seus estudos:

* **📁 Dia 1:** Introdução ao C++
* **📁 Dia 2:** Complexidade e STL (Standard Template Library)
* **📁 Dia 3:** Busca Binária
* **📁 Dia 4:** Grafos (DFS, BFS, etc.)
* **📁 Dia 5:** Simulado OBI

Dentro de cada dia, você encontrará:
* `/Aula`: Códigos feitos ao vivo pelos professores para exemplificar a teoria.
* `/Contest`: As soluções (gabaritos) dos problemas passados nas listas de exercícios.

### 🚧 Conteúdo em Construção

Este repositório está sendo atualizado de forma gradual.

Se você precisa da resolução de uma questão específica que ainda não apareceu por aqui, **nos avise no Discord**! Daremos prioridade para ajudá-lo. Além disso, qualquer dúvida sobre os códigos ou exercícios pode ser tirada diretamente por lá. Conte com a gente!

---

## Para Instrutores e Monitores

Obrigado por contribuir com o aprendizado dos alunos! Para mantermos o repositório organizado e didático, por favor, sigam as diretrizes abaixo ao subirem seus códigos.

### Padrões de Contribuição

1.  **Localização dos Arquivos:**
    Certifique-se de salvar o código na pasta correta referente ao dia e ao tipo de atividade (`Aula` ou `Contest`).
    * *Exemplo:* `Dia3-BuscaBinaria/Contest/nome_da_questao.cpp`

2.  **Nomeação de Arquivos:**
    Mantenha o padrão da lista e use o nome oficial do problema (ex: `message_route.cpp`), mas evite nomes genéricos como `a.cpp`.

3.  **Comentários Didáticos:**
    Lembre-se: o público-alvo são alunos aprendendo o conteúdo. Sempre que usar uma técnica mais avançada ou uma "sacada" lógica, adicione comentários explicativos.

```cpp
    // Exemplo de boa prática:
    // Utilizamos long long pois a soma pode exceder 2^31 - 1
    long long soma = 0; 
    
    // Busca Binária na resposta da funcao
    while (l <= r) { ... }
```

4.  **Template Básico:**
    Utilize o template padrão de competição (como `#include <bits/stdc++.h>`) e `ios_base::sync_with_stdio(0);` para facilitar a leitura, mas evite macros excessivamente obscuras que possam confundir os iniciantes.

5. **Funções do STL**
    Utilize somente o necessário de funções do c++. Por exemplo, em um contest para aprender busca binária não faz sentido usar o find(), lower_bound() e upper_bound() pré implementado.
    Se possível, evite usarem set, multiset, map e estruturas similares.

### Como atualizar o repositório
1.  Faça um `git pull` antes de começar para garantir que você tem a versão mais recente.
2.  Adicione seus arquivos: `git add .`
3.  Faça o commit com uma mensagem clara: `git commit -m "Adiciona solução do problema C do Dia 4"`
4.  Envie para o remoto: `git push`

# Desenvolvedores do repositório:

> Adicionem o nome de vocês aqui!

[Luís Rafael Sena](https://github.com/ifuaslaerl)

---

## Bons estudos!

*Equipe da Semana Olímpica de Informática - UFRJ 2025*
