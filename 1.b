const url = "https://restcountries.com/v3.1/all"
const fetchdata = async() =>
{
    try 
    {
        const response = await fetch(url);
        const data = await response.json();
         let  ans = data.filter(obj => obj.population<200000).map(countries=>countries.name.common);
        console.log(ans)
    }
    catch(err)
    {
        console.log(err);
    }
    
}
fetchdata();

OUTPUT:
Array(62) [ "Bouvet Island", "Heard Island and McDonald Islands", "Niue", "Curaçao", "Palau", "United States Minor Outlying Islands", "Samoa", "Antigua and Barbuda", "Seychelles", "Cayman Islands", … ]
​
0: "Bouvet Island"
​
1: "Heard Island and McDonald Islands"
​
2: "Niue"
​
3: "Curaçao"
​
4: "Palau"
​
5: "United States Minor Outlying Islands"
​
6: "Samoa"
​
7: "Antigua and Barbuda"
​
8: "Seychelles"
​
9: "Cayman Islands"
​
10: "Cocos (Keeling) Islands"
​
11: "Saint Barthélemy"
​
12: "Tokelau"
​
13: "Gibraltar"
​
14: "Marshall Islands"
​
15: "Northern Mariana Islands"
​
16: "Åland Islands"
​
17: "Antarctica"
​
18: "South Georgia"
​
19: "Anguilla"
​
20: "Nauru"
​
21: "Pitcairn Islands"
​
22: "Dominica"
​
23: "Saint Kitts and Nevis"
​
24: "British Virgin Islands"
​
25: "Tuvalu"
​
26: "Svalbard and Jan Mayen"
​
27: "Turks and Caicos Islands"
​
28: "Aruba"
​
29: "Bermuda"
​
30: "Greenland"
​
31: "Wallis and Futuna"
​
32: "Guernsey"
​
33: "British Indian Ocean Territory"
​
34: "French Southern and Antarctic Lands"
​
35: "Saint Pierre and Miquelon"
​
36: "Isle of Man"
​
37: "Monaco"
​
38: "Saint Martin"
​
39: "Liechtenstein"
​
40: "Vatican City"
​
41: "Andorra"
​
42: "Saint Vincent and the Grenadines"
​
43: "Grenada"
​
44: "Sint Maarten"
​
45: "Christmas Island"
​
46: "Guam"
​
47: "Saint Lucia"
​
48: "Caribbean Netherlands"
​
49: "Montserrat"
​
50: "Faroe Islands"
​
51: "Norfolk Island"
​
52: "American Samoa"
​
53: "Micronesia"
​
54: "Falkland Islands"
​
55: "Saint Helena, Ascension and Tristan da Cunha"
​
56: "San Marino"
​
57: "Cook Islands"
​
58: "United States Virgin Islands"
​
59: "Kiribati"
​
60: "Jersey"
​
61: "Tonga"
​
length: 62
