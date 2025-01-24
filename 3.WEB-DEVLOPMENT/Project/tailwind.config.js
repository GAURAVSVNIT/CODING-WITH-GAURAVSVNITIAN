/** @type {import('tailwindcss').Config} */
export const content = ["./src/**/*.{html,js}"];
export const theme = {
  extend: {
    fontFamily: 
    { 
      'firacode': ['Fira Code', 'monospace'],
      'roboto': ['Roboto', 'sans-serif'],
      'poppins': ['Poppins', 'sans-serif'],
      'montserrat': ['Montserrat', 'sans-serif'],
      'inter': ['Inter', 'sans-serif'],
      'open-sans': ['Open Sans', 'sans-serif'],
      'raleway': ['Raleway', 'sans-serif'],
      'nunito': ['Nunito', 'sans-serif'],
      'lato': ['Lato', 'sans-serif'],
      'ubuntu': ['Ubuntu', 'sans-serif'],
      'alegreya': ['Alegreya', 'serif'],
      'pacifico': ['Pacifico', 'cursive'],
      'ninato': ['NinatoDreams', 'sans-serif'],
    },
  },
};
export const plugins = [
  require('daisyui'),
];

