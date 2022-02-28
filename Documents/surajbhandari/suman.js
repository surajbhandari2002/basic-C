var express = require('express');
var app = express();
var PORT = 3000;

app.get('/user', function (req, res) {
console.log("Name: "   , req.query.name);
console.log("age:", req.query.age);
res.send();
});

app.listen(PORT, function(err){
	if (err) console.log(err);
	console.log("Server listening on PORT", PORT);
});

