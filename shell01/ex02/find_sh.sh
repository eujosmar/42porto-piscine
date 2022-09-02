find . -type f -name '*.sh' -printf "%f\n" | xargs basename -a -s .sh 
