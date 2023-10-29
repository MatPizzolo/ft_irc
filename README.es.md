# `Ft_Irc`

Un servidor de IRC (Internet Relay Chat), desarrollado íntegramente en C++98, con la integración necesaria de funciones del sistema en C.
El proyecto tiene como objetivo ofrecer una exploración de las interacciones de sockets dentro de un entorno de servidor de IRC.
<br/>
Está diseñado para admitir una amplia gama de clientes y ha pasado por pruebas rigurosas, demostrando su compatibilidad con varias aplicaciones cliente de IRC como LimeChat, Irssi, Colloquy, WeChat y Netcat.

[Tema](es.subject.pdf)

## Descripcion

IRC (Internet Relay Chat) es un protocolo a nivel de aplicación para intercambiar mensajes en tiempo real. Diseñado principalmente para comunicación grupal, también permite comunicarse a través de mensajes privados e intercambiar datos, incluyendo archivos. IRC utiliza el protocolo de transporte TCP y TLS criptográfico (opcional).

IRC comenzó a ganar popularidad, en particular, después de la Operación "Desert Storm" (1991), cuando mensajes de todo el mundo se recopilaban en un solo lugar y se transmitían en línea a través de IRC.

Debido a la simplicidad técnica de implementación, el protocolo IRC se utilizó en la organización de botnets como un medio para transmitir comandos de control a las computadoras participantes en la botnet por parte del propietario.


## Instalacion y Uso

Clona este repositorio en tu computadora:
```sh
git clone https://github.com/MatPizzolo/ft_irc.git
```

Primero, compila e instala la biblioteca:
```sh
make
```

Ejecuta:
```sh
./ircserv [port] [pass]
```

## Comandos IRC Implementados

- `NICK`: Cambiar tu apodo.
- `USER`: Registrar detalles de nombre de usuario, nombre de host, servidor y nombre real.
- `PING`: Usado para verificar si la conexión sigue activa.
- `PONG`: Respuesta a un comando PING.
- `QUIT`: Desconectarse del servidor.
- `JOIN`: Unirse a un canal.
- `PART`: Abandonar un canal.
- `TOPIC`: Establecer o ver el tema de un canal.
- `NAMES`: Listar usuarios en un canal.
- `LIST`: Listar canales y sus temas.
- `KICK`: Quitar un usuario de un canal.
- `PRIVMSG`: Enviar un mensaje a otro usuario o canal.
- `SAY`: Alias para PRIVMSG.
- `NOTICE`: Enviar una notificación a otro usuario o canal.
- `PASS`: Establecer una contraseña de conexión.
- `INVITE`: Invitar a un usuario a un canal.
- `WHO`: Listar usuarios que coinciden con un determinado filtro.
- `WHOIS`: Obtener información sobre un usuario.
- `WHOWAS`: Obtener información sobre un usuario que ya no está conectado.
- `MODE`: Establecer modos de canal o modos de usuario.

## Mensajes de Error IRC Implementados

- `ERR_UNKNOWNCOMMAND_421`: Comando desconocido.
- `ERR_NOSUCHNICK`: No existe ese apodo o canal.
- `ERR_NOSUCHCHANNEL`: No existe ese canal.
- `ERR_NOCHANNELS`: No hay canales.
- `ERR_CANNOTSENDTOCHAN`: No se puede enviar al canal.
- `ERR_TOOMANYCHANNELS`: Límite máximo de canales superado.
- `ERR_WASNOSUCHNICK`: No existía ese apodo.
- `ERR_NORECIPIENT`: No se especificó un destinatario para un comando.
- `ERR_NOTEXTTOSEND`: No hay texto para enviar.
- `ERR_NONICKNAMEGIVEN`: No se dio un apodo.
- `ERR_NICKNAMEINUSE`: El apodo ya está en uso.
- `ERR_NOTONCHANNEL`: El usuario no está en ese canal.
- `ERR_USERONCHANNEL`: El usuario ya está en el canal.
- `ERR_CHANOPRIVSNEEDED`: Privilegios insuficientes (no es operador de canal).
- `ERR_PASSWDMISMATCH`: Contraseña incorrecta.
- `ERR_PASSWDREQUIRED`: Se requiere una contraseña.
- `ERR_YOUREBANNEDCREEP`: El usuario está vetado en el servidor.
- `ERR_BANNEDFROMCHAN`: No se puede unir al canal debido al veto.
- `ERR_USERALREADYBANNED`: El usuario ya está vetado.
- `ERR_NEEDMOREPARAMS`: Parámetros insuficientes para un comando.
- `ERR_ALREADYREGISTERED`: El usuario ya está registrado.
- `ERR_ERRONEUSNICKNAME`: Apodo erróneo.

## Uso de `.ircmoderdocs`

El [ircmoderdocs](https://modern.ircdocs.horse/) es una guía completa para modos de servidor IRC, comandos y sus funcionalidades. Detalla minuciosamente la sintaxis de comandos y comportamientos esperados, siendo una referencia crucial tanto para usuarios como desarrolladores. Este documento es un recurso invaluable para comprender y utilizar las diversas funcionalidades proporcionadas por el servidor IRC.


