#include "pch.h"
#include "Mod.h"

// File was initially saved in Windows-1252 codepage

DataArray(const char**, AdvertiseGamepad, 0xC70590, 6);
DataArray(const char**, AdvertiseKeyboard, 0xC705A8, 6);

const char* AdvertiseSpanishNew[]
{
	// Main menu
	
	"\tModo para 1 jugador.",
	"\tModo para 2 jugadores.",
	"\tVe la tabla de clasificaciones.",
	"\tVe los Logros.",
	"\tObtén ayuda o ajusta las opciones.",
	"\tDescarga contenido disponible.",
	"\tSaldrás del juego.",

	// Help & options

	"\tVer los contenidos extra del juego.",
	"\tVideo de bonificación.",
	"\tVe una descripción de cómo jugar.",
	"\tVe cómo están mapeados los controles.",
	"\tConfigura las opciones del juego.",
	"\tMira los créditos.",

	// Single player

	"\tJuega la historia.",
	"\tSelecciona una escena de la historia.",
	"\tJuega los niveles que has superado.",

	// Some 2P mode stuff
	
	"\tHay 3 tipos de juegos.",
	"\tEste es el juego de carreras de Kart.",
	"\tEn carreras Chao hay hasta (8) Chao.",

	// Extras

	"\tMostrar o actualizar la clasificación.",
	"\tOmochao explicará el juego.",
	"\tMostrar la lista de los emblemas.",
	"\tJugar eventos descargados.",

	// Memory card select (console leftover)
	
	"\tSelecciona una tarjeta de memoria.",
	"\tNo hay bloques de memoria libres.",

	// File select

	"\tSelecciona una partida.",
	"\tCrea un archivo nuevo.",
	"\tCarga una partida.",
	"\t¿Quieres borrar esta partida?",
	"\tNo hay bloques de memoria libres.",

	// Options
	
	"\tEscucha la música.",
	"\tSelecciona Estéreo / Mono.",
	"\tConfigura la función de vibración.",
	"\tSelecciona el idioma de las voces.",
	"\tGuarda o carga datos de juego.",
	"\tCambia el tema de la pantalla del menú.",
	"\tCambia la configuración PAL TV.",
	"\tCambia el sonido a estéreo.",
	"\tCambia el sonido a mono.",
	"\tActiva la función de vibración.",
	"\tDesactiva la función de vibración.",
	"\tVoces en Español Castellano.",
	"\tVoces en japonés.",
	"\tSubtítulos en inglés.",
	"\tSubtítulos en japonés.",
	"\tSubtítulos en alemán.",
	"\tSubtítulos en francés.",
	"\tSubtítulos en español.",

	// Sound test general

	"\tSelecciona una categoría de música.",
	"\tSelecciona una canción o música.",

	// Menu themes
	
	"\tDebes cargar el archivo del tema.",
	"\tSelecciona un tema.",
	"\tCargando el archivo de tema.",
	"\tNo se pudo cargar el archivo.",
	"\tNo hay un archivo de tema.",
	"\tDescarga el archivo de la página web.",

	// TV settings

	"\tPrueba de compatibilidad de TV 60Hz.",
	"\tUna imagen de Sonic aparecerá en 5 segundos.",
	"\tSi la ves bien, es compatible con 60Hz.",
	"\tVisualización con 50Hz.",
	"\tLa imagen se ve en todas las TV PAL",
	"\tVisualización con 60Hz.",
	"\tSe necesita una TV compatible 60Hz.",

	// Separate string for Italian language
	
	"\tSubtítulos en italiano.",

	// Progress percentage (unused)
	
	"NUEVO",
	"10%SUPERADO",
	"20%SUPERADO",
	"30%SUPERADO",
	"40%SUPERADO",
	"50%SUPERADO",
	"60%SUPERADO",
	"70%SUPERADO",
	"80%SUPERADO",
	"90%SUPERADO",

	// Story select

	"\tElige una historia.",
	"\tEmpieza en cualquier escena.",

	// Stage select

	"\tElige un nivel.",
	"\tElige una misión.",

	// Character select
		
	"\tElige un personaje.",

	// Boss attack

	"\tPelea contra los jefes de cada historia.",

	// Dreamcast 2P mode

	"\tElige un grupo con el panel de control.",
	"\tElige el modo de juego.",
	"\tTipo de juego elegido al azar.",
	"\tElige un nivel de batalla.",
	"\tElige un nivel de batalla.",

	// Kart racing

	"\tElige un piloto.",
	"\tElige un circuito.",
	"\tJuega en el circuito descargado.",
	"\tComprobando tarjeta de memoria.",
	"\tElige un circuito descargado.",
	"\tNo se encontró ningún archivo de circuito.",
	"\tComprobando tarjeta de memoria.",
	"\tNo se encontró ningún archivo descargado.",
	"\tElige un evento descargado.",
	"\t¿Quieres jugar a este evento?",
	"\tEsta nivel todavía no está disponible.",

	// Sound test

	"\tTema principal de Sonic Adventure 2.",
	"\tTema de Sonic.",
	"\tTema de Tails.",
	"\tTema de Knuckles.",
	"\tTema de Shadow.",
	"\tTema de Eggman.",
	"\tTema de Rouge.",
	"\tTema de Amy.",
	"\tMúsica para las peleas contra jefes.",

	"\tMúsica de City Escape.",
	"\tMúsica de Wild Canyon.",
	"\tMúsica de Prision Lane.",
	"\tMúsica de Metal Harbor.",
	"\tMúsica de Green Forest.",
	"\tMúsica de Pumpkin Hill.",
	"\tMúsica de Mission Street.",
	"\tMúsica de Acuatic Mine.",
	"\tMúsica de la Carrera de Karts.",
	"\tMúsica de Hidden Base.",
	"\tMúsica de Pyramid Cave.",
	"\tMúsica de Death Chamber.",
	"\tMúsica de Eternal Engine.",
	"\tMúsica de Meteor Herd.",
	"\tMúsica de Crazy Gadget.",
	"\tMúsica de Final Rush.",
	"\tMúsica de Iron Gate.",
	"\tMúsica de Dry Lagoon.",
	"\tMúsica de Sand Ocean.",
	"\tMúsica de Radical Highway.",
	"\tMúsica de Egg Quarters.",
	"\tMúsica de Lost Colony.",
	"\tMúsica de Weapons Bed.",
	"\tMúsica de Security Hall.",
	"\tMúsica de White Jungle.",
	"\tMúsica de Sky Rail.",
	"\tMúsica de Mad Space.",
	"\tMúsica de Cosmic Wall.",
	"\tMúsica de Final Chase.",
	"\tMúsica de Canon's Core.",

	"\tMúsica del Jardín Chao.",
	"\tMúsica del Kinder Chao.",
	"\tMúsica del Vestíbulo Chao.",
	"\tMúsica de la ceremonia de premios.",
	"\tMúsica de la carrera nivel principiante.",
	"\tMúsica de la carrera de desafío.",
	"\tMúsica de la entrada.",
	"\tMúsica de la carrera Joya.",
	"\tMúsica de la danza de apareamiento.",
	"\tMúsica de fuga.",
	"\tMúsica de la entrega de premios.",
	"\tMúsica del jardín Dark.",
	"\tMúsica del jardín Hero.",
	"\tMúsica de la carrera Dark.",
	"\tMúsica de la carrera Hero.",
	"\tMúsica de festival del jardín Dark.",
	"\tMúsica de festival del jardín Hero.",
	"\tMúsica del Jardín Chao.",

	"\tMúsica de evento.",
	"\tJingle del nivel completado.",
	"\tJingle de velocidad extra.",
	"\tJingle de invulnerabilidad.",
	"\tJingle de ahogamiento.",
	"\tJingle de vida extra.",
	"\tJingle de la pantalla Continuar.",

	"\tMúsica del título.",
	"\tMúsica del menú.",
	"\tMúsica del tutorial.",

	"\tMúsica de Green Hill.",

	// Unlock stuff messages

	"\tAhora puedes seleccionar escenas\nde la historia Hero.",
	"\tSelecciona peleas contra los\njefes de la historia Hero.",
	"\tAhora puedes seleccionar escenas\nde la historia Dark.",
	"\tSelecciona peleas contra los\njefes de la historia Dark.",
	"\tTodas las peleas contra los\njefes están disponibles.",
	"\tMinijuego: Ya están disponibles\nlas carreras de karts con 3 circuitos.",
	"\tMinijuego: Ya están disponibles\nlas carreras de karts para 2 jugadores.",
	"\t¡Completaste las misiones de\nSonic! Elige otra skin de Sonic\nen el modo Versus para 2 jugadores.",
	"\t¡Completaste las misiones de\nTails! Selecciona otra skin de Tails\nen el modo Versus para 2 jugadores.",
	"\t¡Completaste las misiones de\nKnuckles! Selecciona otro skin de Knuckles\nen el modo Versus para 2 jugadores.",
	"\t¡Completaste las misiones de\nShadow! Selecciona otra skin de Shadow\nen el modo Versus para 2 jugadores.",
	"\t¡Completaste las misiones de\nEggman! Selecciona otra skin de Eggman\nen el modo Versus para 2 jugadores.",
	"\t¡Completaste las misiones de\nRouge! Selecciona otra skin para Rouge\nen el modo Versus para 2 jugadores.",
	"\tCompletaste todas las misiones\nde Sonic con Rango \"A\".",
	"\tSelecciona un personaje nuevo\nen el modo Versus de Sonic para 2J.",
	"\tCompletaste todas las misiones\nde Tails con Rango \"A\".",
	"\tSelecciona un personaje nuevo\nen el modo Versus de Tails para 2J.",
	"\tCompletaste todas las misiones\nde Knuckles con Rango \"A\".",
	"\tSelecciona un personaje nuevo\nen el modo Versus de Knuckles para 2J.",
	"\tCompletaste todas las misiones\nde Shadow con Rango \"A\".",
	"\tSelecciona un personaje nuevo\nen el modo Versus de Shadow para 2J.",
	"\tCompletaste todas las misiones\nde Eggman con Rango \"A\".",
	"\tSelecciona un personaje nuevo\nen el modo Versus de Eggman para 2J.",
	"\tCompletaste todas las misiones\nde Rouge con Rango \"A\".",
	"\tSelecciona un personaje nuevo\nen el modo Versus de Rouge para 2 jugadores.",
	"\t¡Felicidades!\n¡Reuniste todos los emblemas!\nDesbloqueaste un nuevo nivel.",

	// Hero story scene select

	"El principio",
	"Aparece Knuckles",
	"Rescatando\na Sonic",
	"Huida de\nIsla Prisión",
	"Cara a cara\ncon Shadow",
	"Montaña Fantasma",
	"Dominio Mundial",
	"Mina Acuática",
	"¿Dónde está\nEggman?",
	"Base oculta\nde Eggman",
	"Despegue del\ntransbordador",
	"La Colonia Espacial\n\"ARK\"",
	"Últimas piezas de la\nEsmeralda Maestra",
	"Sonic tiene\nproblemas",
	"La última\noportunidad",

	// Dark story scene select

	"El principio",
	"Aparece Rouge",
	"¡La base oculta\notra vez!",
	"El pasado\nde Shadow",
	"Infíltrate en \nla base oculta",
	"Reunión Sombría",
	"Obtener la Esmeralda\nCaos",
	"Pelea contra\nSonic",
	"El Imperio\nEggman",
	"La última\nEsmeralda Caos",
	"Emboscada en\nla base oculta",
	"Pelea contra\nKnuckles",
	"Plan de Eggman",
	"El misterio\nde Shadow",
	"La última\nbatalla",

	// Last story scene select

	"El principio",
	"La última misión",
	"La batalla\nsuprema",
	"La última\nesperanza",

	// World ranking and network connection stuff (unused)

	"Presiona el botón de elección de acción (Y) para\nactualizar los datos.",
	"Clasificación mundial por tiempo",
	"Clasificación mundial por puntos",
	"Clasificación mundial de Emblemas",
	"Clasificación Total",
	"Clasificación mundial por niveles",
	"Clasificación mundial por niveles",
	"Crea tus comentarios",
	"\tDebes registrarte en la red para\nver las clasificaciones mundiales.",
	"\tUsa el buscador más reciente \npara registrarte en la red.",
	"\tConectando a la red.",
	"\tMientras estés conectado a la red,\nse te aplicarán las tasas telefónicas\ncorrespondientes a una llamada \nmetropolitana.\nConsulta el manual para \nobtener más información.",
	"\t¿Quieres conectarte?",
	"\t<Sí><No>",
	"\tConectando.",
	"\tMientras estés conectado a la red,\nse te aplicarán las tasas telefónicas.\n¿Quieres conectarte?\n",
	"\t<Sí><No>",
	"\tMarcando \201\226\201\226\201\226\201|\201\226\201\226\201\226\201|\201\226\201#Numeración en curso...",
	"\t<Cancelar>",
	"\tIntroduce el nombre del servidor y \nla contraseña.",
	"Nombre<++>",
	"Contraseña<++>",
	"\tNo se ha encontrado el módem.",
	"\tComprueba la conexión del módem.",
	"\tLa línea está ocupada.",
	"\tMarcando el siguiente número.",
	"\tLa línea está ocupada.",
	"\tVuelve a intentarlo más tarde.",
	"\tLa línea está ocupada.",
	"\tComprueba configuración del módem",
	"\tNo ha sido posible marcar.",
	"\tComprueba el cable del teléfono\no la configuración del módem.",
	"\tNo se ha podido conectar. \nLa línea está ocupada. Comprueba \nla configuración del módem.",
	"\tImposible conectar con el servidor.\nLa autentificación ha fallado.",
	"\tComprueba el nombre y contraseña.",
	"\tDesconexión automática.",
	"\tSe te cobrarán las tarifas telefónicas\nmientras estés conectado.\n¿Quieres conectarte?",
	"\tConectado a la Red Sonic.",
	"\tEl servidor está ocupado.",
	"\tVuelve a intentarlo más tarde.",
	"\tActualizando la base de datos.\nPuede tardar unos minutos.",
	"<Cancelar>",
	"\t¿Cancelar la conexión de datos?",
	"<Sí><No>",
	"\t¿Seguro que quieres desconectarte?",
	"<Sí><No>",
	"\tSubiste hasta el puesto <++> \nen la clasificación total.",
	"\tBajaste hasta el puesto <++> \nen la clasificación total.",
	"\tSubiste hasta el puesto <++> \nen <++> por puntos.",
	"\tSubiste hasta el puesto <++> \nen <++> por tiempo.",
	"\tSubiste hasta el puesto <++>\nen la clasificación de emblemas.",
	"\tBajaste hasta el puesto <++>\nen <++> por puntos.",
	"\tBajaste hasta el puesto <++>\nen <++> por tiempo.",
	"\tBajaste hasta el puesto <++>\nen la puntuación de emblemas.",
	"<++>",
	"\t¿Quieres usar este correo \nelectrónico para la confirmación?\n(Puedes configurar el correo para \nrecibir información más adelante.)",
	"<Sí><No>",
	"\tNo hay correo configurado.",
	"\tUsa el buscador más reciente para\ncambiar la configuración del correo.",
	"¿Eres <++>?",
	"\tIntroduce tu contraseña.",
	"\t<Aceptar><Cancelar><La olvidé>",
	"\tContraseña incorrecta.\nIntroduce la contraseña otra vez.",
	"<Aceptar><Cancelar><Olvidé con.>",
	"\t¿Quieres recibir tu contraseña\na través del correo electrónico?",
	"<Sí><No>",
	"\tSe te envió un correo. Míralo.",
	"\tBienvenido a la Red Sonic.",
	"\tIntroduce tu nombre de usuario.",
	"\tEl nombre de usuario no debe \nser superior a 12 caracteres.",
	"<Aceptar> <Cancelar>",
	"<++>",
	"\tEste nombre de usuario ya existe.",
	"\tIntroduce una contraseña para \nutilizar este nombre de usuario.",
	"<Aceptar><Cancelar><La olvidé>",
	"\tDespués, introduce la contraseña.",
	"\tLa contraseña deben tener mínimo \n5 caracteres y máximo 12.",
	"<Aceptar><Regresar>",
	"\tCrear cuenta de correo electrónico.",
	"\tSi olvidaste la contraseña, te la\npodemos mandar por correo.",
	"<Aceptar><Cancelar>",
	"\t¿Quieres compartir tu dirección de\ncorreo con otros usuarios?\nSi no quieres, selecciona \"No\".",
	"<Sí><No>",
	"\tSelecciona el país y la región \ndonde vives.",
	"País: <++>",
	"Región: <++>",
	"<Aceptar><Cancelar>",
	"\tLa Red Sonic es una zona pública\ndonde se intercambia información\ncon otros usuarios del mundo.\nCompórtate de manera civilizada.\nLos usuarios pueden recibir avisos y\nse les puede exigir que no usen \neste servicio, si las actividades\nvan contra las reglas de la Red Sonic.",
	"",
	"",
	"Registro completado.",
	"\tMostrar la clasificación\ndesde los primeros puestos.",
	"\tLista de clasificaciones.",
	"\tBuscar clasificación por usuario.",
	"\tclasificación por país o región.",
	"\tIntroduce clasificación.",
	"<++>",
	"\tIntroduce el parámetro de búsqueda.",
	"<++>",
	"\tIntroduce país que quieres ver.",
	"País<++>",
	"Región<++>",
	"<Aceptar> <Cancelar>",
	"\tPuedes ver la información del usuario.",
	"\tPresiona el botón de ataque (B) para volver\na la pantalla de la lista.",

	// Hero story recaps

	// City Escape
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Un grupo misterioso aparecio de la nada y...\n¿parece que me invitan a un viaje en helicoptero?",
	"¿Eh? ¿Estas son? ¡¿Esposas?!\n¡Para el carro! ¿Estan acusandome\nde haberme escapado de una instalación militar?",
	"Al principio estaba sorprendido,\npero se me esta acabando la paciencia.",
	"¡Me voy a pirar de\neste toston de sitio en cuanto antes!",

	// Big Foot
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Vaya por dios ¡Esa gente no se cansa!.\n¡¿Acaso no saben quien soy?!",
	"Han estado\nintentando pillarme todo el día.\nHasta se han traido un robot gigante.",
	"Creo que no se cansarán hasta atraparme...",
	"¡Ja! ¡Me encantaría verlo!.\n¡Seguro me cargo a esa chatarra en nada!",

	// Wild Canyon
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"De todas las cosas del mundo\nme han robado la Esmeralda Maestra.",
	"Y me la ha quitado\nesa Murcielaguita.",
	"Y cuando iba a\nrecuperarla de la nada apareció Eggman\npara robar la Esmeralda Maestra.",
	"Menos mal que pude\nromper la Esmeralda Maestra en el momento justo pero...\nLos trozos han salido disparados\npor todas partes.",
	"Esa murciélaga tambíen esta buscando los trozos.\n¡Debo darme prisa y recuperarlos todos para arreglar la esmeralda!",

	// Eggman 1
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Un día viendo las noticas\n¡Me enteré de algo horrible!.",
	"¡Mi mejor amigo Sonic habia sido capturado\npor la policía!",
	"¡Yo no me creo que eso sea cierto!\nHe cogido el Tornado y estoy yendo\na la prision en la que está Sonic.",
	"¡Pero para mi sorpresa!\n¡Nuestro enemigo Eggman staba allí!\n¡Y estába atacando a Amy!!\n¡Esto es horrible!",
	"¡Esta bien! ¡Vamos a enseñarle\nel nuevo poder del nuevo Tornado!",
	"¡Transformación del Tornado!",

	// Prison Lane
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"He conseguido rescatar a Amy de Eggman,\nY me ha contado que Eggman\nno esta tramando nada bueno.",
	"¡Me preocupa que es\nlo que trama, pero ¡debo\nrescatar a Sonic!",
	"¿Pero qué? ¿Qué vienes\nconmigo, Amy? Bueno, está bien,\npero ten cuidado y no te pongas en medio ¿Vale?.",

	// Metal Harbor
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"¡Venga ya Amy! ¿¡Para qué\nhas venido hasta aquí?!",
	"Bueno, no pasa nada. Pero me\npreocupa más ese otro erizo,\n¡Shadow! Ese otro erizo,\nidéntico a mí, que está ahora mismo en esta isla.",
	"Y ahora que lo se, me.\nvoy a escapar de este sitio en\ncuanto los polis estén distraidos.",
	"¡Espera! ¿Eso no\nme hace un criminal?",

	// Shadow 1
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"He conseguido salir\nde la prisión de una pieza.\n¡Y ¡le he encontrado!",
	"¡No te escaparás esta vez Shadow!",

	// Green Forest
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"He estado a PUNTO\nde vencer a Shadow,\npero de la nada...",
	"Eggman había dicho que la isla\niba a explotar en menos de cinco minutos.", // this one is unused for some reason (so you can move it to the previous line with some line breaks)
	"¡Agh! ¡Debo irme de aquí!\niré a por\nTails y Amy en cuanto antes.",

	// Pumpkin Hill
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"Confiado en mi destino de\nproteger la Esmeralda Maestra.\nHe llegado a un sitio extraño...",
	"El ambiente asusta a la vista,\npero no me intimida.",
	"¡Debo encontrar cuanto antes los\ntrozos de la Esmeralda Maestra!",

	// Mission Street
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"¡El Dr.Eggman ha anunciado que\nva a conquistar todo el mundo!",
	"El quiere conquistar el mundo\namenazandonos ¡Con un\narma destruyeplanetas!.\n¡No dejaré que lo haga!",
	"Parece que Eggman\nestá usando las Esmeraldas del Caos\npara darle energía.",
	"¡Tenemos que usar las\nEsmeraldas del Caos para\nencontrar a Eggman ¡Sea como sea!",
	"Pero primero necesitamos ir\na un lugar seguro.",

	// Aquatic Mine
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"He seguido la presencia\nde la Esmeralda Maestra hasta unas montañas.",
	"Aparentemente esto se usaba como\nuna mina de carbón.\nque ahora está casi inundada.",
	"Va a ser movidito encontrar\nlos trozos, pero cuanto menos\nme queje antes acabo.",
	"¡Debo darme prisa encontrando los trozos\nde la Esmeralda Maestra!",

	// Route 101
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"He intentado localizar a Eggman mediante\nlas señales de las esmeraldas.",
	"Y resulta que el grupo de Eggman\nestá en el espacio.",
	"¡Pero no importa! ¡Voy a hacer\nlo que sea para saber\nsu localización exacta!",
	"No te preocupes, Amy.\n¡Aunque no lo parezca,\nsoy muy bueno conduciendo!",
	"¡Voy a encontrar al presidente!",

	// Hidden Base
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Hemos conseguido encontrar al\npresidente y hemos localizado a Eggman.",
	"Parece que están en\nuna colonia espacial llamada ARK.",
	"¡Ahora nos vamos a\nuna base secreta de Eggman\nque está en una pirámide del desierto!",
	"¡Vale! ¡Yo\nencontraré la entrada!",

	// Pyramid Cave
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Nos hemos colado dentro de la pirámide para\nbuscar la base secreta de Eggman.",
	"Tiene que haber alguna forma\nde llegar al espacio desde aquí.\n¡No tenemos mucho tiempo!. ¡Hay que darse prisa!",

	// Death Chamber
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"Hemos encontrado la base de Eggman\ndentro de una pirámide.",
	"Pero se ve que para pasar por aquí,\nNecesitamos una llave.",
	"¿Qué? ¿Por qué tengo que buscar yo la llave?\nNecesito un descanso... Pero lo haré\npor la Esmeralda Maestra.",
	"Hm. ¡Ahora vereis por qué soy\nel mejor cazatesoros del mundo!",

	// King Boom Boo
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"No me ha costado nada\nencontrar la llave de aquella puerta.\nAhora podremos entrar a la base.",
	"¿Mmm? Siento una presencia extraña por aquí.\n¡¿U-Un fantasma?!\n¡No fastidies que este sitio esta encantado!",
	"No creo que pueda\nintentar hablar con el fantasma.\n¡Pero que sepa que yo voy a pasar!\n¡Aunque sea usando la fuerza!",

	// Egg Golem (hero)
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Gracias a la ayuda de Knuckles,\nhemos podido abrir la puerta\nsecreta de la base.",
	"Cuando vimos donde estaba Eggman\nnos dimos cuenta de que tenía,\n¡Un robot gigantesco!",
	"¡Nos ha tendido una emboscada!",
	"¡Ha! ¡Pero no creo que\nese trozo de chatarra pueda contra mi!",

	// Eternal Engine
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Después de habernos subido a una\ncapsula espacial de la base de Eggman,\npor fin hemos llegado a\nARK.",
	"Se ha ocurrido un plan para\nexplotar el arma con\nuna esmeralda falsa.",
	"Espero que Sonic\nse entere bien del plan.",
	"¡Ah, y yo tengo que destruir la fuente\nde energía de la colonia!",

	// Meteor Herd
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"¡Todas los trozos de la\nEsmeralda Maestra se han\nperdido por el espacio!",
	"No es nada facil proteger\nla esmeralda la verdad.",
	"Debo encontrar los trozos\nantes de que\nse pierdan de nuevo.",

	// Rouge
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"He conseguido encontrar la mitad de los trozos,\ny esa chica murciélago por fin\nha dado la cara.",
	"¡Ella debe tener la otra mitad!\n¡No hay más que hablar!\n¡No me voy a contener,\naunque sea una mujer!",
	"¡Recuperaré los trozos\nde la Esmeralda Maestra!",

	// Crazy Gadget
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"El plan estaba yendo de maravilla, pero\nderrepente,",
	"¡Amy había sido capturada\npor Eggman! Si quiero salvar a Amy\ntendré que darle la esmeralda.",
	"No tengo mucho tiempo antes de que\nEggman dispare de nuevo.",
	"¡Tails, Amy!¡Voy para allá!",

	// Eggman 2
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Sonic ha caido en la trampa\nde Eggman y lo han enviado al espacio.",
	"¡No me lo creo...! ¡No es\nposible que Sonic haya muerto así!",
	"¡No te saldrás con la tuya, Eggman!\n¡Voy a acabar contigo! ¡Y no me voy a echar atrás!",

	// Final Rush
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"¡Casi la palmo en esa\ntrampa de Eggman! Así que tuve\nque usar el Control Caos para escapar..",
	"¡Faltan solo unos minutos antes\nde que disparen de nuevo el cañón!",
	"¡Agh! ¡Voy a tener que\nir corriendo y tirar la esmeralda bomba\nal cañón! ¡Antes de que dispare!",

	// Shadow 2
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Justo cuando creía que\nnada podría ir a peor.\n¡Aparece ese\nerizo impostor!",
	"¡Shadow, veamos el verdadero\npoder de la forma de vida definitiva!",

	// Dark story recaps

	// Iron Gate
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"Hace poco me encontré con el diario\nde mi abuelo, en el que decía que había\nun arma secreta muy podreosa llamada  \"Proyecto Shadow\".",
	"Esta arma ha estado oculta en\nuna base militar durante más de 50 años.",
	"Vaya perdida de proyecto...",
	"Este fue el ultimo experimento de mi abuelo,\nel profesor Gerald Robotnik.\n¡El mejor científico en la historia de la ciencia!.",
	"Ese experimento será MIO.",

	// Hot Shot
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"He estado en un profundo\nsueño durante 50 años...",
	"Cuando me desperté, estaba delante mia,\nel nieto del Pr.Gerald.\nEl Dr.Eggman.",
	"Como recompensa por haberme desperado\nLe concederé su deseo más preciado.",
	"Pero primero, mostraré mi verdadero poder\ndestruyendo a esta basura militar en escombros,\nantes de que te des cuenta.",

	// Dry Lagoon
	"Me llamo Rouge, la murciélaga,\nmás conocida como la\ncazatesoros Rouge.",
	"Me encantan las joyas. Nunca me canso de ellas\n¡Y un día encontré la mejor de todas!\nLa Esmeralda Maestra.",
	"Pero había un\nequidna pesadisimo evitando que me la llevase.\n¡No me deja tranquila!",
	"Después apareció un viejo\ncon bigote, el Dr.Eggman\n¡Y de repente el equidna destrozó la Esmeralda Maestra en trozos!.",
	"¡Argh ¿¡Pero qué has hecho!?",
	"Ahora debo encontrar\nesos trozos\ncuanto antes.",

	// Sand Ocean
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"He liberado a Shadow de\nesa base militar.",
	"Pero ahora, el quiere que\ntraiga las Esmeraldas del Caos a la\nColonia Espacial ARK.",
	"No sé qué estará pasando.\nPero será mejor que vuelva a mi base\ny revisar si todo va bien...",

	// Radical Highway
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"He robado el banco de la ciudad\npara hacerme con una Esmeralda del Caos.",
	"La policía ahora está intentando atraparme.\nMe da igual si saben quien soy o no.\nPero será una perdida de tiempo que intenten atraparme.",
	"No tengo tiempo para lidiar con esta tontería.\nMe voy de aquí.",

	// Egg Quarters
	"Me llamo Rouge, la murciélaga,\nmás conocida como la\ncazatesoros Rouge.",
	"Cuando ese tal\nEggman apareció antes. Fui capaz de ponerle un\ntransmisor en su máquina.",
	"Aún no os puedo decir porque, Jiji...",
	"Bueno, lo he seguido hasta\nuna pirámide,\npero hay un callejón sin salida.",
	"Parece que tengo que encontrar\nunas llaves para pasar\npor esta puerta.",

	// Lost Colony
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"Siguiendo las instrucciones de Shadow,\nhe llegado a la Colonia Espacial ARK.",
	"¿Qué es exactamente lo que\nhay en el centro de esta colonia?\nDebo ir a averiguarlo.",

	// Weapons Bed
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"Se unió al equipo una chica llamada Rouge\nque nos acompañó hasta Prision Island.",
	"Hemos vuelto aquí para robar\nuna Esmeralda del Caos que está por aquí escondida.",
	"¡Yo como soy el líder\ndistraeré a la policía!\n¡Qué empiece el plan!",

	// Tails 1
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"Justo cuando estabamos llegando a la\nbase militar para robar\nla Esmeralda del Caos, ¡nos encontramos\na alguien muy inoportuno!",
	"¡Shadow, Rouge!\n¡Yo me encargo de él! ¡Daos prisa!",
	"Muy bien zorro...\n¿Preparado para perder?",

	// Security Hall
	"Me llamo Rouge, la murciélaga,\nmás conocida como la\ncazatesoros Rouge.",
	"Habíamos ido a la base militar,\njusto como lo planeó el Doctor.",
	"tengo que encontrar tres\nEsmeraldas del Caos que estarán,\nescondidas por aquí.",

	// Flying Dog
	"Me llamo Rouge, la murciélaga,\nmás conocida como la\ncazatesoros Rouge.",
	"¡Ay no! ¡¿Cómo\nme ha salido todo tan mal?!",
	"Cuando conseguí\nlas tres Esmeraldas, estaba haciendo\ncosillas sin importancia.",
	"cuando el sistema de vigilancia me\ndetectó y me encerré aquí sin querer.",
	"¡Y de la nada aparece ese robot volador!",
	"¡No queda nada para que\nla bomba que puso Shadow explote!\n¡Ah!¡Qué asco!",

	// White Jungle
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"Aparentemente, Rouge ha fallado en su misión.",
	"A mi no me importa si ella muere.\nPero tiene las esmeraldas,\nasí que no tengo más remedio que ir a salvarla.",
	"Debo darme prisa.\nLa bomba explotará dentro de poco...",

	// Sonic 1
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"Cuando estaba yendo a\nrescatar a Rouge, ese erizo azul\napareció frente a mí.",
	"Ese erizo no deja de molestar.¡Es hora de enseñarle mi verdadero poder!",

	// Route 280
	"Me llamo Rouge, la murciélaga,\nmás conocida como la\ncazatesoros Rouge.",
	"Usando las Esmeraldas del Caos que hemos robado\nde la base militar, por fin hemos anunciado\nnuestra conquista de la Tierra.",
	"Pero el Cañón Eclipse,\nque es lo más importante,\nestá tardando demasiado en cargarse.",
	"Así que tendremos que encontrar la última\nEsmeralda del Caos.\n¡Hay que encontrar\na ese zorro cuanto antes!",

	// Sky Rail
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"Tras recibir la llamada de Rouge,\nfuí a perseguir el avión en\nel que estaba la última Esmeralda Caos.",
	"Hay un montón de montañas raras\npor esta zona, pero da igual.\nNo dejaré que el avión escape.",

	// Egg Golem (dark)
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"Iba a tenderle a Sonic una emboscada,\npara que cuando llegara fuera\naplastado por mi gran robot, pero...",
	"¡Maldito trozo de chatarra!\n¡¿Cómo eres tan débil!\n¿¡Y cómo te atreves\na revelarte contra mi?!",
	"¡Quita de mi vista!\n¡Sonic y sus amigos se\nestán escapando!",

	// Mad Space
	"Me llamo Rouge, la murciélaga,\nmás conocida como la\ncazatesoros Rouge.",
	"Pero... no\nsolo cazo tesoros.",
	"Cuando volvía de una\nmisión secreta,\nvi como el equipo del equidna estaba llegando.",
	"Eso significa que llegaron los\ntrozos de la Esmeralda Maestra también tienen que estar con ellos.\n¡Es mi oportunidad!",
	"Tengo un poco de información\ndel Proyecto Shadow...Pero bueno\niré a por la Esmeralda Maestra\ny me voy de este sitio.",

	// Knuckles
	"Me llamo Rouge, la murciélaga,\nmás conocida como la\ncazatesoros Rouge.",
	"¡Hay que ver! ¡Qué pesado\nes el equidna!",
	"¡Tendré que cojer la Esmeralda\nMaestra a la fuerza!",

	// Cosmic Wall
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"Al final el grupito de Sonic\nse ha colado en la colonia...",
	"¡¿Y por qué hay señales\nde dos Esmeraldas del Caos?!\n¡¿Qué rayos pasa?!",
	"Seguro estarán tendiendome una trampa...",
	"Si ese es el caso, ¡no me quedaré\nde brazos cruzados! ¡Volveré\na la colonia e iré a por ellos!",

	// Tails 2
	"¡Soy el Dr.Eggman! ¡El científico\nmás grande del mundo!",
	"¡JAJAJAJA! ¡Por fin lo he conseguido!\n¡He convertido a ese\npelopincho en basura espacial!",
	"Bueno...Seguimos por\ndonde lo hemos dejado Tails. ¡Puedes intentar detenerme\n pero te digo yo que el intento será en vano!",

	// Final Chase
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"Por fin están aquí todas\nlas Esmeraldas del Caos. Ya estoy\nmuy cerca\nde cumplir su deseo.",
	"Pero. He notado que\nalguien se dirige\nhacia el Cañón Eclipse.\nVaya pérdida de tiempo...",
	"Me encargaré yo mismo de\nque nada salga mal con el plan.\n¡Eliminaré a quién intente fastidiarlo!",

	// Sonic 2
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"Para mi sorpresa,el que se dirigía\nal Cañón Eclipse era tan solo el erizo azul.",
	"Yo creía que se había\nconvertido en polvo cuando el Doctor lo lanzó al espacio.\nPero veo que no es el caso.",
	"Ahora estoy convencido de que\nese erizo no es uno corriente.",
	"Como tú dices erizo, acabemos las cosas ¡aquí y ahora!.\n¡Prepárate para ver el poder de\nla forma de vida definitiva!",

	// Last story recaps

	// Cannon's Core
	"Me llamo Amy Rose.\n¡Y soy una persona amable y llena de energía!",
	"¡Ha ocurrido algo horrible! Un hombre\nllamado Profesor Gerald activó\nun programa que hizo hace años.",
	"¡El programa hará que la\ncolonia espacial se\nestrelle contra el planeta tierra!",
	"Parece que Eggman ha sido engañado\nal final por Shadow.",
	"Le muchas cosas,\npero ahora no hay tiempo.\n¡Hay que evitar que la colonia caiga!",
	"Al final, todos decidieron trabajar\njuntos e ir a las partes más profundas\nde la colonia para parar\nel poder de las Esmeraldas del Caos.",
	"¡No queda mucho tiempo!\n¡Mucha suerte a todos!",

	// The Biolizard
	"Me llamo Shadow.\nY soy la forma de vida definitiva.",
	"Gracias a Amy, he conseguido\nrecordar mejor el deseo de María.",
	"Y ahora que estoy aquí.\nCon el prototipo de la\nforma de vida definitiva delante de mí...",
	"¡Yo me encargo de él Sonic!\n¡Detén el poder de las esmeraldas rápido!",

	// The Finalhazard
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"¡El poder de las Esmeraldas del Caos\nse ha detenido\npero la colonia sigue cayendo",
	"¡El prototipo se ha pegado\na la colonia y va a estrellarse\ncontra la tierra!",
	"¡La colonia ha entrado en\nla atmósfera! ¡Tenemos que\npararle los pies en cuanto antes!",
	"¡Es hora de enseñarle a este\nbicho el poder definitivo!, ¡Vamos Shadow!\n¡Al estilo Super Sonic!",

	// 2P battle modes

	"\tElige un modo de juego.",
	"\tBatalla aleatoria.",
	"\tBatalla de carrera de acción.",
	"\tBatalla de caza de tesoros.",
	"\tBatalla de disparos.",
	"\tKarate Chao.",
	"\tCarrera Chao.",
	"\tCarrera de Karts.",
	"\tElige un personaje para la batalla.",

	// 2P battle character descriptions

	"SONIC",
	"Voz: AlexXR.",
	"Más veloz con 20 Anillos,",
	"ataca con 40 Anillos",
	"y para el tiempo con 60.",

	"SHADOW",
	"Voz: Nicky ",
	"Forma de vida definitiva",
	"Misma velocidad y",
	"ataques que Sonic.",

	"AMY",
	"Voz: BunyDubs",
	"enamorada de Sonic.",
	"No es muy rápida, pero",
	"ataca con menos Anillos.",

	"METAL SONIC",
	"Robot parecido a Sonic que",
	"debutó en \"Sonic CD\".",
	"Buena aceleración, pero",
	"sin ataques especiales.",

	"KNUCKLES",
	"Voz: AceDubs",
	"Protege la Esmeralda Maestra.",
	"Usa un ataque especial",
	"por cada 20 Anillos.",

	"ROUGE",
	"Voz:Evama Animation",
	"especializada en joyas.",
	"Utiliza el mismo ataque",
	"especial que Knuckles.",

	"TIKAL",
	"Voz: Vanessa Marín",
	"de Sonic Adventure.",
	"Rápida, pero no es buena",
	"peleando ni buscando.",

	"CAOS CERO",
	"Guardián de las Esm.",
	"Caos en Sonic Adventure.",
	"Es lento, pero pega",
	"duro y lejos",

	"TAILS",
	"Voz: Sofbpardo.",
	"Pelea con el \"Ciclón\".",
	"Usa un ataque especial",
	"cada 20 Anillos.",

	"EGGMAN",
	"Voz: KiranDubs",
	"Genio malvado.",
	"Usa el mismo ataque que",
	"Tails con 20 Anillos.",

	"UCP CHAO",
	"Esta máquina creada por",
	"Tails ayuda a un Chao.",
	"Es débil, pero es el",
	"personaje más rápido.",

	"UCP CHAO SOMBRÍO",
	"Un Chao sombrío en",
	"una máquina de Eggman.",
	"Es fuerte, pero es el",
	"personaje más lento.",

	"SUPER SONIC",
	"Sonic potenciado por",
	"las 7 Esmeraldas Caos.",
	"Es muy rápido, pero si",
	"no tiene Anillos, muere.",

	"SUPER SHADOW",
	"Es muy rápido, pero si",
	"las 7 Esmeraldas Caos.",
	"Muy rápido pero",
	"no tiene Anillos, muere.",

	// 2P battle stage select

	"\tElige un nivel para la batalla.",
	"\tContenido descargable necesario para desbloquear el nivel.",
	"\tElegir nivel del nivel 1 aleatoriamente.",
	"\tElegir nivel del nivel 2 aleatoriamente.",
	"\tElegir nivel del nivel 3 aleatoriamente.",
	"\tElegir nivel del nivel 4 aleatoriamente.",
	"\tCambiar la configuración de la batalla.",
	"\tVolver a elegir fase.",
	"\tDesventaja automática ACTIVAR / DESACTIVAR.",
	"\tCambiar configuración de la desventaja automática.",
	"\tEstablecer límite de tiempo ACTIVAR / DESACTIVAR.",
	"\tCambiar número de batallas.",

	// Emblem results

	"\tNivel de Sonic.",
	"\tNivel de Tails.",
	"\tNivel de Knuckles.",
	"\tNivel de Shadow.",
	"\tNivel de Eggman.",
	"\tNivel de Rouge.",
	"\tMisiones cumplidas de Sonic.",
	"\tMisiones cumplidas de Tails.",
	"\tMisiones cumplidas de Knuckles.",
	"\tMisiones cumplidas de Shadow.",
	"\tMisiones cumplidas de Eggman.",
	"\tMisiones cumplidas de Rouge.",
	"\tMostrar progreso del modo de historia.",
	"\tÚltimo nivel.",
	"\tCarrera Chao.",
	"\tMinijuego de Karts.",
	"\tMinijuego de pelea contra jefes.",
	"\tMisiones cumplidas del último nivel",
	"\tJuego de carreras de Chao.",
	"\tJuego de pelea de Chao.",

	// Sound test with Battle DLC

	"\tMúsica de Karate Chao.",
	"\tMúsica de selección de modo de Karate Chao.",
	"\tMúsica de Gran campeón de Karate Chao.",
	"\tMúsica de los resultados de Karate Chao.",
	"\tMúsica del interior de la cueva.",
	"\tMúsica del Menú de batalla.",
	"\tMúsica de Carrera Céntrica.",
	"\tMúsica de Carrera en Rieles.",
	"\tMúsica de Búsqueda en la Piscina.",
	"\tMúsica de Búsqueda Planetaria.",
	"\tMúsica de Carrera por la Cubierta.",
	"\tMúsica de Carrera Piramidal.",
	"\tMúsica de Partida de Chao.",

	// 2P battle score reset
	
	"\tPuedes borrar los resultados del Modo Versus.",
	"\tSe borrarán los resultados del Modo Versus. ¿Borrar?",
	"\tResultados de batalla borrados.",

	// SA2B TV settings

	"\tCambiar a salida progresiva.",
	"\tConfigurar salida progresiva.",
	"\tConfigurar salida VHS.",

	// SA2B unlock stuff messages

	"\tCompletaste las misiones\nde Sonic, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Tails, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Knuckles, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Shadows, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Eggman, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Rouge, ¡así que ahora\npuede usar un nuevo kart!",
	"\tMisiones de Sonic con Rango \"A\"",
	"\tUn nuevo traje para Sonic\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Tails\ncon Rango \"A\"",
	"\tMisiones de Tails\ncon Rango \"A\"", // this is probably a mistaken duplicate, should probably be a message about new skin for 2P mode
	"\tMisiones Knuckles\ncon Rango \"A\"",
	"\tUn nuevo traje para Knuckles\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Shadow\ncon Rango \"A\"",
	"\tUn nuevo traje para Shadow\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Eggman\ncon Rango \"A\"",
	"\tUn nuevo traje para Eggman\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Rouge\ncon Rango \"A\"",
	"\tUn nuevo traje para Rouge\nse puede usar en el\nmodo para 2 jugadores",
	"\t¡Felicidades!\nTienes todos los emblemas.\nSe desbloqueó un nivel secreto.",
	"\t¡Felicidades! Completaste Colina Verde\ncon Rango A. Ahora dispones de los más\nfuertes personajes para el modo\nde 2 jugadores de Sonic y Shadow.",
	"¡¡Se desbloquearon nuevos\nniveles de batalla en el\nmodo de 2 jugadores (Nivel 4)",

	// Other memory card stuff

	"\tEsta tarjeta de memoria es incompatible.",
	"\tHay que formatear la tarjeta de memoria.",
	"\tFormatear tarjeta en pantalla de tarjeta.",
	"\t¿Formatear?",
	"\tEsta tarjeta de memoria está defectuosa.",
	"\tNúmero máximo de archivos superado.",
	"\tDemasiados archivos. Chao sin guardar.",
	"\tEste archivo está dañado. ¿Quieres formatear?",

	// 2P battle main screen
	
	"\tEl J2 debe presionar START para confirmar.",
	"\tJ1 y J2 deben presionar ± para continuar.",
	"\tJ1 y J2 deben presionar ¶ para continuar.",
	"\tJ1 y J2 deben presionar ± para continuar.",

	// DLC
	
	"\tDesbloquear juego completo.",
	"\tContenido descargable necesario\npara desbloquear la selección de tema.",
};


void ReplaceAdvertise()
{
	AdvertiseGamepad[Language_Spanish] = AdvertiseKeyboard[Language_Spanish] = AdvertiseSpanishNew; // easy way, setting both gamepad and keyboard versions to be the same (they only have differences in, like, 5 lines or something)
}
