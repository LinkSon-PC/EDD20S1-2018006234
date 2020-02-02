/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea2;

import java.util.LinkedList;
import java.util.Scanner;

/**
 *
 * @author Home
 */
public class Tarea2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        LinkedList<TDA_Moneda> tda=new LinkedList<>();
        boolean sesion= true;
        
        do {            
            System.out.println("1. Crear Moneda");
            System.out.println("2. Agregar Cliente");
            System.out.println("3. Valor de Monedas");
            System.out.println("4. Transferencias");
            System.out.println("5. Exit");
            
            try {
                        int op=0;                       
                        String nom="";
                        int cant=0;
                
                Scanner scanner = new Scanner(System.in);
                switch(scanner.nextInt()){
                    case 1: 
                       
                        System.out.println("ESCRIBA NOMBRE DE LA MONEDA");
                        Scanner nombre = new Scanner(System.in);
                        nom=nombre.next();
                        
                        tda.add(new TDA_Moneda(nom));
                        //tda.getMoneda().add(new TDA_Moneda(nombre.next()));
                        break;
                        
                    case 2:
                        System.out.println("ESCOJA UNA MONEDA");
                        for (int i = 0; i < tda.size(); i++) {
                            System.out.println(tda.get(i));
                        }
                        Scanner opcion = new Scanner(System.in);
                        op=opcion.nextInt();
                        
                       
                        System.out.println("ESCRIBA NOMBRE DE CLIENTE");
                        Scanner nombreC = new Scanner(System.in);
                        nom=nombreC.next();
                        
                        System.out.println("ESCRIBA MONTO INICIAL");
                        Scanner cantidadC = new Scanner(System.in);
                        cant=cantidadC.nextInt();
                        
                        tda.get(op).AgregarCliente(nom, cant);
                        break;
                        
                    case 3:
                        
                        for (TDA_Moneda Dinero : tda) {
                            System.out.println(Dinero.getNombreM()+"-->"+Dinero.Dinero());
                        }
                        //tda.Banco(tda);
                        break;
                    case 4:
                        break;
                    case 5:
                        sesion = false;
                        break;
                }
                
            } catch (Exception e) {
                System.out.println("Escoger opcion correcta");
            }
        } while (sesion);
    }
    
}
