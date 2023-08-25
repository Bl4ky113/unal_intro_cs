# OS

List of Contents:
- Qué son? --- DONE
- De Donde vienen? --- DONE
- Qué tienen, o Cómo Funcionan? --- DONE
    - Daemons --- DONE
    - Kernel --- DONE
- Cuales hay? --- DONE
    - Lista --- DONE

Bases

Lo más básico de un Sistema Operativo, es qué es el sistema de software qué maneja y administra el hardware del computador y 
los recursos del software. Además de dar diferentes servicios, o daemons, para los programas del computador.

( tux, kernel, multitasking )

Componentes de los OS:

- Kernel:
    El Kernel del OS es el encargado cómo tal de manejar los recursos del hardware cómo tal,
    cómo Hardware y el Kernel cómo tal, sus drivers high level (CPU, GPU, RAM), sus drivers low level (Disco duro, Redes, I/O). 
    Esto atravez de un diseño de seguridad basado en anillos, donde el nivel más bajos (empezando desde 0) solo el Kernel los puede 
    manejar, despúes otros anillos cómo son el I/O pueden ser accedidos, interactuar y usar por otros programas, pero para hacer esto
    primero tienen qué hacer peticiones, o Sistem Call, al Kernel, para poder ser accedidas. 
    Y aún así, estas peticiones van a ser relativamente restringidas.

- Daemons:
    Los Daemons son formas de proceso que corren de forma no interactiva con el usuario, o en el fondo, teniendo más que todo funcionalidades de 
    revisar, verificar y checkear cada cierto tiempo algún proceso, estado o conexión. Estos van tomados de la mano con los Sistem Calls.
    Haciendo más que todo procesos de verificación y retorno de datos cada vez que sean necesarios, o cada vez que ocurra un cambio.

    Además cómo curiosidad El nombre de Daemons, no viene de diablo o devil en inglés. 
    Pero de las historias Griegas de Daimons, espiritus de las personas de la época dorada Griega, qué guiaban, daban información a las personas

(DONE)

Tipos principales funcionamiento de OS:

- Single and multi tasking
Cómo el nombre lo explica, se dividen entre los qué solo pueden hacer una tarea al tiempo. 
Sin siquiera considerar o empezar otra tarea antes de terminar una. (Singletasking).
Mientras que los Multitasking pueden manejar diferentes tareas, o procesos, al 'mismo' tiempo. 

Cuando estos conceptos se estaban desarrollando, el tener tiempo para ejecutar un proceso en el CPU era extremadamente caro. 
Y con temas cómo tener que manejar los datos de entrada de un periferico, un teclado por ejemplo, 
se tenía que parar todos los procesos para leer el input del periferico 
y ahí si ejecutar otra vez los procesos necesarios procesar los datos del input.

Esto era un sistema muy ineficiente, qué en la época era prohibitivamente caro, pero qué era la norma por el Singletasking.
Aquí llega el primer tipo de Multitasking. Cooperative Multitasking.
Su concepto principal es el ceder el espacio en procesamiento a otros programas, hasta recibir una instrucción de continuación
o qué el proceso al cual le hayan cedido el 'paso' termine su ejecución.
El Problema, era relativamente rápido para 'trabarce' o quedarse cargando esperando a una respuesta. Dejando generalmente 
pantallas y tiempos de carga, lo cual para sistemas cómo servidores tiempos de espera larga sigue siendo mortal y muy caro.

Estos problemas de tiempo se pueden arreglar con el uso de Preemptive Multitasking, o time-sharing multitasking, el cual tiene un scheduler donde 
se define el tiempo de uso del procesador en rebanadas, o quantums. A cada programa se le asigna una cantidad de quantums para
su ejecución, y una vez se termine sus quantums el kernel para el proceso del programa y le da el paso a otro proceso.
Además de asignar los quantums a los programas, se juntaban en dos grupos, Los que estan esperando un Input o Output, y los que estan 
usando a su totalidad el CPU. Más que todo para determinar la prioridad y cantidad de quantums asigandos a cada proceso.
Tenemos que tener en cuenta, que podemos tener quantums, o ciclos, muy rápidos qué pueden sobrecargar el procesamiento del computador pero
teniendo respuestas muy rápidas de los procesos. O tener ciclos muy lentos qué sean estables pero eso mismo lentos en responder.

Apartir del preemptive multitasking y de las nuevas tecnologías que se iban desarrollando, 
se empezo a no solo dividir el tiempo de uso, pero el procesamiento cómo tal, dividiendo los procesos
en diferentes procesos. Lo cual se vio rotunamente impulsado con tecnologías cómo el multithreading.

( data stack | scheduler )
( threading | multi núcleos )

- Real Time
Tambien tenemos que reconocer la existencia de manejo de Real time OS, el cual en lugar de parar procesos cada vez que se termina
sus quantums, le da prioridad a procesos que NECESITAN ser manejados en ese mismo instante, cómo lo son los sensores, o los sistemas 
basados en eventos cómo buena parte del desarrollo web.

- Embedded OS
Son generalmente OS que son lo más minimalista posible, siendo desarrollados enfocados a solo un objetivo en concreto. Esto más que todo
ya que generalmente solo tienen los recursos necesarios para realizar este proceso y unicamente este proceso. Pero esto reduce en gran
medida costos economicos, tecnologicos, y electricos de los equipos, siendo más que todo usados para procesos cómo IoT, electronicos de consumo
cómo lavadoras, camaras, impresoras.

( arduino / raspberrypi )

History

La historia no tiene tanta importancia, ya qué solo es implementaciones de las nuevas tecnologías que se van 
desarrollando a lo largo del tiempo. Y en general si quieren indagar, y personalmente aburrirse, la historia se divide escencialmente 
en 3 partes. 
Computadores de los 40s qué eran tan simples qué solo seguían una instrucción, y no paraban hasta qué se terminara o se 'crasheara' el proceso
Computadoras Mainframe, de los 50s hasta los 80s, donde se empezo a implementar varios conceptos modernos de los OS, cómo el multitasking.
Y computadoras más modernas y enfocadas a usuarios menos especializados desde los 80s con computadoras cómo la Apple II qué contaban con 
hardware mucho más avanzado que las épocas anteriores cómo era el Microcomputador. Y teniendo varios avances en el software también cómo el 
lenguaje C, y sistemas operativos cómo UNIX.

( 40s | 60s | apple II | UNIX )

Pero hay un punto importante en los 90s. Un Hackactivista estudiante del MIT. Richard Stallman.
Creo el sistema operativo GNU, cómo reemplazo de sistemas UNIX. El cual fue bastante popular y efectivo 
en reemplazarlo, excepto en el kernel qué tenía el GNU Hurd, el cual menos que productivo.
Entonces llego un estudiante Finlandes llamado Linus Trovalds, el cual desarrollo la primera versión del 
Kernel de Linux. Siendo fusionados rápidamente para dar cómo resultado el Sistema Operativo GNU/Linux, qué no 
sea confundido cómo solo Linux o GNU, ya que sin uno, el otro no podría existir.

( Richard / Linus | Gnu / Tux )

List of OS

- Windows
- BSD
- UNIX
- Gnu/Linux
- Mac Os

(list of os)
