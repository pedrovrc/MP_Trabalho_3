# MP_Trabalho_3
Programa para contagem de linhas de código, ignorando comentários.

Para compilar:
  1. Os testes
     No diretório conta_linhas/testes, entre no terminal:
      cmake CMakeLists.txt
      make
      
  2. O programa principal
    No diretório conta_linhas/source, entre no terminal:
      make
      
Para executar:
  1. Os testes
     No diretório conta_linhas/testes, entre no terminal:
        ./runTests
        
  2. O programa principal
     No diretório conta_linhas/source, entre no terminal:
        ./conta_linhas nomedoarquivo.cpp
     O programa irá funcionar com arquivos do tipo .txt, .c e .cpp. Os programas devem estar escritos de acordo com as normas do cpplint para que a contagem seja feita corretamente.
