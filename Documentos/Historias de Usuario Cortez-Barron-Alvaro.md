Software control de stock y personal


## Introducción
La empresa de papeleria busca poder tener mayor control de stock y manejo de sus productos a sus ves de sus empleados. Teniendo ese mayor control también tendrán mejores resultados de gestion de recursos humanos y menos perdidas
### Descripción general del sistema
Un sistema de control de inventario para una papeleria que permite la correcta gestion entre almacen y ventas directas dando datos para mejorar eficiencia y también evitar la falta de stock en tiempo real. Facilita la supervision manejo y gestion de productos asi como la comunicación y verificación de cada accion evitando el fallo humano. 

### Objetivo General

Desarrollar un sistema interno de control de inventario para la papelería añadido a una alerta por bajo stock. 

### Objetivos específicos

1 Centralización de información entre almacen y tienda, teniendo una base de datos unica.

2 Minimizar errores en falta de productos o sobrestock

3 Certificación de operaciones vinculadas a un trabajador responsable de la misma



## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1

HU1-01: Como administrador de ventas, 
        quiero ver el seguimiento de la llegada del producto, hasta su salida en venta al cliente,
        para verificar la eficiencia del personal. 
 ~El sistema muestra todo el recorrido del producto desde su llegada a fabrica hasta salida en venta.
 ~Si el producto nunca ingreso, rebotara producto no ingresado en almacen.

HU1-02: Como vendedor en la tienda física,
        quiero poder consultar en tiempo real el stock disponible en el almacén central, 
        para informar correctamente a los clientes sobre la disponibilidad de productos. 
 ~El sistema muestra la disponibilidad en tiempo real del almacen 
 ~Si el producto esta agotado, saldra disponibilidad 0. 
HU1-03: Como administrador del sistema,
        quiero que tienda y almacén compartan una única fuente de datos,
        para evitar errores por duplicidad o inconsistencia en la información de productos.
 ~El sistema mostrara los datos duplicados 
 ~Saldran errores de duplicidad en los productos de la papeleria

HU1-04: Como gerente general,
        quiero generar reportes que integren datos de ventas y stock tanto de la tienda como del almacén,  
        para tener una visión completa del estado operativo de la empresa.
 ~El sistema sacara estadisticas de datos unificados
 ~Pueden ser muy generales al tratarse de 2 areas en lugar de enfocar un sector mas pequeño de la empresa

HU1-05: Como responsable de la tienda, 
        quiero que el sistema detecte automáticamente bajos niveles de stock y notifique al almacén,
        para agilizar la reposición de productos y evitar falta de stock.
 ~El sistema alerta para solicitar mas productos
 ~El sistema no debe permitir el sobrestock en ningun caso

HU1-06: Como responsable de productos en el almacén,  
        quiero registrar nuevos artículos directamente en una base de datos compartida,
        para que estén disponibles de inmediato en el sistema de la tienda sin duplicar procesos.
 ~El sistema se actualizara en linea de inmediato
 ~Puede pasar que en tiempo real un producto no este disponible ante la sobredemanda del mismo.
## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2

HU2-01: Como encargado del almacén,
        quiero que el sistema registre automáticamente las salidas de productos, 
        para evitar errores de conteo que generen faltantes o exceso de stock. 
 ~El sistema contabiliza y rebota errores de conteo especifico comparando los ingresos de cifras
 ~El sistema rebotara ante el cruce informacion erronea

HU2-02: Como responsable de inventario en tienda,
        quiero recibir alertas cuando un producto llegue a su nivel mínimo de stock, 
        para realizar pedidos a tiempo y evitar quiebres de inventario.
 ~El sistema lanza alerta ante cierto limite puesto para notificar niveles minimos de stock
 ~El sistema no Debera avisar a personas no responsable de este proceso de reposicion 

HU2-03: Como analista de inventario,  
        quiero acceder al historial de entradas y salidas de cada producto,  
        para detectar patrones que generen sobrestock o faltantes recurrentes.
 ~El sistema genera automaticamente los historiales con picos mas altos 
 ~Se deben poner los parametros requerido de opinion

HU2-04: Como responsable de compras,  
        quiero que el sistema sugiera reposiciones basadas en ventas históricas,  
        para evitar pedidos excesivos o innecesarios de productos de baja rotación.
 ~El sistema rebota sugerencias dentro de parametros puestos por el usuario
 ~Se debe tener un buen criterio de solicitud 

HU2-05: Como vendedor,  
        quiero que el sistema valide la existencia de stock antes de concretar una venta,  
        para evitar prometer productos que no estén disponibles.
 ~El sistema mostrara luz verde al validar en tiempo real 
 ~Se arriesga que si una venta es introducida antes el stock se actualice y pueda no tener el producto

HU2-06: Como gerente de operaciones,  
        quiero tener visibilidad consolidada del inventario en todas las tiendas y el almacén,  
        para redistribuir productos y prevenir sobrestock en una sucursal y faltante en otra.
 ~El sistema puede rebotar informes individuales como generales por tiendas 
 ~Se debe verificar que no se den esos informes con una hora de salida pudiendo variar luego


 
## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3
HU3-01: Como administrador del sistema,  
        quiero que cada movimiento de inventario registre automáticamente al trabajador responsable,  
        para asegurar trazabilidad y responsabilidad en cada operación.
 ~El sistema rebotara la informacion del vendedor en cada operacion
 ~No debe repetir ventas en las estadisticas del vendedor

HU3-02: Como trabajador del almacén,  
        quiero que el sistema requiera autenticación personal antes de registrar un ingreso o egreso,  
        para certificar que fui yo quien realizó dicha operación.
 ~El sistema adjuntara la autentificacion a cada accion realizada en el sistema
 ~El tamaño puede suer muy grande para guardar ese historial de gestion

HU3-03: Como supervisor de operaciones,  
        quiero poder consultar el historial de acciones realizadas por cada trabajador,  
        para auditar y verificar la correcta ejecución de los procesos.
 ~Los usuarios autorizados tendran acceso a los historiales individuales de cada empleado
 ~Se debe realizar una capa de seguridad extra para la verificacion de usuarios autorizados

HU3-04: Como encargado de control interno,  
        quiero recibir alertas si un trabajador genera operaciones fuera de los rangos esperados,  
        para actuar rápidamente ante posibles errores o irregularidades.
 ~El sistema enviara notificaciones a los responsables 
 ~Debe poder ser corregido en caso de errores por un autorizado

HU3-05: Como gerente de recursos humanos,  
        quiero generar reportes de productividad y exactitud basados en las operaciones certificadas de cada empleado,  
        para evaluar su desempeño de manera objetiva.
 ~El sistema enviara reporte individuales 
 ~Deben ser tentativos y verificables por el mismo gerente o autorizados no siendo sujeto de despido 

HU3-06: Como trabajador responsable de despacho,  
        quiero firmar digitalmente las operaciones críticas como transferencias o salidas de alto valor,  
        para dejar constancia formal de mi responsabilidad.
 ~El sistema pedira firma digital ante operaciones de alto valor
 ~Debera pedir parametros para medir ese valor

