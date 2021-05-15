

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

typedef struct {

int id;
char nombre[51];
char apellido[51];
float salario;
int sector;
int isEmpty;

} eEmpleado;

#endif /* ARRAYEMPLOYEES_H_ */

/** \brief Inicializa el isEmpty en 1.
 *
 * \param Array de empleados.
 * \param Tamaño del array.
 * \return Si falla, 0, si no falla, 1.
 *
 */

int initEmployees(eEmpleado empleados[], int tam);

/** \brief Menu del ABM
 *
 * \return La opcion seleccionada.
 *
 */


int menu();

/** \brief Añade empleado al array.
 *
 * \param Array de empleados
 * \param Tamaño del array
 * \param Id de empleado.
 * \return Si falla, 0, si no falla, 1.
 *
 */

int addEmployees(eEmpleado empleados[], int tam, int id);

/** \brief Busca un empleado por id.
 *
 * \param Array de empleados.
 * \param Tamaño de array.
 * \param Id de empleado.
 * \return Indice donde se encuentra el empleado.
 *
 */

int findEmployeeById(eEmpleado empleados[], int tam, int id);

/** \brief Da de baja a un empleado de la lista, cambia isEmpty a 1.
 *
 * \param Array de empleados.
 * \param Tamaño de array.
 * \return Si falla, 0, si no falla, 1, si se cancela la modificacion, 2.
 *
 */

int removeEmployee(eEmpleado empleados[], int tam);

/** \brief Ordena array por apellido y sector.
 *
 * \param Array de empleados.
 * \param Tamaño del array.
 * \return Si falla, 0, si no falla, 1.
 *
 */

int sortEmployees(eEmpleado empleados[], int tam, int criterio);

/** \brief Imprime lista de empleados.
 *
 * \param Array de empleados
 * \param Tamaño del array
 * \return Si falla, 0, si no falla, 1.
 *
 */

int printEmployees(eEmpleado empleados[], int tam);

/** \brief Imprime datos de empleado.
 *
 * \param Muestra empleado.
 */

void printEmployee(eEmpleado empleado);

/** \brief Busca empleado dentro del array por id.
 *
 * \param Array de empleados.
 * \param Tamaño del array.
 * \return El indice del array donde esta el empleado libre.
 *
 */

int buscarLibre(eEmpleado empleados[], int tam);

/** \brief Modifica los campos de eEmpleados por id.
 *
 * \param Array de empleados
 * \param Tamaño del array
 * \return Si falla, 0, si no falla, 1, si se cancela la modificacion, 2.
 *
 */

int modificarEmpleado(eEmpleado empleados[], int tam);

/** \brief Imprime salarios, empleados y promedio.
 *
 * \param Array de empleados.
 * \param Tamaño del array.
 *
 */

void informarSalario (eEmpleado empleados[], int tam);
