/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package main;

import fila.*;
import arvore.*;
import lista.*;
import pilha.*;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileNotFoundException;
import java.io.IOException;

/**
 *
 * @author dpf
 */
public class Main {

    public static void main(String[] args) {
    try {
        try (BufferedReader reader = new BufferedReader(new FileReader("src\\main\\config.txt"))) {
            String linha = reader.readLine();
            Object estrutura = null;
            while (linha != null) {
                String[] partes = linha.split(":");
                String comando = partes[0].trim().toUpperCase();
                
                switch (comando){
                    case "LISTA" -> estrutura = new ListaEncadeada<String>();
                    
                    case "PILHA" -> estrutura = new Pilha<String>();
                    
                    case "FILA" -> estrutura = new Fila<String>();
                    
                    case "ARVORE" -> estrutura = new Arvore<String>();
                    
                    case "INSERIR" -> {
                        if (estrutura != null && partes.length == 2){
                            String elemento = partes[1].trim();
                            
                            if (estrutura instanceof ListaEncadeada listaEncadeada){
                                ((ListaEncadeada<String>) estrutura).inserir(listaEncadeada.getTamanho()+1, elemento);
                                
                            }else if (estrutura instanceof Fila){
                                ((Fila<String>) estrutura).enfileirar(elemento);
                                
                            }else if (estrutura instanceof Pilha){
                                ((Pilha<String>) estrutura).empilhar(elemento);
                                
                            }else if (estrutura instanceof Arvore){
                                ((Arvore<String>) estrutura).inserir(elemento);
                            }
                            
                        }
                    }
                    
                    case "BUSCAR" -> {
                        if (estrutura != null && partes.length == 2){
                            String elemento = partes[1].trim();
                            
                            if (estrutura instanceof ListaEncadeada){
                                ((ListaEncadeada<String>) estrutura).buscar(elemento);
                                
                            }else if (estrutura instanceof Fila){
                                ((Fila<String>) estrutura).buscar(elemento);
                                
                            }else if (estrutura instanceof Pilha){
                                ((Pilha<String>) estrutura).buscar(elemento);
                                
                            }else if (estrutura instanceof Arvore){
                                ((Arvore<String>) estrutura).buscar(elemento);
                                
                            }
                            
                        }
                    }
                    
                    case "EXCLUIR" -> {
                        if (estrutura != null && partes.length == 2){
                            String elemento = partes[1].trim();
                            
                            if (estrutura instanceof ListaEncadeada){
                                ((ListaEncadeada<String>) estrutura).excluir(((ListaEncadeada) estrutura).getTamanho(), elemento);
                                
                            }else if (estrutura instanceof Fila){
                                ((Fila<String>) estrutura).desenfileirar();
                                
                            }else if (estrutura instanceof Pilha){
                                ((Pilha<String>) estrutura).desempilhar();
                                
                            }else if (estrutura instanceof Arvore){
                                ((Arvore<String>) estrutura).excluir(elemento);
                            }
                            
                        }
                    }
                    
                    case "IMPRIMIR" -> {
                        if (estrutura != null && partes.length == 2){
                            
                            if (estrutura instanceof ListaEncadeada){
                                ((ListaEncadeada<String>) estrutura).imprimir();
                                
                            }else if (estrutura instanceof Fila){
                                ((Fila<String>) estrutura).imprimir();
                                
                            }else if (estrutura instanceof Pilha){
                                ((Pilha<String>) estrutura).imprimir();
                                
                            }else if (estrutura instanceof Arvore){
                                ((Arvore<String>) estrutura).imprimir();
                            }
                            
                        }
                    }
                }
            }
            // Feche o BufferedReader após a leitura
        }
    } catch (FileNotFoundException e) {
    } catch (IOException e) {
    }
}

}





