/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea1;

import java.util.Scanner;

/**
 *
 * @author Home
 */
public class Tarea1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Escoja el orden de la Matriz");

        try {
            
            int M;
            Scanner scanner = new Scanner(System.in);
            M = scanner.nextInt();

            String [][] Matriz = new String[M][M];
            
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < M; j++) {
                    if (i==0 || i==(M-1) || j==0 || j==(M-1)) {
                        Matriz[i][j]="1";
                        System.out.print(Matriz[i][j]);
                    }else{
                        Matriz[i][j]=" ";
                        System.out.print(Matriz[i][j]);
                    }
                    System.out.print("\t");
                }
                System.out.println();
            }
            
        } catch (Exception e) {
            System.out.println("Orden de matriz incorrecto");
        }

    }
    
    
}
