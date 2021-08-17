import faker from 'faker';
    //we usually shouldn't use default exports
export class User {
    name: string;
    location: {
        lat: number;    //latitude
        lng: number;    //longitude
    }

    constructor() {
        this.name = faker.name.firstName();
        this.location = {
            lat: parseFloat(faker.address.latitude()),
            lng: parseFloat(faker.address.longitude())
        }

    }
}