Entrada: cdn1, cdn2 las dos son cadenas de caracteres

	Declarar msj y asignarle el valor de cadena nula
	Declarar cdnAux y asignarle el valor de cadena nula
	Por cada caracter leído desde el fin de cdn1 hasta su inicio:
		Concatenar cdnAux consigo misma y con el caracter actual
	Terminar bucle
	Por cada caracter en cdn1:
		Si el caracter actual de cdn1 no coincide con el caracter actual de cdnAux:
			Asignar a msj el valor "La cadena 1 no es un palíndromo"
			Interrumpir bucle
		Terminar condicional
	Terminar bucle
	Si la cadena msj aún es nula:
		Asignar a msj el valor "La cadena 1 es un palíndromo"
		Asignar a cdnAux el valor de cadena nula
		Por cada caracter leído desde el fin de cdn2 hasta su inicio:
			Concatenar cdnAux consigo misma y con el caracter actual
		Terminar bucle
		Por cada caracter en cdn2:
			Si el caracter actual de cdn2 no coincide con el caracter actual de cdnAux:
				Asignar a msj el valor "La cadena 1 es un palíndromo, pero la 2 no"
				Regresar msj
			Terminar condicional
		Terminar bucle
		Si el valor de msj equivale a "La cadena 1 es un palíndromo":
			Asignar a msj el valor "Ambas cadenas son palíndromos"
		Regresar msj
	Terminar condicional
	Si no:
		Asignar a cdnAux el valor de cadena nula
		Por cada caracter leído desde el fin de cdn2 hasta su inicio:
			Concatenar cdnAux consigo misma y con el caracter actual
		Terminar bucle
		Por cada caracter en cdn2:
			Si el caracter actual de cdn2 no coincide con el caracter actual de cdnAux:
				Asignar a msj el valor "Ninguna de las dos cadenas es un palíndromo"
				Regresar msj
			Terminar condicional
		Terminar bucle
		Si el valor de msj equivale a "La cadena 1 no es un palíndromo":
			Asignar a msj el valor "La cadena 1 no es un palíndromo, pero la 2 si"
		Regresar msj
	Terminar condicional

Salida: msj