from flask import Flask, render_template, request, redirect, url_for, session
from flask_socketio import SocketIO
import bcrypt

# Algunas configuraciones para flask
app = Flask(__name__)
app.static_folder = 'static'  # Set the path to your static folder
app.static_url_path = '/static'  # Set the URL path for serving static files
app.secret_key = "embebidos2023"
app.debug = True

# Hardcoded username and hashed_password for demonstration purposes
valid_username = 'asd123'
valid_password = 'asd123'
salt = bcrypt.gensalt()
hashed_valid_password = bcrypt.hashpw(valid_password.encode('utf-8'), salt)

socketio = SocketIO(app)

@app.route('/')
def index():
  if 'username' in session:
    return render_template('index.html')
  return redirect(url_for('login'))

@app.route('/login', methods=['GET', 'POST'])
def login():
  if request.method == 'POST':
    username = request.form['username']
    password = request.form['password']
    hashed_password = bcrypt.hashpw(password.encode('utf-8'), salt)

    print("hashed\n", hashed_password)
    print("hashed_valid\n", hashed_valid_password)
    print(hashed_valid_password == hashed_password)

    if hashed_valid_password == hashed_password:
      session['username'] = username
      return redirect(url_for('index'))
    else:
      return "Invalid login credentials. Please try again."

  return render_template('login.html')

@socketio.on('connect')
def handle_connect():
  None

@socketio.on('SingleLED')
def handle_message(target, state):
  state = int(state)
  if(target == 'LivingLightBulb'):
    print('LivingLightBulb:', state)
  elif(target == 'KitchenLightBulb'):
    print('KitchenLightBulb:', state)
  elif(target == 'Bedroom1LigthBulb'):
    print('Bedroom1LigthBulb:', state)
  elif(target == 'Bedroom2LigthBulb'):
    print('Bedroom2LigthBulb:', state)
  elif(target == 'BathLigthBulb'):
    print('BathLigthBulb:', state)
  else:
    print ("No se ha encontrado el target")

@socketio.on('MultiLED')
def handle_message(state):
    state = int(state)
    print('MultiLED:', state)

@socketio.on('StateDOORS')
def handle_message():
    signal1 = bool(1)
    signal2 = bool(0)
    signal3 = bool(0)
    signal4 = bool(0)

    doors = [
      {
        'target': 'MainDoor',
        'value': signal1,
      },
      {
        'target': 'Bedroom1Door',
        'value': signal2,
      },
      {
        'target': 'Bedroom2Door',
        'value': signal3,
      },
      {
        'target': 'BathDoor',
        'value': signal4,
      },
    ]
    socketio.emit('StateDOORS', doors)

if __name__ == '__main__':
  socketio.run(app, host='127.0.0.1', port=8080)  # Replace with your desired host and port
