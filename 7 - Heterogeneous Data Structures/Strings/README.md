### Strings

Em C, não há um tipo primitivo (já existente na linguagem) que represente uma string. Essa falta é contornada por uma convenção existente desde a criação da linguagem de tratar arrays de caracteres finalizado com \0 como strings. Não há, portanto, uma informação direta nem sobre o tamanho da string (precisamos percorrer todos os caracteres contando-os até chegar ao \0... e é o que o strlen() faz) nem sobre o quanto de memória foi reservada para a string (caso o bloco tenha sido alocado com malloc()).

Podemos, entretanto, definir nosso próprio tipo de dado string, de forma que possamos saber rapidamente seu tamanho (número de caracteres) e o tamanho do bloco de memória alocada para si (capacidade máxima de caracteres). Para evitar confusão no enunciado, chamaremos de string nosso próprio tipo de dado e de array de caracteres a string convencionada de C.

Defina, então, um novo tipo de dado, chamado string, que possua, além do seu array de caracteres propriamente dito, a capacidade do array e o tamanho da string (quantos caracteres antes do \0). Defina também as seguintes funções para dar suporte ao seu novo tipo:

* ```set_str```: irá inicializar o conteúdo de uma string a partir de um array de caracteres. A função irá alocar dinamicamente espaço de memória suficiente para armazenar o array de caracteres, em blocos de 16 caracteres. Por exemplo, se a string precisar de 4 espaços, será alocado um array com capacidade para 16. Se a string precisar 21, será alocado para 32. Se precisar 33, será alocado 48 e assim por diante. Ou seja, os blocos serão sempre múltiplos de 16.
* ```read_str```: irá inicializar o conteúdo de uma string a partir da leitura da entrada padrão. A função irá ler toda uma linha, inclusive os espaços em branco. Caso o salto de linha (\n) seja lido, ele deve ser desconsiderado (o \n não deve fazer parte da string). Obs: considere que a linha a ser lida não terá mais que 300 caracteres.
* ```concat_str```: irá concatenar duas strings, copiando o conteúdo da segunda no final da primeira. Esta função deve ajustar o tamanho, a capacidade e o conteúdo da primeira string, realocando memória se necessário. Caso haja, a alocação deve obedecer a capacidade múltipla de 16 como previamente descrita.
* ```clear_str```: irá liberar a memória previamente alocada para o array de characteres da string, bem como reinicializar os valores de tamanho e capacidade para 0 e do array para NULL.

Com estas funções implementadas, podemos testar a seguinte função main() nos casos de teste (sua solução deve manter esta função main()).

```sh
int main() {
    string greeting;
    string name;
    set_str(&greeting, "Oi ");
    read_str(&name);
    concat_str(&greeting, &name);
    printf("%s\n", greeting.str);
    printf("%i %i\n", greeting.capacity, greeting.length);
    clear_str(&greeting);
    clear_str(&name);
    return 0;
}
```
| Exemplo de entrada |	Exemplo de saída |
| --- | --- |
|Fulano| Oi Fulano|
| | 16 9 |
