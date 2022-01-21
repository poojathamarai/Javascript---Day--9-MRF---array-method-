var xhr = new XMLHttpRequest();

xhr.open("GET", "https://raw.githubusercontent.com/rvsp/restcountries-json-data/master/res-countries.json");

xhr.onload = function () {
    if (xhr.status >= 200 && xhr.status < 300) {
        var data = JSON.parse(this.response);
        let total_population=0;
        total_population=data.map(item=>item.population).reduce(function(sum,item){
            return sum+item
        })
        console.log(`Total Population:${total_population}`)
    }}
    xhr.send();
    
    OUTPUT:
    Total Population:7349137231
