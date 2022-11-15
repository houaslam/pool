cat /etc/passwd | grep -v '^#'| cut -d ':' -f 1  | rev | sort -nr |tr '\n' ', '
