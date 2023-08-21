/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package fila;
/**
 *
 * @author dpf
 */
public class Fila<T>{
    private int tamanho;
    private No<T> inicio;
    private No<T> fim;
    
    public Fila(){
        this.tamanho = 0;
        this.inicio = null;
        this.fim = null;
        
    }

    public int getTamanho() {
        return tamanho;
    }

    public void setTamanho(int tamanho) {
        this.tamanho = tamanho;
    }

    public No<T> getInicio() {
        return inicio;
    }

    public void setInicio(No<T> inicio) {
        this.inicio = inicio;
    }

    public No<T> getFim() {
        return fim;
    }

    public void setFim(No<T> fim) {
        this.fim = fim;
    }
    
    public void enfileirar(T elemento){
        No<T> novo_no = new No<>(elemento);
        
        if (this.getInicio() == null){//Fila vazia
            this.setInicio(novo_no);
            this.setFim(novo_no);
            
        }else{
            this.getFim().setProximo(novo_no);
            this.setFim(novo_no);
            
        }
        this.setTamanho(this.getTamanho() + 1);
    }
    
    public void desenfileirar(){
        if (this.getInicio() != null){
            this.setInicio(inicio.getProximo());
            this.setTamanho(this.getTamanho() - 1);
            
        }
    }
    
    public int buscar(T elemento){
        No<T> atual = this.getInicio();
        
        while (atual != null){
            if (atual.getElemento().equals(elemento)){
                return 1; //Existe na fila
                
            }
            atual =atual.getProximo();
        }
        return -1;
    }
    
    public void imprimir(){
        No<T> atual = this.getInicio();
        
        while (atual != null){
            System.out.print(atual.getElemento() + " ");
            atual = atual.getProximo();
            
        }
    }
}