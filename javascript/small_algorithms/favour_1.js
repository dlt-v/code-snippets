//Napisz program, który wypisze pierwszych 100 liczb całkowitych dodatnich podzielnych przez 3 / 7 / 3 i 7

const wypisz = () => {
    let result = [];
    for (let i = 0; i < 100; i++) {
        if (i % 3 === 0 || i % 7 === 0) result.push(i);
        // if (i % 7 === 0) result.push(i);
        // if (i % 3 === 0) result.push(i);
    }
    console.log(result);
};

wypisz();
