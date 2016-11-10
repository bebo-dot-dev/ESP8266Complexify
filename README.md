# ESP8266Complexify
This is an ESP8266 arduino core c++ port of https://github.com/danpalmer/jquery.complexify.js. 

This is a minimal complexify implementation because there's no support for the extensive banned passwords list that is 
implemented in the original JS version of complexify and there's no support for configurable runtime options either.

This implementation is basically intended as a lightweight "server side" runtime version of complexify for an ESP8266 
embedded web server to complement jquery.complexify.js running in the browser. In other words:

1. an ESP8266 device will host a web server
2. the web server will serve up a change password page containing jquery.complexify.js
3. the user will use complexify in the browser and eventually HTTP POST their password to the ESP8266 device web server
4. the ESP8266 web server will use ESP8266Complexify to ensure the password sent up really is secure on the server side
