# TDA-TAREA 2
## MONEDA

- **AUTOR** 201800634
- **ESTATUS** FINAL
- **CREATE** 02/02/2020

## SUMARY
### TDA DE MONEDA

## ABSTRACT
### IMPLEMENTACION DE UN TDA PARA UN SISTEMA DE TREANSEFERNCIA DE MONEDA

## MOTIVATION
### LA IMPLEMETACION DEL TDA PERMITE EL CREAR UNA MONEDA ASÍ COMO AGREGAR CLIENTES/USUARIOS PARA LA TRANSEFERENCIA DEL VALOR MONETARIO

## SPECIFICATION

### TOKEN

### METHODS
```
TDA_Moneda()
TDA_Moneda(String NombreM)
TDA_Moneda(String NombreP, int CantidadP)
AgregarCliente(String NombreP, int CantidadP)
Dinero()
Transaccion(int origen, int destino, int monto)
getNombreM()
setNombreM(String NombreM) 
getCantidadM()
setCantidadM(int CantidadP)
getNombreP()
setNombreP(String NombreP)
LinkedList<TDA_Moneda> getCliente()
setCliente(LinkedList<TDA_Moneda> Cliente)
```

#### METODO CONSTRUCTRO DEL TDA
> **function**  TDA_Moneda()


#### METODO CONSTRUCTRO
##### SOBRECARGA DEL METODO CONSTURCTOR PARA ALMACENAR UNA NUEVA MONEDA
> **function**  TDA_Moneda (String NombreM)

#### METODO CONSTRUCTRO
##### SOBRECARGA DEL METODO CONSTURCTOR PARA AGREGAR UN NUEVO CLIENTE QUE SE ALMACENARA EN LISTADO AL TIPO DE MONEDA CREADO
> **function**  TDA_Moneda (String NombreP, int CantidadP)

#### OBTERNER DINERO
##### METODO QUE RETORNA LA CANTIDAD TOTAL DE MONEDAS ALMACENADA POR LOS CLIENTES
> **function**  Dinero() **public** view returns (int)

#### TRANSACCIONES
##### PERMITE LAS TRANSACCIONES DE MONEDA POR MEDIO DEL NUMERO DE CUENTA DE ORIGEN COMO LA DE DESTINO Y EL MOTO DE LA MISMA
> **function**  Transaccion(int origen, int destino, int monto) **public**