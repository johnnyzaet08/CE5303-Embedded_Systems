from flask import Flask, render_template, request, redirect, url_for, session
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

if __name__ == '__main__':
    app.run()