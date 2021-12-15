# MPI_template
1. Install VS Code<br>
2. Open powershell and touch:<br>
      ssh-keygen<br>
      notepad.exe .ssh/id_rsa.pub<br>
      ^^^Copy key from notepad^^^<br>
3. Connect to server via SSH and touch:<br>
      mkdir .ssh<br>
      touch .ssh/authorized_keys<br>
      echo "yout_key_from_clipboard" > .ssh/authorized_keys<br>
4. Open VS Code and install Remote-SSH plugin<br>
5. When plugin was installed tap green button on left bottom corner<br>
6. Tap Connect to host...<br>
7. Enter something like this: ssh you_login@server_ip<br>
8. Tap Linux<br>
9. When all is done tap Ternianl on top bar<br>
10. Tap: <br>
     mkdir src<br>
     cd src<br>
     git clone https://github.com/Funny59/MPI_template<br>
11. In VS Code open folder src<br>
12. Compile: ./make.sh main.c replace_it_count_of_proc<br>
13. Tap "cat sl" and push TAB and ENTER<br>
