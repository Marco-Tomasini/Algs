Algoritmo "Trabalho_1_Estrutura_Condicional"

Var
SorM, censura, categoria, fornecedor, resultado: inteiro

Inicio

   // Tabela de Filmes e Series:
   //
   // Tipo: 1 - Filme | 2 - Serie
   // Censura: 0 - Livre | 10 - 10 anos | 12 - 12 anos | 14 - 14 anos | 18 - 18 anos
   // Categoria: 1 - Acao | 2 - Comedia | 3 - Drama | 4 - Suspense/Ficcao | 5 - Romance
   // Fornecedor: 1 - Netflix | 2 - Amazon Prime | 3 - Disney+ | 4 - HBO Max
   //
   // Titulo                         | Tipo | Censura | Categoria | Fornecedor
   // -----------------------------------------------------------------------
   // Vingadores: Ultimato           | 1    | 12      | 1         | 3
   // Divertida Mente                | 1    | 0       | 2         | 3
   // Interestelar                   | 1    | 10      | 4         | 2
   // A Culpa e das Estrelas         | 1    | 12      | 5         | 4
   // John Wick                      | 1    | 18      | 1         | 2
   // Stranger Things                | 2    | 14      | 4         | 1
   // Friends                        | 2    | 10      | 2         | 4
   // The Last of Us                 | 2    | 18      | 3         | 4
   // La Casa de Papel               | 2    | 18      | 1         | 1
   // Anne with an E                 | 2    | 10      | 3         | 1

   resultado <- 0

   escreval("Voce quer assistir filme ou serie?")
   escreval("1 - Filme")
   escreval("2 - Serie")
   escreva("Digite a opcao: ")
   leia(SorM)

   escreval("")
   escreval("==============================================")
   escreval(" TITULOS PELO TIPO ESCOLHIDO")
   escreval("==============================================")/n

   se SorM = 1 entao
      escreval("- Vingadores: Ultimato")
      escreval("- Divertida Mente")
      escreval("- Interestelar")
      escreval("- A Culpa e das Estrelas")
      escreval("- John Wick")
   senao
      se SorM = 2 entao
         escreval("- Stranger Things")
         escreval("- Friends")
         escreval("- The Last of Us")
         escreval("- La Casa de Papel")
         escreval("- Anne with an E")
      senao
         escreval("Opcao de tipo invalida.")
      fimse
   fimse

   escreval("")
   escreval("Voce tem preferencia por censura?")
   escreval("-1 - Sem preferencia")
   escreval("0  - Livre")
   escreval("10 - 10 anos")
   escreval("12 - 12 anos")
   escreval("14 - 14 anos")
   escreval("18 - 18 anos")
   escreva("Digite a opcao: ")
   leia(censura)

   escreval("")
   escreval("==============================================")
   escreval(" TITULOS APOS CENSURA ESCOLHIDA")
   escreval("==============================================")

   resultado <- 0

   se ((SorM = 1) e ((censura = -1) ou (censura = 12))) entao
      escreval("- Vingadores: Ultimato")
      resultado <- 1
   fimse

   se ((SorM = 1) e ((censura = -1) ou (censura = 0))) entao
      escreval("- Divertida Mente")
      resultado <- 1
   fimse

   se ((SorM = 1) e ((censura = -1) ou (censura = 10))) entao
      escreval("- Interestelar")
      resultado <- 1
   fimse

   se ((SorM = 1) e ((censura = -1) ou (censura = 12))) entao
      escreval("- A Culpa e das Estrelas")
      resultado <- 1
   fimse

   se ((SorM = 1) e ((censura = -1) ou (censura = 18))) entao
      escreval("- John Wick")
      resultado <- 1
   fimse

   se ((SorM = 2) e ((censura = -1) ou (censura = 14))) entao
      escreval("- Stranger Things")
      resultado <- 1
   fimse

   se ((SorM = 2) e ((censura = -1) ou (censura = 10))) entao
      escreval("- Friends")
      resultado <- 1
   fimse

   se ((SorM = 2) e ((censura = -1) ou (censura = 18))) entao
      escreval("- The Last of Us")
      resultado <- 1
   fimse

   se ((SorM = 2) e ((censura = -1) ou (censura = 18))) entao
      escreval("- La Casa de Papel")
      resultado <- 1
   fimse

   se ((SorM = 2) e ((censura = -1) ou (censura = 10))) entao
      escreval("- Anne with an E")
      resultado <- 1
   fimse

   se resultado = 0 entao
      escreval("Nenhum titulo encontrado apos o filtro de censura.")
   fimse

   escreval("")
   escreval("Voce tem preferencia por categoria?")
   escreval("0 - Sem preferencia")
   escreval("1 - Acao")
   escreval("2 - Comedia")
   escreval("3 - Drama")
   escreval("4 - Suspense/Ficcao")
   escreval("5 - Romance")
   escreva("Digite a opcao: ")
   leia(categoria)

   escreval("")
   escreval("==============================================")
   escreval(" TITULOS APOS O CATEGORIA ESCOLHIDA")
   escreval("==============================================")

   resultado <- 0

   se (((SorM = 1) e ((censura = -1) ou (censura = 12))) e ((categoria = 0) ou (categoria = 1))) entao
      escreval("- Vingadores: Ultimato")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 0))) e ((categoria = 0) ou (categoria = 2))) entao
      escreval("- Divertida Mente")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 10))) e ((categoria = 0) ou (categoria = 4))) entao
      escreval("- Interestelar")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 12))) e ((categoria = 0) ou (categoria = 5))) entao
      escreval("- A Culpa e das Estrelas")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 18))) e ((categoria = 0) ou (categoria = 1))) entao
      escreval("- John Wick")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 14))) e ((categoria = 0) ou (categoria = 4))) entao
      escreval("- Stranger Things")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 10))) e ((categoria = 0) ou (categoria = 2))) entao
      escreval("- Friends")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 18))) e ((categoria = 0) ou (categoria = 3))) entao
      escreval("- The Last of Us")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 18))) e ((categoria = 0) ou (categoria = 1))) entao
      escreval("- La Casa de Papel")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 10))) e ((categoria = 0) ou (categoria = 3))) entao
      escreval("- Anne with an E")
      resultado <- 1
   fimse

   se resultado = 0 entao
      escreval("Nenhum titulo encontrado apos o filtro de categoria.")
   fimse

   escreval("")
   escreval("Voce tem preferencia por fornecedor?")
   escreval("0 - Sem preferencia")
   escreval("1 - Netflix")
   escreval("2 - Amazon Prime")
   escreval("3 - Disney+")
   escreval("4 - HBO Max")
   escreva("Digite a opcao: ")
   leia(fornecedor)

   escreval("")
   escreval("==============================================")
   escreval(" RESULTADO FINAL DA RECOMENDACAO")
   escreval("==============================================")

   resultado <- 0

   se (((SorM = 1) e ((censura = -1) ou (censura = 12))) e ((categoria = 0) ou (categoria = 1)) e ((fornecedor = 0) ou (fornecedor = 3))) entao
      escreval("- Vingadores: Ultimato")
      escreval("  Tipo: Filme | Censura: 12 anos | Categoria: Acao | Fornecedor: Disney+")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 0))) e ((categoria = 0) ou (categoria = 2)) e ((fornecedor = 0) ou (fornecedor = 3))) entao
      escreval("- Divertida Mente")
      escreval("  Tipo: Filme | Censura: Livre | Categoria: Comedia | Fornecedor: Disney+")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 10))) e ((categoria = 0) ou (categoria = 4)) e ((fornecedor = 0) ou (fornecedor = 2))) entao
      escreval("- Interestelar")
      escreval("  Tipo: Filme | Censura: 10 anos | Categoria: Suspense/Ficcao | Fornecedor: Amazon Prime")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 12))) e ((categoria = 0) ou (categoria = 5)) e ((fornecedor = 0) ou (fornecedor = 4))) entao
      escreval("- A Culpa e das Estrelas")
      escreval("  Tipo: Filme | Censura: 12 anos | Categoria: Romance | Fornecedor: HBO Max")
      resultado <- 1
   fimse

   se (((SorM = 1) e ((censura = -1) ou (censura = 18))) e ((categoria = 0) ou (categoria = 1)) e ((fornecedor = 0) ou (fornecedor = 2))) entao
      escreval("- John Wick")
      escreval("  Tipo: Filme | Censura: 18 anos | Categoria: Acao | Fornecedor: Amazon Prime")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 14))) e ((categoria = 0) ou (categoria = 4)) e ((fornecedor = 0) ou (fornecedor = 1))) entao
      escreval("- Stranger Things")
      escreval("  Tipo: Serie | Censura: 14 anos | Categoria: Suspense/Ficcao | Fornecedor: Netflix")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 10))) e ((categoria = 0) ou (categoria = 2)) e ((fornecedor = 0) ou (fornecedor = 4))) entao
      escreval("- Friends")
      escreval("  Tipo: Serie | Censura: 10 anos | Categoria: Comedia | Fornecedor: HBO Max")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 18))) e ((categoria = 0) ou (categoria = 3)) e ((fornecedor = 0) ou (fornecedor = 4))) entao
      escreval("- The Last of Us")
      escreval("  Tipo: Serie | Censura: 18 anos | Categoria: Drama | Fornecedor: HBO Max")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 18))) e ((categoria = 0) ou (categoria = 1)) e ((fornecedor = 0) ou (fornecedor = 1))) entao
      escreval("- La Casa de Papel")
      escreval("  Tipo: Serie | Censura: 18 anos | Categoria: Acao | Fornecedor: Netflix")
      resultado <- 1
   fimse

   se (((SorM = 2) e ((censura = -1) ou (censura = 10))) e ((categoria = 0) ou (categoria = 3)) e ((fornecedor = 0) ou (fornecedor = 1))) entao
      escreval("- Anne with an E")
      escreval("  Tipo: Serie | Censura: 10 anos | Categoria: Drama | Fornecedor: Netflix")
      resultado <- 1
   fimse

   se resultado = 0 entao
      escreval("Nenhum titulo foi encontrado com esses criterios.")
   fimse

   escreval("")
   escreval("Fim do programa.")

Fimalgoritmo