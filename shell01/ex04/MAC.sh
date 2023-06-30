ifconfig | grep "ether " | tr -d 'ether' | xargs | tr ' ' '\n' 
