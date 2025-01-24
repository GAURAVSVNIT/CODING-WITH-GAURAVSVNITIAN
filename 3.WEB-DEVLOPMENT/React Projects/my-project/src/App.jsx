// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
import './App.css'

function App() {
  // const [count, setCount] = useState(0)
  // const [counter, setCounter]  = useState(15)

  //let counter = 15

  
  return (
    <>
      <div className='bg-gray-200 p-4 rounded-lg shadow-lg'>
        <h2 className="py-4 text  ">To-Do List</h2>
        <input type='text' placeholder='Add a task...' />
        <button>Add Task</button>
        <ul>
          <li>
            <input type='checkbox' />
            <label>GYM</label>
            <button>Delete</button>
          </li>
          <li>
            <input type='checkbox' />
            <label>Task 2</label>
            <button>Delete</button>
          </li>
          <li>
            <input type='checkbox' />
            <label>Task 3</label>
            <button>Delete</button>
          </li>
        </ul>
      </div>
    </>  
  );
}

export default App
