const takePhotoButton = document.getElementById('take-photo');
const photoContainer = document.getElementById('photo-container');
const buttons = document.querySelectorAll('.button');

buttons.forEach(button => {
  button.addEventListener('click', () => {
    button.classList.toggle('active');
  });
});

takePhotoButton.addEventListener('click', () => {
  const imageSrc = 'https://via.placeholder.com/300';
  const image = document.createElement('img');
  image.src = imageSrc;
  photoContainer.innerHTML = '';
  photoContainer.appendChild(image);
});

