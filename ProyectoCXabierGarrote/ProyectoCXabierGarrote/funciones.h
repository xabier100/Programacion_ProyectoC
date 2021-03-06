#pragma once
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAM_OPCIONES_CLIENTES 4
#define TAM_OPCIONES_SERVICIOS 4
#define RUTA_CLIENTES "clientes.dat"
#define RUTA_SERVICIOS "servicios.dat"
/*Definimos la estructura cliente con 
sus correspondientes constantes*/
#define TAM_CLIENTE_NOMBRE 20
#define TAM_CLIENTE_DOMICILIO 20
#define TAM_CLIENTE_CP 6
#define TAM_CLIENTE_MUNICIPIO 15
#define TAM_CLIENTE_NIF 10
typedef struct {
	int nCliente;
	char nombre[TAM_CLIENTE_NOMBRE];
	char domicilio[TAM_CLIENTE_DOMICILIO];
	char codigoPostal[TAM_CLIENTE_CP];
	char municipio[TAM_CLIENTE_MUNICIPIO];
	char nif[TAM_CLIENTE_NIF];
}CLIENTE;

/*Definimos la estructura servicios 
con sus correspondiente constantes*/
#define TAM_SERVICIO_DENOMINACION 20
typedef struct {
	int nServicio;
	char denominacion[TAM_SERVICIO_DENOMINACION];
	float precioCoste;
	float pvp;
}SERVICIO;

void mostrarOpcionesPrincipales();
int pedirOpcionPrincipal();
void GotoXY(int x, int  y);

void mostrarMenuClientes();
void mostrarOpcionesClientes();
int pedirOpcionClientes();

void mostrarMenuServicios();
void mostrarOpcionesServicios();
int pedirOpcionServicios();

void darDeAltaCliente();
void pedirConfirmacionCliente();
void pedirDatosCliente(int numSiguienteCliente,CLIENTE *reg);
long calcularTamaņoFichero(FILE *pf);

void modificarCliente();
void pedirDatosModificarCliente(CLIENTE *reg);
int pedirOpcionModificarCliente();
void imprimirDatosModificablesCliente(CLIENTE* reg);
void pedirNombre(CLIENTE* reg);
void pedirDomicilio(CLIENTE* reg);
void pedirCodigoPostal(CLIENTE* reg);
void pedirNif(CLIENTE* reg);
void pedirMunicipio(CLIENTE* reg);

void consultarCliente();
void imprimirDatosCliente(CLIENTE reg);
int  pedirNumCliente();

void darDeAltaServicio();
void pedirConfirmacionServicio();
void pedirDatosServicio(int numSiguienteServicio, SERVICIO* reg);

void modificarServicio();
void pedirDatosModificarServicio(SERVICIO* reg);
int pedirOpcionModificarServicio();
void imprimirDatosModificablesServicio(SERVICIO* reg);
void pedirDenominacion(SERVICIO* reg);
void pedirPrecioCoste(SERVICIO* reg);
void pedirPVP(SERVICIO* reg);

void consultarServicio();
void imprimirDatosServicio(SERVICIO reg);
int pedirNumServicio();

void hacerPresupuestos();
void hacerFacturas();