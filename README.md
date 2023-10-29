# `Ft_Irc`

This test project is intended for a deeper study of the operation of sockets and their interactions, creating an IRC server. The whole project is written in c++=98 except for needed C system functions.
</br>
It supports all types of clients. Proven to work with limechat, irssi, colloquy, wechat, netcat

[Subject](en.subject.pdf)

## Description

IRC (Internet Relay Chat) - an application-level Protocol for exchanging messages in real-time. Designed primarily for group communication, it also allows you to 
communicate via private messages and exchange data, including files. IRC uses the TCP transport protocol and cryptographic TLS (optional). IRC began to gain 
particular popularity after Operation "Desert Storm" (1991), when messages from all over the world were collected in one place and broadcast on-line to IRC. 
Due to the technical simplicity of implementation, the IRC protocol was used in the organization of botnets as a means of transmitting control commands to the 
computers participating in the botnet from the owner.


## Installation & Usage

Clone this repository to your computer:
```sh
git clone https://github.com/MatPizzolo/ft_irc.git
```

First compile and install library
```sh
make
```

Run
```sh
./ircserv [port] [pass]
```
