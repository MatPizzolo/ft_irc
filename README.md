# `Ft_Irc`

An IRC (Internet Relay Chat) server, developed entirely in C++98, with necessary integration of C system functions. The project aims to offer a comprehensive exploration of socket interactions within an IRC server environment.
<br/>
It is designed to support a diverse array of clients and has undergone rigorous testing, demonstrating compatibility with various IRC client applications such as LimeChat, Irssi, Colloquy, WeChat and Netcat.

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
