var xhr = new XMLHttpRequest();

xhr.open("GET", "https://raw.githubusercontent.com/rvsp/restcountries-json-data/master/res-countries.json");

xhr.onload = function () {
    if (xhr.status >= 200 && xhr.status < 300) {
        var data = JSON.parse(this.response);
        const ans=data.filter(obj=>obj.currencies[0].code=="USD").map(item=>item.name)
        console.log(`The countries that uses US Dollar as currency are:${ans}`)
    }}
    xhr.send();
    
    OUTUT:
    The countries that uses US Dollar as currency are:American Samoa,Bonaire, Sint Eustatius and Saba,British Indian Ocean Territory,United States Minor Outlying Islands,Virgin Islands (U.S.),Ecuador,El Salvador,Guam,Marshall Islands,Northern Mariana Islands,Puerto Rico,Timor-Leste,Turks and Caicos Islands,United States of America
