# 📣 ft_printf – Proyecto 42

`ft_printf` es un proyecto del programa 42 cuyo objetivo es recrear el comportamiento de la función estándar `printf` de C. Se trata de uno de los primeros proyectos que exige comprensión profunda del manejo de memoria, tipos de datos y funciones variádicas en C.

---

## 🧠 Objetivos del proyecto

- Implementar una versión funcional de `printf`.
- Aprender a utilizar funciones variádicas (`<stdarg.h>`).
- Procesar y formatear cadenas con múltiples especificadores.
- Mejorar el manejo de punteros, tipos y control de flujo.

---

## ✅ Funcionalidades implementadas

Soporte para los siguientes **format specifiers**:

- `%c` → carácter
- `%s` → string
- `%p` → puntero (en hexadecimal)
- `%d` / `%i` → enteros con signo
- `%u` → enteros sin signo
- `%x` / `%X` → hexadecimal (minúscula/mayúscula)
- `%%` → símbolo de porcentaje literal

---

## 🛠️ Compilación

Para bajar el repositorio:
git clone git@github.com:javierlla/ft_printf.git

Compila el proyecto con el siguiente comando:

```bash
make
