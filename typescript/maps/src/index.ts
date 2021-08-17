/// <reference types="@types/google.maps" />
import { User } from "./User";
import { Company } from "./Company";

const newUser = new User();
const newCompany = new Company();
console.log(newUser);
console.log(newCompany);


new google.maps.Map(document.getElementById('map'), {
    zoom: 1,
    center: {
        lat: 0,
        lng: 0
    }
});