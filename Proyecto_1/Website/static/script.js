const takePhotoButton = document.getElementById('take-photo');
const photoContainer = document.getElementById('photo-container');

const OffAllLights = document.getElementById('OffAllLights');
const OnAllLights = document.getElementById('OnAllLights');

const LivingLight = document.getElementById('LivingLight');
const KitchenLight = document.getElementById('KitchenLight');
const Bedroom1Ligth = document.getElementById('Bedroom1Ligth');
const Bedroom2Ligth = document.getElementById('Bedroom2Ligth');
const BathLigth = document.getElementById('BathLigth');

LivingLight.addEventListener('click', () => {
  document.getElementById('LivingLightBulb').classList.toggle('active')
  document.getElementById('LivingLightBulbButton').classList.toggle('active')
});

KitchenLight.addEventListener('click', () => {
  document.getElementById('KitchenLightBulb').classList.toggle('active')
  document.getElementById('KitchenLightBulbButton').classList.toggle('active')
});

Bedroom1Ligth.addEventListener('click', () => {
  document.getElementById('Bedroom1LigthBulb').classList.toggle('active')
  document.getElementById('Bedroom1LigthBulbButton').classList.toggle('active')
});

Bedroom2Ligth.addEventListener('click', () => {
  document.getElementById('Bedroom2LigthBulb').classList.toggle('active')
  document.getElementById('Bedroom2LigthBulbButton').classList.toggle('active')
});

BathLigth.addEventListener('click', () => {
  document.getElementById('BathLigthBulb').classList.toggle('active')
  document.getElementById('BathLigthBulbButton').classList.toggle('active')
});

OffAllLights.addEventListener('click', () => {
  document.getElementById('LivingLightBulb').classList.remove('active')
  document.getElementById('LivingLightBulbButton').classList.remove('active')

  document.getElementById('KitchenLightBulb').classList.remove('active')
  document.getElementById('KitchenLightBulbButton').classList.remove('active')

  document.getElementById('Bedroom1LigthBulb').classList.remove('active')
  document.getElementById('Bedroom1LigthBulbButton').classList.remove('active')

  document.getElementById('Bedroom2LigthBulb').classList.remove('active')
  document.getElementById('Bedroom2LigthBulbButton').classList.remove('active')

  document.getElementById('BathLigthBulb').classList.remove('active')
  document.getElementById('BathLigthBulbButton').classList.remove('active')
});


OnAllLights.addEventListener('click', () => {
  document.getElementById('LivingLightBulb').classList.add('active')
  document.getElementById('LivingLightBulbButton').classList.add('active')

  document.getElementById('KitchenLightBulb').classList.add('active')
  document.getElementById('KitchenLightBulbButton').classList.add('active')

  document.getElementById('Bedroom1LigthBulb').classList.add('active')
  document.getElementById('Bedroom1LigthBulbButton').classList.add('active')

  document.getElementById('Bedroom2LigthBulb').classList.add('active')
  document.getElementById('Bedroom2LigthBulbButton').classList.add('active')

  document.getElementById('BathLigthBulb').classList.add('active')
  document.getElementById('BathLigthBulbButton').classList.add('active')
});



takePhotoButton.addEventListener('click', () => {
  const imageSrc = '/static/Image.jpg';
  const image = document.createElement('img');
  image.src = imageSrc;
  photoContainer.innerHTML = '';
  photoContainer.appendChild(image);
});

