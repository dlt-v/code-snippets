import faker from 'faker';
import { Mappable } from './CustomMap';
    //we usually shouldn't use default exports
export class User implements Mappable{
    name: string;
    location: {
        lat: number;    //latitude
        lng: number;    //longitude
    };
    markerContent(): string {
        return `User: ${this.name}`
    }

    constructor() {
        this.name = faker.name.firstName();
        this.location = {
            lat: parseFloat(faker.address.latitude()),
            lng: parseFloat(faker.address.longitude())
        }

    }
}