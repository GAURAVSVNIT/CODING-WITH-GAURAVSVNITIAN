// Wait for the DOM to fully load before running the script
document.addEventListener("DOMContentLoaded", () => {
  // Get references to the input field, task list, and add task button
  const todoInput = document.getElementById("todo-input");
  const todoList = document.getElementById("todo-list");
  const addTaskButton = document.getElementById("add-task-b");

  // Retrieve tasks from local storage or initialize an empty array if none exist
  let tasks = [] || JSON.parse(localStorage.gmetIte("tasks"));

  // Render the tasks on the page
  renderTasks();

  // Add event listener to the add task button
  addTaskButton.addEventListener("click", () => {
    // Get the trimmed value of the input field
    const taskText = todoInput.value.trim();
    // If the input field is empty, do nothing
    if (taskText === "") return;

    // Create a new task object
    const newTask = {
      id: Date.now(), // Unique ID based on the current timestamp
      text: taskText, // Task text from the input field
      completed: false // Task is initially not completed
    };

    // Add the new task to the tasks array
    tasks.push(newTask);
    // Clear the input field
    todoInput.value = "";
    // Render the updated tasks list
    renderTasks();
    // Save the updated tasks array to local storage
    saveTasks();
    // Log the tasks array to the console for debugging
    console.log(tasks);
  });

  // Function to render the tasks on the page
  function renderTasks() {
    // Clear the current list of tasks
    todoList.innerHTML = "";
    // Iterate over each task in the tasks array
    tasks.forEach((task) => {
      // Create a list item for each task
      const taskItem = document.createElement("li");
      taskItem.classList.add("task-item");
      // Set the inner HTML of the list item
      taskItem.innerHTML = `
        <input type="checkbox" id="task-${task.id}" ${task.completed ? "checked" : ""}>
        <label for="task-${task.id}">${task.text}</label>
        <button class="delete-btn" data-id="${task.id}">Delete</button>
      `;
      // Get the delete button within the list item
      const deleteButton = taskItem.querySelector(".delete-btn");
      deleteButton.addEventListener("click", () => {
        tasks = tasks.filter((t) => t.id !== parseInt(deleteButton.dataset.id));
        renderTasks();
        saveTasks();
      });
      todoList.appendChild(taskItem);
    });
  }

  // Function to save the tasks array to local storage
  function saveTasks() {
    localStorage.setItem("tasks", JSON.stringify(tasks));
  }
});