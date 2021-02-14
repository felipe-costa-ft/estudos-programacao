const Sequelize = require("sequelize");
const connection = require("../database/database");

const Category = connection.define('categories', {
    title: {
        type: Sequelize.STRING,
        allowNULL: false
    }, slug: {
        type: Sequelize.STRING,
        allowNULL: false
    }

});

module.exports = Category;