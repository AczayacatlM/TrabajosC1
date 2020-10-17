Entrada: p, un número natural

	Declarar msj y asignarle el valor de cadena nula
	Si el módulo de p con 2 es 0 y p no es igual a 2:
		Asignar a msj el valor "El número 'p' no es primo"
		Retornar msj
	Terminar condicional
	Si no:
		Declarar m y k, asignándoles el valor 0
		Si el piso de p/2 es par:
			Asignar a m el valor del piso de p/2 y sumarle 1
		Terminar condicional
		Si no:
			Asignar a m el valor del piso de p/2
		Terminar condicional
		Para un número variable i que va desde 3 hasta m incrementando de 1 en 1:
			Si el módulo de i con 2 es diferente de 0:
				Asignar a k el módulo de m con el valor actual de i
				Si k es igual a 0:
					Asignar a msj el valor "El número 'p' no es primo"
					Retornar msj
				Terminar condicional
			Terminar condicional
		Terminar bucle
		Asignar a msj el valor "El número 'p' es primo"
	Retornar msj

Salida: msj