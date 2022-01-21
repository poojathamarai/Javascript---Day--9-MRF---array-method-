const url = "https://restcountries.com/v3.1/all"
const fetchdata = async() =>
{
    try 
    {
        const response = await fetch(url);
        const data = await response.json();
       console.log(data.forEach(obj => {
             console.log(`Name:${obj.name.common}\nCapital:${obj.capital}\nflag:${obj.flag}`)
         }))
    }
    catch(err)
    {
        console.log(err);
    }
    
}
fetchdata();

OUTPUT:
Name:Papua New Guinea
Capital:Port Moresby
flag:🇵🇬 Script.js:1238:22
Name:Bouvet Island
Capital:undefined
flag:🇧🇻 Script.js:1238:22
Name:Heard Island and McDonald Islands
Capital:undefined
flag:🇭🇲 Script.js:1238:22
Name:Martinique
Capital:Fort-de-France
flag:🇲🇶 Script.js:1238:22
Name:North Macedonia
Capital:Skopje
flag:🇲🇰 Script.js:1238:22
Name:Niue
Capital:Alofi
flag:🇳🇺 Script.js:1238:22
Name:China
Capital:Beijing
flag:🇨🇳 Script.js:1238:22
Name:Lesotho
Capital:Maseru
flag:🇱🇸 Script.js:1238:22
Name:Curaçao
Capital:Willemstad
flag:🇨🇼 Script.js:1238:22
Name:Mexico
Capital:Mexico City
flag:🇲🇽 Script.js:1238:22
Name:Haiti
Capital:Port-au-Prince
flag:🇭🇹 Script.js:1238:22
Name:Thailand
Capital:Bangkok
flag:🇹🇭 Script.js:1238:22
Name:Palau
Capital:Ngerulmud
flag:🇵🇼 Script.js:1238:22
Name:Malaysia
Capital:Kuala Lumpur
flag:🇲🇾 Script.js:1238:22
Name:United States Minor Outlying Islands
Capital:undefined
flag:🇺🇲 Script.js:1238:22
Name:Samoa
Capital:Apia
flag:🇼🇸 Script.js:1238:22
Name:Lebanon
Capital:Beirut
flag:🇱🇧 Script.js:1238:22
Name:Cuba
Capital:Havana
flag:🇨🇺 Script.js:1238:22
Name:Antigua and Barbuda
Capital:Saint John's
flag:🇦🇬 Script.js:1238:22
Name:Iceland
Capital:Reykjavik
flag:🇮🇸 Script.js:1238:22
Name:Afghanistan
Capital:Kabul
flag:🇦🇫 Script.js:1238:22
Name:Eritrea
Capital:Asmara
flag:🇪🇷 Script.js:1238:22
Name:India
Capital:New Delhi
flag:🇮🇳 Script.js:1238:22
Name:Paraguay
Capital:Asunción
flag:🇵🇾 Script.js:1238:22
Name:Ukraine
Capital:Kyiv
flag:🇺🇦 Script.js:1238:22
Name:Seychelles
Capital:Victoria
flag:🇸🇨 Script.js:1238:22
Name:Cayman Islands
Capital:George Town
flag:🇰🇾 Script.js:1238:22
Name:Algeria
Capital:Algiers
flag:🇩🇿 Script.js:1238:22
Name:Guinea
Capital:Conakry
flag:🇬🇳 Script.js:1238:22
Name:Zambia
Capital:Lusaka
flag:🇿🇲 Script.js:1238:22
Name:Bahrain
Capital:Manama
flag:🇧🇭 Script.js:1238:22
Name:Myanmar
Capital:Naypyidaw
flag:🇲🇲 Script.js:1238:22
Name:Ethiopia
Capital:Addis Ababa
flag:🇪🇹 Script.js:1238:22
Name:South Sudan
Capital:Juba
flag:🇸🇸 Script.js:1238:22
Name:Cocos (Keeling) Islands
Capital:West Island
flag:🇨🇨 Script.js:1238:22
Name:Malta
Capital:Valletta
flag:🇲🇹 Script.js:1238:22
Name:Malawi
Capital:Lilongwe
flag:🇲🇼 Script.js:1238:22
Name:Jordan
Capital:Amman
flag:🇯🇴 Script.js:1238:22
Name:Barbados
Capital:Bridgetown
flag:🇧🇧 Script.js:1238:22
Name:Indonesia
Capital:Jakarta
flag:🇮🇩 Script.js:1238:22
Name:Kyrgyzstan
Capital:Bishkek
flag:🇰🇬 Script.js:1238:22
Name:Equatorial Guinea
Capital:Malabo
flag:🇬🇶 Script.js:1238:22
Name:Bosnia and Herzegovina
Capital:Sarajevo
flag:🇧🇦 Script.js:1238:22
Name:Saint Barthélemy
Capital:Gustavia
flag:🇧🇱 Script.js:1238:22
Name:Czechia
Capital:Prague
flag:🇨🇿 Script.js:1238:22
Name:Timor-Leste
Capital:Dili
flag:🇹🇱 Script.js:1238:22
Name:Fiji
Capital:Suva
flag:🇫🇯 Script.js:1238:22
Name:Tokelau
Capital:Fakaofo
flag:🇹🇰 Script.js:1238:22
Name:Lithuania
Capital:Vilnius
flag:🇱🇹 Script.js:1238:22
Name:Somalia
Capital:Mogadishu
flag:🇸🇴 Script.js:1238:22
Name:Georgia
Capital:Tbilisi
flag:🇬🇪 Script.js:1238:22
Name:Zimbabwe
Capital:Harare
flag:🇿🇼 Script.js:1238:22
Name:Solomon Islands
Capital:Honiara
flag:🇸🇧 Script.js:1238:22
Name:Ecuador
Capital:Quito
flag:🇪🇨 Script.js:1238:22
Name:Gibraltar
Capital:Gibraltar
flag:🇬🇮 Script.js:1238:22
Name:Oman
Capital:Muscat
flag:🇴🇲 Script.js:1238:22
Name:Mauritania
Capital:Nouakchott
flag:🇲🇷 Script.js:1238:22
Name:Hong Kong
Capital:City of Victoria
flag:🇭🇰 Script.js:1238:22
Name:Cape Verde
Capital:Praia
flag:🇨🇻 Script.js:1238:22
Name:Peru
Capital:Lima
flag:🇵🇪 Script.js:1238:22
Name:Yemen
Capital:Sana'a
flag:🇾🇪 Script.js:1238:22
Name:Puerto Rico
Capital:San Juan
flag:🇵🇷 Script.js:1238:22
Name:Gabon
Capital:Libreville
flag:🇬🇦 Script.js:1238:22
Name:Australia
Capital:Canberra
flag:🇦🇺 Script.js:1238:22
Name:Marshall Islands
Capital:Majuro
flag:🇲🇭 Script.js:1238:22
Name:Mongolia
Capital:Ulan Bator
flag:🇲🇳 Script.js:1238:22
Name:São Tomé and Príncipe
Capital:São Tomé
flag:🇸🇹 Script.js:1238:22
Name:El Salvador
Capital:San Salvador
flag:🇸🇻 Script.js:1238:22
Name:Northern Mariana Islands
Capital:Saipan
flag:🇲🇵 Script.js:1238:22
Name:Uzbekistan
Capital:Tashkent
flag:🇺🇿 Script.js:1238:22
Name:Burundi
Capital:Gitega
flag:🇧🇮 Script.js:1238:22
Name:Chad
Capital:N'Djamena
flag:🇹🇩 Script.js:1238:22
Name:Cambodia
Capital:Phnom Penh
flag:🇰🇭 Script.js:1238:22
Name:Åland Islands
Capital:Mariehamn
flag:🇦🇽 Script.js:1238:22
Name:Antarctica
Capital:undefined
flag:🇦🇶 Script.js:1238:22
Name:Egypt
Capital:Cairo
flag:🇪🇬 Script.js:1238:22
Name:Uruguay
Capital:Montevideo
flag:🇺🇾 Script.js:1238:22
Name:Guatemala
Capital:Guatemala City
flag:🇬🇹 Script.js:1238:22
Name:Spain
Capital:Madrid
flag:🇪🇸 Script.js:1238:22
Name:Senegal
Capital:Dakar
flag:🇸🇳 Script.js:1238:22
Name:South Georgia
Capital:King Edward Point
flag:🇬🇸 Script.js:1238:22
Name:Qatar
Capital:Doha
flag:🇶🇦 Script.js:1238:22
Name:Estonia
Capital:Tallinn
flag:🇪🇪 Script.js:1238:22
Name:Nepal
Capital:Kathmandu
flag:🇳🇵 Script.js:1238:22
Name:Cyprus
Capital:Nicosia
flag:🇨🇾 Script.js:1238:22
Name:Bolivia
Capital:Sucre
flag:🇧🇴 Script.js:1238:22
Name:Montenegro
Capital:Podgorica
flag:🇲🇪 Script.js:1238:22
Name:Portugal
Capital:Lisbon
flag:🇵🇹 Script.js:1238:22
Name:Central African Republic
Capital:Bangui
flag:🇨🇫 Script.js:1238:22
Name:Switzerland
Capital:Bern
flag:🇨🇭 Script.js:1238:22
Name:Slovenia
Capital:Ljubljana
flag:🇸🇮 Script.js:1238:22
Name:United Arab Emirates
Capital:Abu Dhabi
flag:🇦🇪 Script.js:1238:22
Name:Republic of the Congo
Capital:Brazzaville
flag:🇨🇬 Script.js:1238:22
Name:Canada
Capital:Ottawa
flag:🇨🇦 Script.js:1238:22
Name:United Kingdom
Capital:London
flag:🇬🇧 Script.js:1238:22
Name:Brazil
Capital:Brasília
flag:🇧🇷 Script.js:1238:22
Name:Botswana
Capital:Gaborone
flag:🇧🇼 Script.js:1238:22
Name:Cameroon
Capital:Yaoundé
flag:🇨🇲 Script.js:1238:22
Name:South Korea
Capital:Seoul
flag:🇰🇷 Script.js:1238:22
Name:Anguilla
Capital:The Valley
flag:🇦🇮 Script.js:1238:22
Name:Singapore
Capital:Singapore
flag:🇸🇬 Script.js:1238:22
Name:Maldives
Capital:Malé
flag:🇲🇻 Script.js:1238:22
Name:New Zealand
Capital:Wellington
flag:🇳🇿 Script.js:1238:22
Name:Ireland
Capital:Dublin
flag:🇮🇪 Script.js:1238:22
Name:Ghana
Capital:Accra
flag:🇬🇭 Script.js:1238:22
Name:Benin
Capital:Porto-Novo
flag:🇧🇯 Script.js:1238:22
Name:Armenia
Capital:Yerevan
flag:🇦🇲 Script.js:1238:22
Name:Nauru
Capital:Yaren
flag:🇳🇷 Script.js:1238:22
Name:Pitcairn Islands
Capital:Adamstown
flag:🇵🇳 Script.js:1238:22
Name:Togo
Capital:Lomé
flag:🇹🇬 Script.js:1238:22
Name:Dominica
Capital:Roseau
flag:🇩🇲 Script.js:1238:22
Name:Comoros
Capital:Moroni
flag:🇰🇲 Script.js:1238:22
Name:Israel
Capital:Jerusalem
flag:🇮🇱 Script.js:1238:22
Name:Guyana
Capital:Georgetown
flag:🇬🇾 Script.js:1238:22
Name:Saint Kitts and Nevis
Capital:Basseterre
flag:🇰🇳 Script.js:1238:22
Name:British Virgin Islands
Capital:Road Town
flag:🇻🇬 Script.js:1238:22
Name:Palestine
Capital:Ramallah
flag:🇵🇸 Script.js:1238:22
Name:Mayotte
Capital:Mamoudzou
flag:🇾🇹 Script.js:1238:22
Name:Syria
Capital:Damascus
flag:🇸🇾 Script.js:1238:22
Name:Tuvalu
Capital:Funafuti
flag:🇹🇻 Script.js:1238:22
Name:Svalbard and Jan Mayen
Capital:Longyearbyen
flag:🇸🇯 Script.js:1238:22
Name:Taiwan
Capital:Taipei
flag:🇹🇼 Script.js:1238:22
Name:United States
Capital:Washington, D.C.
flag:🇺🇸 Script.js:1238:22
Name:Turks and Caicos Islands
Capital:Cockburn Town
flag:🇹🇨 Script.js:1238:22
Name:Argentina
Capital:Buenos Aires
flag:🇦🇷 Script.js:1238:22
Name:DR Congo
Capital:Kinshasa
flag:🇨🇩 Script.js:1238:22
Name:Venezuela
Capital:Caracas
flag:🇻🇪 Script.js:1238:22
Name:Western Sahara
Capital:El Aaiún
flag:🇪🇭 Script.js:1238:22
Name:Aruba
Capital:Oranjestad
flag:🇦🇼 Script.js:1238:22
Name:Italy
Capital:Rome
flag:🇮🇹 Script.js:1238:22
Name:Laos
Capital:Vientiane
flag:🇱🇦 Script.js:1238:22
Name:Austria
Capital:Vienna
flag:🇦🇹 Script.js:1238:22
Name:Belize
Capital:Belmopan
flag:🇧🇿 Script.js:1238:22
Name:Bermuda
Capital:Hamilton
flag:🇧🇲 Script.js:1238:22
Name:Sudan
Capital:Khartoum
flag:🇸🇩 Script.js:1238:22
Name:Slovakia
Capital:Bratislava
flag:🇸🇰 Script.js:1238:22
Name:Ivory Coast
Capital:Yamoussoukro
flag:🇨🇮 Script.js:1238:22
Name:Mali
Capital:Bamako
flag:🇲🇱 Script.js:1238:22
Name:Finland
Capital:Helsinki
flag:🇫🇮 Script.js:1238:22
Name:Gambia
Capital:Banjul
flag:🇬🇲 Script.js:1238:22
Name:Chile
Capital:Santiago
flag:🇨🇱 Script.js:1238:22
Name:Greenland
Capital:Nuuk
flag:🇬🇱 Script.js:1238:22
Name:Sri Lanka
Capital:Sri Jayawardenepura Kotte
flag:🇱🇰 Script.js:1238:22
Name:Guadeloupe
Capital:Basse-Terre
flag:🇬🇵 Script.js:1238:22
Name:French Guiana
Capital:Cayenne
flag:🇬🇫 Script.js:1238:22
Name:Wallis and Futuna
Capital:Mata-Utu
flag:🇼🇫 Script.js:1238:22
Name:Guernsey
Capital:St. Peter Port
flag:🇬🇬 Script.js:1238:22
Name:Kosovo
Capital:Pristina
flag:🇽🇰 Script.js:1238:22
Name:Colombia
Capital:Bogotá
flag:🇨🇴 Script.js:1238:22
Name:Mozambique
Capital:Maputo
flag:🇲🇿 Script.js:1238:22
Name:Liberia
Capital:Monrovia
flag:🇱🇷 Script.js:1238:22
Name:British Indian Ocean Territory
Capital:Diego Garcia
flag:🇮🇴 Script.js:1238:22
Name:Rwanda
Capital:Kigali
flag:🇷🇼 Script.js:1238:22
Name:France
Capital:Paris
flag:🇫🇷 Script.js:1238:22
Name:Mauritius
Capital:Port Louis
flag:🇲🇺 Script.js:1238:22
Name:Azerbaijan
Capital:Baku
flag:🇦🇿 Script.js:1238:22
Name:Vanuatu
Capital:Port Vila
flag:🇻🇺 Script.js:1238:22
Name:Tajikistan
Capital:Dushanbe
flag:🇹🇯 Script.js:1238:22
Name:Suriname
Capital:Paramaribo
flag:🇸🇷 Script.js:1238:22
Name:Angola
Capital:Luanda
flag:🇦🇴 Script.js:1238:22
Name:Poland
Capital:Warsaw
flag:🇵🇱 Script.js:1238:22
Name:Sierra Leone
Capital:Freetown
flag:🇸🇱 Script.js:1238:22
Name:New Caledonia
Capital:Nouméa
flag:🇳🇨 Script.js:1238:22
Name:French Polynesia
Capital:Papeetē
flag:🇵🇫 Script.js:1238:22
Name:Russia
Capital:Moscow
flag:🇷🇺 Script.js:1238:22
Name:Denmark
Capital:Copenhagen
flag:🇩🇰 Script.js:1238:22
Name:French Southern and Antarctic Lands
Capital:Port-aux-Français
flag:🇹🇫 Script.js:1238:22
Name:Latvia
Capital:Riga
flag:🇱🇻 Script.js:1238:22
Name:Netherlands
Capital:Amsterdam
flag:🇳🇱 Script.js:1238:22
Name:Bhutan
Capital:Thimphu
flag:🇧🇹 Script.js:1238:22
Name:Moldova
Capital:Chișinău
flag:🇲🇩 Script.js:1238:22
Name:Luxembourg
Capital:Luxembourg
flag:🇱🇺 Script.js:1238:22
Name:Saint Pierre and Miquelon
Capital:Saint-Pierre
flag:🇵🇲 Script.js:1238:22
Name:Isle of Man
Capital:Douglas
flag:🇮🇲 Script.js:1238:22
Name:Morocco
Capital:Rabat
flag:🇲🇦 Script.js:1238:22
Name:Monaco
Capital:Monaco
flag:🇲🇨 Script.js:1238:22
Name:Pakistan
Capital:Islamabad
flag:🇵🇰 Script.js:1238:22
Name:Saint Martin
Capital:Marigot
flag:🇲🇫 Script.js:1238:22
Name:South Africa
Capital:Pretoria,Bloemfontein,Cape Town
flag:🇿🇦 Script.js:1238:22
Name:Greece
Capital:Athens
flag:🇬🇷 Script.js:1238:22
Name:Jamaica
Capital:Kingston
flag:🇯🇲 Script.js:1238:22
Name:Belgium
Capital:Brussels
flag:🇧🇪 Script.js:1238:22
Name:Liechtenstein
Capital:Vaduz
flag:🇱🇮 Script.js:1238:22
Name:Romania
Capital:Bucharest
flag:🇷🇴 Script.js:1238:22
Name:Iraq
Capital:Baghdad
flag:🇮🇶 Script.js:1238:22
Name:Vatican City
Capital:Vatican City
flag:🇻🇦 Script.js:1238:22
Name:Andorra
Capital:Andorra la Vella
flag:🇦🇩 Script.js:1238:22
Name:Saint Vincent and the Grenadines
Capital:Kingstown
flag:🇻🇨 Script.js:1238:22
Name:Belarus
Capital:Minsk
flag:🇧🇾 Script.js:1238:22
Name:Serbia
Capital:Belgrade
flag:🇷🇸 Script.js:1238:22
Name:Grenada
Capital:St. George's
flag:🇬🇩 Script.js:1238:22
Name:Namibia
Capital:Windhoek
flag:🇳🇦 Script.js:1238:22
Name:Macau
Capital:undefined
flag:🇲🇴 Script.js:1238:22
Name:Sint Maarten
Capital:Philipsburg
flag:🇸🇽 Script.js:1238:22
Name:Burkina Faso
Capital:Ouagadougou
flag:🇧🇫 Script.js:1238:22
Name:Christmas Island
Capital:Flying Fish Cove
flag:🇨🇽 Script.js:1238:22
Name:Guam
Capital:Hagåtña
flag:🇬🇺 Script.js:1238:22
Name:Kenya
Capital:Nairobi
flag:🇰🇪 Script.js:1238:22
Name:Uganda
Capital:Kampala
flag:🇺🇬 Script.js:1238:22
Name:Saint Lucia
Capital:Castries
flag:🇱🇨 Script.js:1238:22
Name:Albania
Capital:Tirana
flag:🇦🇱 Script.js:1238:22
Name:Turkmenistan
Capital:Ashgabat
flag:🇹🇲 Script.js:1238:22
Name:Tunisia
Capital:Tunis
flag:🇹🇳 Script.js:1238:22
Name:Germany
Capital:Berlin
flag:🇩🇪 Script.js:1238:22
Name:Caribbean Netherlands
Capital:Kralendijk
flag:undefined Script.js:1238:22
Name:Saudi Arabia
Capital:Riyadh
flag:🇸🇦 Script.js:1238:22
Name:Bahamas
Capital:Nassau
flag:🇧🇸 Script.js:1238:22
Name:Dominican Republic
Capital:Santo Domingo
flag:🇩🇴 Script.js:1238:22
Name:Réunion
Capital:Saint-Denis
flag:🇷🇪 Script.js:1238:22
Name:Vietnam
Capital:Hanoi
flag:🇻🇳 Script.js:1238:22
Name:Iran
Capital:Tehran
flag:🇮🇷 Script.js:1238:22
Name:Tanzania
Capital:Dodoma
flag:🇹🇿 Script.js:1238:22
Name:Montserrat
Capital:Plymouth
flag:🇲🇸 Script.js:1238:22
Name:Niger
Capital:Niamey
flag:🇳🇪 Script.js:1238:22
Name:Norway
Capital:Oslo
flag:🇳🇴 Script.js:1238:22
Name:Bangladesh
Capital:Dhaka
flag:🇧🇩 Script.js:1238:22
Name:Japan
Capital:Tokyo
flag:🇯🇵 Script.js:1238:22
Name:Kuwait
Capital:Kuwait City
flag:🇰🇼 Script.js:1238:22
Name:Croatia
Capital:Zagreb
flag:🇭🇷 Script.js:1238:22
Name:Faroe Islands
Capital:Tórshavn
flag:🇫🇴 Script.js:1238:22
Name:Honduras
Capital:Tegucigalpa
flag:🇭🇳 Script.js:1238:22
Name:Norfolk Island
Capital:Kingston
flag:🇳🇫 Script.js:1238:22
Name:Panama
Capital:Panama City
flag:🇵🇦 Script.js:1238:22
Name:American Samoa
Capital:Pago Pago
flag:🇦🇸 Script.js:1238:22
Name:Micronesia
Capital:Palikir
flag:🇫🇲 Script.js:1238:22
Name:Falkland Islands
Capital:Stanley
flag:🇫🇰 Script.js:1238:22
Name:Saint Helena, Ascension and Tristan da Cunha
Capital:Jamestown
flag:🇸🇭 Script.js:1238:22
Name:Turkey
Capital:Ankara
flag:🇹🇷 Script.js:1238:22
Name:Costa Rica
Capital:San José
flag:🇨🇷 Script.js:1238:22
Name:Libya
Capital:Tripoli
flag:🇱🇾 Script.js:1238:22
Name:Philippines
Capital:Manila
flag:🇵🇭 Script.js:1238:22
Name:San Marino
Capital:City of San Marino
flag:🇸🇲 Script.js:1238:22
Name:Cook Islands
Capital:Avarua
flag:🇨🇰 Script.js:1238:22
Name:United States Virgin Islands
Capital:Charlotte Amalie
flag:🇻🇮 Script.js:1238:22
Name:Nicaragua
Capital:Managua
flag:🇳🇮 Script.js:1238:22
Name:Bulgaria
Capital:Sofia
flag:🇧🇬 Script.js:1238:22
Name:Hungary
Capital:Budapest
flag:🇭🇺 Script.js:1238:22
Name:Djibouti
Capital:Djibouti
flag:🇩🇯 Script.js:1238:22
Name:Guinea-Bissau
Capital:Bissau
flag:🇬🇼 Script.js:1238:22
Name:Brunei
Capital:Bandar Seri Begawan
flag:🇧🇳 Script.js:1238:22
Name:Kazakhstan
Capital:Nur-Sultan
flag:🇰🇿 Script.js:1238:22
Name:Kiribati
Capital:South Tarawa
flag:🇰🇮 Script.js:1238:22
Name:Jersey
Capital:Saint Helier
flag:🇯🇪 Script.js:1238:22
Name:Tonga
Capital:Nuku'alofa
flag:🇹🇴 Script.js:1238:22
Name:Madagascar
Capital:Antananarivo
flag:🇲🇬 Script.js:1238:22
Name:North Korea
Capital:Pyongyang
flag:🇰🇵 Script.js:1238:22
Name:Eswatini
Capital:Mbabane
flag:🇸🇿 Script.js:1238:22
Name:Sweden
Capital:Stockholm
flag:🇸🇪 Script.js:1238:22
Name:Nigeria
Capital:Abuja
flag:🇳🇬 Script.js:1238:22
Name:Trinidad and Tobago
Capital:Port of Spain
flag:🇹🇹
