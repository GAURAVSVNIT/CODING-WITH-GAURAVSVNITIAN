/** @type {import('tailwindcss').Config} */
export default {
  content: [
    "./src/**/*.{js,jsx,ts,tsx}",
  ],
  theme: {
    extend: {
      fontFamily: {
        sans: ['system-ui', 'Avenir', 'Helvetica', 'Arial', 'sans-serif'],
      },
      colors: {
        primary: '#646cff',
        'primary-hover': '#535bf2',
        'light-text': '#213547',
        'dark-text': 'rgba(255, 255, 255, 0.87)',
        'dark-bg': '#242424',
        'light-bg': '#ffffff',
      },
    },
  },
  plugins: [],
}
