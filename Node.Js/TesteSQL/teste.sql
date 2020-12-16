CREATE TABLE usuarios(
    nome VARCHAR(50),
    email VARCHAR(100),
    idade INT
);


INSERT INTO usuarios(nome, email, idade) VALUES(
    "Felipe Costa",
    "email@teste.com",
    8
);

INSERT INTO usuarios(nome, email, idade) VALUES(
    "Luis Silva",
    "email@teste22.com",
    28
);

INSERT INTO usuarios(nome, email, idade) VALUES(
    "Lucas",
    "email@teste22.com",
    39
);

INSERT INTO usuarios(nome, email, idade) VALUES(
    "Maria Clara",
    "maria@teste22.com",
    8
);

SELECT * FROM usuarios;

SELECT * FROM usuarios WHERE idade=8;

SELECT * FROM usuarios WHERE nome="Lucas";

SELECT * FROM usuarios WHERE idade >= 18;

UPDATE usuarios SET nome = "Nome de Teste" WHERE nome = "Felipe Costa";