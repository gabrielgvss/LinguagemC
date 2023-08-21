/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pilha;
import fila.No;

/**
 *
 * @author dpf
 * @param <T>
 */
public class Pilha<T>{
    private int tamanho;
    private No<T> topo;

    public Pilha() {
        this.tamanho = 0;
        this.topo = null;
        
    }
    
    public int getTamanho() {
        return tamanho;
    }

    public void setTamanho(int tamanho) {
        this.tamanho = tamanho;
    }

    public No<T> getTopo() {
        return topo;
    }

    public void setTopo(No<T> topo) {
        this.topo = topo;
    }
    
    public void empilhar(T elemento){
        No<T> novo_no = new No<>(elemento);
        
        if (this.getTopo() == null){//Pilha vazia
            this.setTopo(novo_no);
            
        }else{
            novo_no.setProximo(topo);
            this.setTopo(novo_no);
            
        }
        this.setTamanho(this.getTamanho() + 1);
        
    }
    
    public void desempilhar(){
        if (this.getTopo() != null){
            this.setTopo(this.getTopo().getProximo());
            this.setTamanho(this.getTamanho() - 1);
        }
        
    }
    
    public int buscar(T elemento){
        No<T> atual = this.getTopo();
        
        while (atual != null){
            if (atual.getElemento().equals(elemento)){
                return 1;
                
            }
            atual = atual.getProximo();
        }
        return -1;
    }
    
    public void imprimir(){
        No<T> atual = this.getTopo();
        
        while (atual != null){
            System.out.print(atual.getElemento() + " ");
            atual = atual.getProximo();
            
        }
    }
    
    
    
    
}
