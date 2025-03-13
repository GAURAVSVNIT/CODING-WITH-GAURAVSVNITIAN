#!/usr/bin/env node

import fs from 'fs';
import path from 'path';
const filePath = "./To-Do/task.json";

const createFileIfNotExists = (filePath) => {
    const dir = path.dirname(filePath);
    if (!fs.existsSync(dir)) {
        fs.mkdirSync(dir, { recursive: true });
    }
    if (!fs.existsSync(filePath)) {
        fs.writeFileSync(filePath, JSON.stringify([]));
    }
};

const loadTasks = () =>
{
    try{
        createFileIfNotExists(filePath);
        const dataBuffer = fs.readFileSync(filePath); // This file returns a object for reading the data within convert in to the string
        const dataJSON = dataBuffer.toString();
        return JSON.parse(dataJSON);
    }
    catch (error) {
        return [];
    }
};

//Writing the File
const saveTasks = (tasks) =>
{
    const dataJSON = JSON.stringify(tasks);
    fs.writeFileSync(filePath, dataJSON);
};

const addTask = (task) => 
{
    const tasks = loadTasks();
    tasks.push({task});
    saveTasks(tasks);
    console.log("Task Added", tasks);
};

const listTasks = () => {
    const tasks = loadTasks();
    console.log("Tasks:", tasks);
};

const remove = (index) => {
    const tasks = loadTasks();
    if (index >= 0 && index < tasks.length) {
        tasks.splice(index, 1);
        saveTasks(tasks);
        console.log("Task Removed", tasks);
    } else {
        console.log("Invalid index");
    }
};

const command = process.argv[2];
const argument = process.argv[3]; // Extract the task argument

if(command === 'add')
{
    addTask(argument);
}
else if(command === 'list')
{
    listTasks();
}
else if(command === 'remove')
{
    remove(parseInt(argument));
}
else
{
    console.log("Command Not Found");
}
