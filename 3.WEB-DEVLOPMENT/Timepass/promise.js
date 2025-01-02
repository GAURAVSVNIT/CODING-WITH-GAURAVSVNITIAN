const promise5 = new Promise((resolve, reject) => {
    setTimeout(() => {
        let error = true;
        if (!error) {
            resolve('Promise5 is resolved');
        } else {
            reject('Promise5 is rejected');
        }
    }, 1000);
});

// promise5.then((message) => {
//     console.log(message);
// }).catch((error) => {
//     console.log(error);
// });

async function myAsyncFunction() {
    try
    {const result = await promise5;
    console.log(result);
    }
    catch(error){
        console.log(error);
    }
}

async function myAsyncFunction2() {
    try
    {
    const response = await fetch('https://jsonplaceholder.typicode.com/users');
    const data = await response.json();
    console.log(data);
    }
    catch(error){
        console.log(error);
    }
}

fetch('https://jsonplaceholder.typicode.com/users')
.then(response => response.json())
.then(data => console.log(data))
.catch(error => console.log(error));