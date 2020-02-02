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
        getCliente().add(new TDA_Moneda(NombreP, CantidadP));
    }

    public int Dinero(){
        int total=0;
        for (TDA_Moneda dinero : getCliente()) {
            total+=dinero.getCantidadM();
        }
        return total;
    }
    
    public void Transaccion(int origen, int destino, int monto){
        Cliente.get(origen).setCantidadM(Cliente.get(origen).getCantidadM()-monto);
        Cliente.get(destino).setCantidadM(Cliente.get(destino).getCantidadM()+monto);
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

    /**
     * @return the Cliente
     */
    public LinkedList<TDA_Moneda> getCliente() {
        return Cliente;
    }

    /**
     * @param Cliente the Cliente to set
     */
    public void setCliente(LinkedList<TDA_Moneda> Cliente) {
        this.Cliente = Cliente;
    }

    

}
