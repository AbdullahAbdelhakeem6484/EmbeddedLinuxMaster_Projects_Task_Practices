# client.py
import socket

def send_command(command):
    host = 'your_laptop_ip'
    port = 54000

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        try:
            s.connect((host, port))
            s.sendall(command.encode())
            data = s.recv(1024)
            print('Received:', data.decode())
        except ConnectionRefusedError:
            print('Failed to connect. Make sure the server is running on the laptop.')

# Example usage
send_command('VolumeUp')
