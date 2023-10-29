[![es](img/es.png)](README.es.md)

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

## Implemented IRC Commands

- `NICK`: Change your nickname.
- `USER`: Register username, hostname, server, and real name details.
- `PING`: Used to check if the connection is still active.
- `PONG`: A response to a PING command.
- `QUIT`: Disconnect from the server.
- `JOIN`: Join a channel.
- `PART`: Leave a channel.
- `TOPIC`: Set or view the topic of a channel.
- `NAMES`: List users in a channel.
- `LIST`: List channels and their topics.
- `KICK`: Remove a user from a channel.
- `PRIVMSG`: Send a message to another user or channel.
- `SAY`: Alias for PRIVMSG.
- `NOTICE`: Send a notice to another user or channel.
- `PASS`: Set a connection password.
- `INVITE`: Invite a user to a channel.
- `WHO`: List users matching a given mask.
- `WHOIS`: Get information about a user.
- `WHOWAS`: Get information about a user who is no longer connected.
- `MODE`: Set channel modes or user modes.

## Implemented IRC Error Messages

- `ERR_UNKNOWNCOMMAND_421`: Unknown command. 
- `ERR_NOSUCHNICK`: No such nickname or channel. 
- `ERR_NOSUCHCHANNEL`: No such channel. 
- `ERR_NOCHANNELS`: There are no channels. 
- `ERR_CANNOTSENDTOCHAN`: Cannot send to channel. 
- `ERR_TOOMANYCHANNELS`: Exceeded maximum channel limit. 
- `ERR_WASNOSUCHNICK`: There was no such nickname. 
- `ERR_NORECIPIENT`: No recipient given for a command. 
- `ERR_NOTEXTTOSEND`: No text to send. 
- `ERR_NONICKNAMEGIVEN`: No nickname given. 
- `ERR_NICKNAMEINUSE`: Nickname is already in use. 
- `ERR_NOTONCHANNEL`: User is not on that channel. 
- `ERR_USERONCHANNEL`: User is already on the channel. 
- `ERR_CHANOPRIVSNEEDED`: Insufficient privileges (not channel operator). 
- `ERR_PASSWDMISMATCH`: Incorrect password. 
- `ERR_PASSWDREQUIRED`: Password is required. 
- `ERR_YOUREBANNEDCREEP`: User is banned from the server. 
- `ERR_BANNEDFROMCHAN`: Cannot join channel due to ban. 
- `ERR_USERALREADYBANNED`: User is already banned. 
- `ERR_NEEDMOREPARAMS`: Not enough parameters for a command. 
- `ERR_ALREADYREGISTERED`: User is already registered. 
- `ERR_ERRONEUSNICKNAME`: Erroneous nickname. 


## Usage of `.ircmoderdocs`

The [ircmoderdocs](https://modern.ircdocs.horse/) web is a comprehensive guide for IRC server modes, commands, and their functionalities. It meticulously details command syntax and expected behaviors, serving as a crucial reference for both users and developers. This document is an invaluable resource for understanding and utilizing the various functionalities provided by the IRC server.

