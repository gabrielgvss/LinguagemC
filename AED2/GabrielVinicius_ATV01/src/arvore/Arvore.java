/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package questao01;
/**
 *
 * @author dpf
 * @param <T>
 * @param
 */
public class Arvore<T extends Comparable<T>>{
    private No<T> raiz;
    private int tamanho;
    
    public Arvore(){
        this.raiz = null;
        this.tamanho = 0;      
    }

    public No<T> getRaiz() {
        return raiz;
    }

    public void setRaiz(No<T> raiz) {
        this.raiz = raiz;
    }

    public int getTamanho() {
        return tamanho;
    }

    public void setTamanho(int tamanho) {
        this.tamanho = tamanho;
    }
    
    public void inserir(T elemento){
        this.setRaiz(inserirRecursivo(this.getRaiz(), elemento));
    }
        
    private No<T> inserirRecursivo(No<T> raiz_atual, T elemento){
        if (raiz_atual == null){//SE A RAIZ ATUAL DA SUBÁRVORE FOR NULA, A RAIZ DA SUBÁRVORE RECEBE O NOVO NÓ;
            return new No<>(elemento);
            
        }
        
        if (elemento.compareTo(raiz_atual.getElemento())<= 0){//SE O VALOR DO ELEMENTO FOR MENOR QUE O DA RAIZ DA SUBÁRVORE ATUAL HAVERÁ O DESLOCAMENTO PARA ESQUERDA
            raiz_atual.setEsquerdo(inserirRecursivo(raiz_atual.getEsquerdo(), elemento));//A comparação é feita novamente de maneira recursiva
        
        }else if (elemento.compareTo(raiz_atual.getElemento()) > 0){//SE O VALOR DO ELEMENTO FOR MAIOR QUE O DA RAIZ DA SUBÁRVORE ATUAL HAVERÁ O DESLOCAMENTO PARA DIREITA
            raiz_atual.setDireito(inserirRecursivo(raiz_atual.getDireito(), elemento));
        
        }
        
        return raiz_atual;
    
    }
    
    public boolean buscar(T elemento){
        return buscarRecursivo(this.getRaiz(), elemento);
        
    }
    
    private boolean buscarRecursivo(No<T> raiz_atual, T elemento){
        if (raiz_atual == null){
            return false;
            
        }
            
        if (elemento.compareTo(raiz_atual.getElemento()) == 0){
            return true;
            
        }else if (elemento.compareTo(raiz_atual.getElemento()) < 0){
            return buscarRecursivo(raiz_atual.getEsquerdo(), elemento);        
            
        }else{
            return buscarRecursivo(raiz_atual.getDireito(), elemento);
        }
    }
    
    public void excluir(T elemento) {
        this.setRaiz(excluirRecursivo(this.getRaiz(), elemento));
        
    }

    private No<T> excluirRecursivo(No<T> raiz_atual, T elemento) {
        if (raiz_atual == null) {
            return raiz_atual; // Árvore vazia ou nó não encontrado
        }

        // Recursivamente buscar o nó a ser excluído
        int comparacao = elemento.compareTo(raiz_atual.getElemento());

        if (comparacao < 0) {
            raiz_atual.setEsquerdo(excluirRecursivo(raiz_atual.getEsquerdo(), elemento));
        } else if (comparacao > 0) {
            raiz_atual.setDireito(excluirRecursivo(raiz_atual.getDireito(), elemento));
        } else {
            // Caso 1: Nó com apenas um filho ou nenhum filho
            if (raiz_atual.getEsquerdo() == null) {
                return raiz_atual.getDireito();
                
            } else if (raiz_atual.getDireito() == null) {
                return raiz_atual.getEsquerdo();
                
            }

            // Caso 2: Nó com dois filhos
            // Encontrar o sucessor (menor valor na subárvore à direita)
            raiz_atual.setElemento(encontrarMenorValor(raiz_atual.getDireito()));

            // Excluir o sucessor
            raiz_atual.setDireito(excluirRecursivo(raiz_atual.getDireito(), raiz_atual.getElemento()));
        }

        return raiz_atual;
    }

    private T encontrarMenorValor(No<T> no) {
        T minimo = no.getElemento();
        
        while (no.getEsquerdo() != null) {
            minimo = no.getEsquerdo().getElemento();
            no = no.getEsquerdo();
        }
        return minimo;
    }
    
    public void imprimir() {
        imprimirRecursivo(this.getRaiz());
        System.out.println(); // Pular uma linha após a impressão completa
        
    }

    private void imprimirRecursivo(No<T> no) {
        if (no != null) {
            imprimirRecursivo(no.getEsquerdo());
            System.out.print(no.getElemento() + " ");
            imprimirRecursivo(no.getDireito());
        }
    }

}
    
    
    
    
  
