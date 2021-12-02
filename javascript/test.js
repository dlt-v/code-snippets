const nowyUzytkownik = {
    login: 'Marcelka_Zet',
    email: 'someone@gmail.com',
    telefon: '123 123 123',
    haslo: '',
    generujHaslo: function () {
        let znaki = 'abcdefghijklmnoprstuwy123456789';
        let noweHaslo = [];
        for (let i = 1; i <= 31; i++) {
            noweHaslo.push(znaki[Math.floor(Math.random() * 31)]);
        }
        this.haslo = noweHaslo.join('');
    },
};

nowyUzytkownik.generujHaslo();
console.log(nowyUzytkownik);
