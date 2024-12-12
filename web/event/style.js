// Reference elements
const button = document.getElementById('eventButton');
const output = document.getElementById('eventOutput');

// Button click event
button.addEventListener('click', () => {
  output.textContent = 'Button Clicked!';
  output.style.backgroundColor = '#81c784';
});

// Keypress event
document.addEventListener('keydown', (event) => {
  output.textContent = `Key Pressed: ${event.key}`;
  output.style.backgroundColor = '#ffcc80';
});

// Window resize event
window.addEventListener('resize', () => {
  output.textContent = 'Window Resized!';
  output.style.backgroundColor = '#90caf9';
});

// Mouse over button event
button.addEventListener('mouseover', () => {
  output.textContent = 'Mouse Over Button!';
  output.style.backgroundColor = '#ce93d8';
});

// Mouse leave button event
button.addEventListener('mouseleave', () => {
  output.textContent = 'Mouse Left Button!';
  output.style.backgroundColor = '#e0f7fa';
});
