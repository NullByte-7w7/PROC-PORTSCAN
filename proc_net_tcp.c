// made by nullbyte member PWNBUFFER.ORG
//about portscan it uses /proc/net/tcp, that is, no network noises or something that sysadmin finds strange, if you are a guy who hates to take a look at /proc/net/tcp and have to convert the hexadecimals to decimal is in the right place
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void process_proc_tcp(void){


                // open file /proc/net/tcp
                char proc_tcp[1337];
                FILE *proc_net_tcp = fopen("/proc/net/tcp", "r");

                // store the values of the doors in hexadecimal
                char *ports_special[] = {"0539", "14EB", "01BD", "008B" ,"0017","0015","0050","0035", "0016"};
                int tamanho = sizeof(ports_special) / sizeof(ports_special[0]); // making the exact sum of elements it contains in the array, an easy-to-understand mathematical calculation is made, element amount 3 * 4 = 12 / 4 = 3. having 3 elements and 12 bytes knowing that an int has 4 bytes

                // doing the reading and comparison
                        for(int i = 0; i < tamanho; i++){
                        rewind(proc_net_tcp);
                        while(fgets(proc_tcp, sizeof(proc_tcp), proc_net_tcp)){
                        if(strstr(proc_tcp, ports_special[i]) != NULL){
                                        int decimal = (int)strtol(ports_special[i], NULL, 16); // converting a pointer to integer 
                                        printf("[*] PORTS FOUND => %i\n", decimal);
                        }
                     }
                }

}


// main code
int main(void){

        printf("[*] WHEREP PORT 0x0539\n");
        process_proc_tcp();


        return 0;
}
