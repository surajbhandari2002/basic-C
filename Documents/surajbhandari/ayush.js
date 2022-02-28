var app = express();

app.get('/', function(req, res){
    res.send('this is the homepage');
});

app.get('/contact', function(req, res){
    res.send('this is the contact page');
});


app.get('/profile/:name', function(req,res){
    res.send('you requested to see a profile with the id of' + req.params.name);
});

app.listen(3000);