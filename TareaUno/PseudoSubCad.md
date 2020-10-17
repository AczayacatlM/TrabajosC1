Entrada: cdn1 con el valor "Se han establecido antecedentes desde el siglo XIX", l que es el largo de la cadena

	Declarar esSubCdn y asignarle el valor falso
	Por cada número i entre 0 y l-1 incrementando de 1 en 1:
		Si el caracter en la posición i es la letra 'a':
			Si el caracter en la posición i+1 es la letra 'n':
				Si el caracter en la posición i+2 es la letra 't':
					Asignarle a esSubCdn el valor verdadero
					Retornar esSubcdn
				Terminar condicional
			Terminar condicional
		Termina condicional
	Terminar bucle
	Retornar esSubCdn

Salida: esSubCdn