client-> cookies
erver has-> sessions

cookies and sessions both are used to dave data.
cookies saved data in the client/ browser/ frontend

session -> saved data in the server/ backend

server session -> safer/ secure

restarting the server deleted the session data

for cookies you need cookie parser.. already preinstalled by express generator

cookie we have to send to the server... so
--- res.cookie(name, value)
