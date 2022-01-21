const url = "https://restcountries.com/v3.1/all"
const fetchdata = async() =>
{
    try 
    {
        const response = await fetch(url);
        const data = await response.json();
       let total_population=0;
        total_population=data.map(item=>item.population).reduce(function(sum,item){
            return sum+item
        })
        console.log(`Total Population:${total_population}`)
    }
    catch(err)
    {
        console.log(err);
    }
    
}
fetchdata();

OUTPUT:

Total Population:7798590363
