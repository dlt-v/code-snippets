import faker from 'faker';
import { Mappable } from './CustomMap';

export class Company implements Mappable{
    name: string;
    catchPhrase: string;
    location: {
        lat: number;    //latitude
        lng: number;    //longitude
    };
    markerContent(): string {
        return `<h3>Company: ${this.name}</h1>
                ${this.catchPhrase}`
    };

    constructor() {
        this.name = faker.company.companyName();
        this.catchPhrase = faker.company.catchPhrase();
        this.location = {
            lat: parseFloat(faker.address.latitude()),
            lng: parseFloat(faker.address.longitude())
        }
    }
}