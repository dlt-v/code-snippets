/// <reference types="@types/google.maps" />
import { User } from "./User";
import { Company } from "./Company";
import { CustomMap } from "./CustomMap";

const newUser: User = new User();
const newCompany: Company = new Company();

const newMap = new CustomMap('map');
newMap.addMarker(newUser);