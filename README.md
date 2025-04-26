# PROC-PORTSCAN







## who wears that?

| **this tool is intended for hackers who want to get information from connections on the local machine quickly without using reverse proxy or something, or a random guy who is doing his ctf!**


## what benefits of using this proc-portscan?

1. **no network noise or alert sysadmin/blue team**
2. **not having to read /proc/net/tcp and convert each port to decimal, depending on the network you are on, it can be challenging to convert all ports**
3. **easy and fast**

## how it work?

**let's go to the more technical part, explaining the code and how it works. as we can see in the image below we have the execution of proc-portscan:**

![image](https://github.com/user-attachments/assets/31ed8170-1565-4747-ae0a-ebd9b661ff49)

**here is the table that contains the ports**

![image](https://github.com/user-attachments/assets/7c52634f-62d1-4a6e-97b0-421ab31917c6)

## Warning
**as you can see it has repeated ports, I'm using my vps and it appears 3 ports 53 probably is some problem with vps, but yes it works normally, if you want by your choice put the ports you want, just modify the source code**
