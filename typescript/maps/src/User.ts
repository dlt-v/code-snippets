import faker from 'faker';

class User {
    name: string;
    location: {
        lat: number; //latitude
        lng: number; //longitude
    }

    constructor() {
        this.name = faker.name.firstName();
        this.location = {
            lat: parseFloat(faker.address.latitude()),
            lng: parseFloat(faker.address.longitude())
        }

    }
}