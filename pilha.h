
typedef int TipoItem;
const int max_item = 100; // Quantidade máxima de itens

class pilha {
    private: 
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); // construtura mesmo nome da classe
    ~pilha(); // Desestrutura mesmo nome da classe
    bool estacheia(); // verifica se a pilha esta cheia
    bool estavazia(); // verifica se a pilha esta vazia
    void push(TipoItem item); // push
    TipoItem pop();
    void imprimir(); //print

    int qualtamanho(); // length
};