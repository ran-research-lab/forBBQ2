La gerencia del Choliseo de PR está pidiendo tu ayuda como experta en simulación de filas de personas. Se acerca el próximo concierto de Bad Bunny y quisieran simular cuanto esperarán los fanáticos en la fila. El Choliseo tiene un total de 8 casetas de pago, cada una equipada para poder cobrar en efectivo, ATH Movil y tarjeta de crédito. Cada fan puede comprar entre 1 y 4 taquillas. Conociendo a los fans, se espera que cuando abran las casetas ya la fila tendrá decenas de miles de fans, pues habrán comenzado a llegar hasta días antes.

Crea un programa que sea capaz de simular la fila y cómo se van atendiendo a las personas hasta que se acaben las taquillas. Al final de la simulación, nos interesa conocer: el tiempo total que tomó el proceso de venta, lo que esperó cada persona.

La simulación acceptará los siguientes parámetros de un archivo en formato .json (se provee uno de ejemplo):

- Cuantos horas antes de que se abrá la taquilla llega la primera persona a hacer fila.
- Cuántas personas se añaden a la fila en cada hora
- El tiempo en segundos que toma la trasacción en efectivo, ATH movil y tarjeta de crédito.
- La distribución de transacciones. Qué porcentaje de personas pagará en efectivo, ATH movil, etc.
- El total de taquillas disponibles
- Cuantas estaciones de taquillas habrá disponibles.

El programa mostrará al final de cada hora, cuantas personas hay en fila, cuantas taquillas han sido vendidas, cuánto ha sido el tiempo de espera promedio.

El programa se invocará de la siquiente forma:
```
./main nombreDelFile.json
```

El `main.cpp` actualmente contiene lo necesario para leer el archivo .json y crear un objeto (llamado `jsonObj`) que se puede acceder de forma parecida a un `map`. Ejemplo, una vez leido el archivo y convertido a objeto, podrás acceder al valor asignado para la llave `"horasAntes"` usando `jsonObj["horasAntes"]`.
