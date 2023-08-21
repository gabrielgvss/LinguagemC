/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package questao01;

/**
 *
 * @author dpf
 * @param <T>
 */
public class No<T>{
    private No<T> direito;
    private No<T> esquerdo;
    private T elemento;
    
    public No(T elemento){
        this.elemento = elemento;
        this.direito = null;
        this.esquerdo = null;
    }

    public No<T> getDireito() {
        return direito;
    }

    public void setDireito(No<T> direito) {
        this.direito = direito;
    }

    public No<T> getEsquerdo() {
        return esquerdo;
    }

    public void setEsquerdo(No<T> esquerdo) {
        this.esquerdo = esquerdo;
    }

    public T getElemento() {
        return elemento;
    }

    public void setElemento(T elemento) {
        this.elemento = elemento;
    }
    
    
}
