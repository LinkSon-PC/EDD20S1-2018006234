/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea2;

import java.util.LinkedList;

/**
 *
 * @author Home
 */
public class TDA_Moneda {
    private String NombreM;
    
    private String NombreP;
    private int CantidadP;
    
    private LinkedList<TDA_Moneda> Cliente;

    public TDA_Moneda() {
    }

    public TDA_Moneda(String NombreM) {
        this.NombreM = NombreM;
        Cliente = new LinkedList<>();
    }

    public TDA_Moneda(String NombreP, int CantidadP){
        this.NombreP = NombreP;
        this.CantidadP = CantidadP;
    }
    
    public void AgregarCliente(String NombreP, int CantidadP){
        Cliente.add(new TDA_Moneda(NombreP, CantidadP));
    }

    public int Dinero(){
        int total=0;
        for (TDA_Moneda dinero : Cliente) {
            total+=dinero.getCantidadM();
        }
        return total;
    }
    /**
     * @return the NombreM
     */
    public String getNombreM() {
        return NombreM;
    }

    /**
     * @param NombreM the NombreM to set
     */
    public void setNombreM(String NombreM) {
        this.NombreM = NombreM;
    }

    /**
     * @return the CantidadM
     */
    public int getCantidadM() {
        return CantidadP;
    }

    /**
     * @param CantidadP the CantidadM to set
     */
    public void setCantidadM(int CantidadP) {
        this.CantidadP = CantidadP;
    }

    /**
     * @return the NombreP
     */
    public String getNombreP() {
        return NombreP;
    }

    /**
     * @param NombreP the NombreP to set
     */
    public void setNombreP(String NombreP) {
        this.NombreP = NombreP;
    }

    

}
