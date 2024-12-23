let todo = [];

let input = prompt("What would you like to do?");
    while (input != "quit") 
    {
        if (input == "list")
        {
            console.log("**********");
            for(let i=0; i<todo.length; i++)
            {
                console.log(task);
            }
        }
        else if (input == "add")
        {
            let newTask = prompt("Enter new task");
            todo.push(newTask);
            console.log("Task added"); 
        }
        else if (input == "delete")
        {
            let deleteTask = prompt("Enter task index to delete");
            todo.splice(deleteTask, 1);
            console.log("Task deleted");
        }
        else
        {
            console.log("Command not recognized");
        }

        input = prompt("What would you like to do?");
    }
console.log("OK, YOU QUIT THE APP");