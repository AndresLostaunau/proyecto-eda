# proyecto-eda
## Enunciado  
Para este proyecto se requiere implementar en lenguaje C++ un programa que soporte la ejecución de una  consulta espacial sobre un conjunto de datos abierto. El conjunto de datos principal con el que se debe trabajar está compuesto por cientos de miles de registros que representan viajes de taxi en la ciudad de New York  correspondientes al año 2015  1. Estos datos son ofrecidos por la organización llamada NYC Taxi and Limousine Commission.  
### Consulta  
La consulta que su solución debe soportar es:  
* Dados dos puntos P1 y P2 que representan una región rectangular, retornar los viajes que comenzaron en tal región.  
### Consideraciones  
* El conjunto de datos completo a utilizar está compuesto por 36 archivos CSV, que son los registros de 3  proveedores distintos para cada mes del año. Dado que el total del tamaño de los datos está en el orden de los GBs, se debe considerar esta escala desde el comienzo para el diseño de su propuesta. Se sugiere comenzar utilizando únicamente el archivo:
https://s3.amazonaws.com/nyc-tlc/trip+data/green_tripdata_2015-01.csv
* La estructura de datos elegida para implementar este proyecto es el R-Tree.  
* A pesar que el conjunto de datos se conoce a priori, el objetivo es que su programa utilice una estructura de datos dinámica que además puedan permitir las consultas de manera eficiente.  
* Se sugiere se utilice alguna herramienta de terceros para validar el resultado de algunos experimentos tales como Boost, GeoPandas, PostGIS, MongoDB u Oracle.