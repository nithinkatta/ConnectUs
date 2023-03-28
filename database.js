const mysql = require('MySQL80');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'Nithin',
    password: 'Nithin281',
    database: 'mydatabase'
  });

  connection.query('SELECT * FROM mytable',(err,results)=>{if(err) throw err;
  console.log(results)});
  connection.end();
  