var xhr = new XMLHttpRequest();

xhr.open("GET", "https://raw.githubusercontent.com/rvsp/restcountries-json-data/master/res-countries.json");

xhr.onload = function () {
    if (xhr.status >= 200 && xhr.status < 300) {
        var data = JSON.parse(this.response);
        console.log(data.forEach(obj => {
            console.log(`Name:${obj.name}\nCapital:${obj.capital}\nflag:${obj.flag}`)
        }))
    }}
    xhr.send();

OUTPUT:
Name:San Marino
Capital:City of San Marino
flag:https://restcountries.eu/data/smr.svg Script.js:1260:21
Name:Sao Tome and Principe
Capital:São Tomé
flag:https://restcountries.eu/data/stp.svg Script.js:1260:21
Name:Saudi Arabia
Capital:Riyadh
flag:https://restcountries.eu/data/sau.svg Script.js:1260:21
Name:Senegal
Capital:Dakar
flag:https://restcountries.eu/data/sen.svg Script.js:1260:21
Name:Serbia
Capital:Belgrade
flag:https://restcountries.eu/data/srb.svg Script.js:1260:21
Name:Seychelles
Capital:Victoria
flag:https://restcountries.eu/data/syc.svg Script.js:1260:21
Name:Sierra Leone
Capital:Freetown
flag:https://restcountries.eu/data/sle.svg Script.js:1260:21
Name:Singapore
Capital:Singapore
flag:https://restcountries.eu/data/sgp.svg Script.js:1260:21
Name:Sint Maarten (Dutch part)
Capital:Philipsburg
flag:https://restcountries.eu/data/sxm.svg Script.js:1260:21
Name:Slovakia
Capital:Bratislava
flag:https://restcountries.eu/data/svk.svg Script.js:1260:21
Name:Slovenia
Capital:Ljubljana
flag:https://restcountries.eu/data/svn.svg Script.js:1260:21
Name:Solomon Islands
Capital:Honiara
flag:https://restcountries.eu/data/slb.svg Script.js:1260:21
Name:Somalia
Capital:Mogadishu
flag:https://restcountries.eu/data/som.svg Script.js:1260:21
Name:South Africa
Capital:Pretoria
flag:https://restcountries.eu/data/zaf.svg Script.js:1260:21
Name:South Georgia and the South Sandwich Islands
Capital:King Edward Point
flag:https://restcountries.eu/data/sgs.svg Script.js:1260:21
Name:Korea (Republic of)
Capital:Seoul
flag:https://restcountries.eu/data/kor.svg Script.js:1260:21
Name:South Sudan
Capital:Juba
flag:https://restcountries.eu/data/ssd.svg Script.js:1260:21
Name:Spain
Capital:Madrid
flag:https://restcountries.eu/data/esp.svg Script.js:1260:21
Name:Sri Lanka
Capital:Colombo
flag:https://restcountries.eu/data/lka.svg Script.js:1260:21
Name:Sudan
Capital:Khartoum
flag:https://restcountries.eu/data/sdn.svg Script.js:1260:21
Name:Suriname
Capital:Paramaribo
flag:https://restcountries.eu/data/sur.svg Script.js:1260:21
Name:Svalbard and Jan Mayen
Capital:Longyearbyen
flag:https://restcountries.eu/data/sjm.svg Script.js:1260:21
Name:Swaziland
Capital:Lobamba
flag:https://restcountries.eu/data/swz.svg Script.js:1260:21
Name:Sweden
Capital:Stockholm
flag:https://restcountries.eu/data/swe.svg Script.js:1260:21
Name:Switzerland
Capital:Bern
flag:https://restcountries.eu/data/che.svg Script.js:1260:21
Name:Syrian Arab Republic
Capital:Damascus
flag:https://restcountries.eu/data/syr.svg Script.js:1260:21
Name:Taiwan
Capital:Taipei
flag:https://restcountries.eu/data/twn.svg Script.js:1260:21
Name:Tajikistan
Capital:Dushanbe
flag:https://restcountries.eu/data/tjk.svg Script.js:1260:21
Name:Tanzania, United Republic of
Capital:Dodoma
flag:https://restcountries.eu/data/tza.svg Script.js:1260:21
Name:Thailand
Capital:Bangkok
flag:https://restcountries.eu/data/tha.svg Script.js:1260:21
Name:Timor-Leste
Capital:Dili
flag:https://restcountries.eu/data/tls.svg Script.js:1260:21
Name:Togo
Capital:Lomé
flag:https://restcountries.eu/data/tgo.svg Script.js:1260:21
Name:Tokelau
Capital:Fakaofo
flag:https://restcountries.eu/data/tkl.svg Script.js:1260:21
Name:Tonga
Capital:Nuku'alofa
flag:https://restcountries.eu/data/ton.svg Script.js:1260:21
Name:Trinidad and Tobago
Capital:Port of Spain
flag:https://restcountries.eu/data/tto.svg Script.js:1260:21
Name:Tunisia
Capital:Tunis
flag:https://restcountries.eu/data/tun.svg Script.js:1260:21
Name:Turkey
Capital:Ankara
flag:https://restcountries.eu/data/tur.svg Script.js:1260:21
Name:Turkmenistan
Capital:Ashgabat
flag:https://restcountries.eu/data/tkm.svg Script.js:1260:21
Name:Turks and Caicos Islands
Capital:Cockburn Town
flag:https://restcountries.eu/data/tca.svg Script.js:1260:21
Name:Tuvalu
Capital:Funafuti
flag:https://restcountries.eu/data/tuv.svg Script.js:1260:21
Name:Uganda
Capital:Kampala
flag:https://restcountries.eu/data/uga.svg Script.js:1260:21
Name:Ukraine
Capital:Kiev
flag:https://restcountries.eu/data/ukr.svg Script.js:1260:21
Name:United Arab Emirates
Capital:Abu Dhabi
flag:https://restcountries.eu/data/are.svg Script.js:1260:21
Name:United Kingdom of Great Britain and Northern Ireland
Capital:London
flag:https://restcountries.eu/data/gbr.svg Script.js:1260:21
Name:United States of America
Capital:Washington, D.C.
flag:https://restcountries.eu/data/usa.svg Script.js:1260:21
Name:Uruguay
Capital:Montevideo
flag:https://restcountries.eu/data/ury.svg Script.js:1260:21
Name:Uzbekistan
Capital:Tashkent
flag:https://restcountries.eu/data/uzb.svg Script.js:1260:21
Name:Vanuatu
Capital:Port Vila
flag:https://restcountries.eu/data/vut.svg Script.js:1260:21
Name:Venezuela (Bolivarian Republic of)
Capital:Caracas
flag:https://restcountries.eu/data/ven.svg Script.js:1260:21
Name:Viet Nam
Capital:Hanoi
flag:https://restcountries.eu/data/vnm.svg Script.js:1260:21
Name:Wallis and Futuna
Capital:Mata-Utu
flag:https://restcountries.eu/data/wlf.svg Script.js:1260:21
Name:Western Sahara
Capital:El Aaiún
flag:https://restcountries.eu/data/esh.svg Script.js:1260:21
Name:Yemen
Capital:Sana'a
flag:https://restcountries.eu/data/yem.svg Script.js:1260:21
Name:Zambia
Capital:Lusaka
flag:https://restcountries.eu/data/zmb.svg Script.js:1260:21
Name:Zimbabwe
Capital:Harare
flag:https://restcountries.eu/data/zwe.svg
