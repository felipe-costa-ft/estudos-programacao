const Sequelize = require("sequelize");
const connection = require("../database/database");
const Category = require("../categories/Category");

const Article = connection.define('articles', {
    title: {
        type: Sequelize.STRING,
        allowNULL: false
    }, 
    slug: {
        type: Sequelize.STRING,
        allowNULL: false
    },
    body: {
        type: Sequelize.TEXT,
        allowNULL: false
    }

});

Category.hasMany(Article);
Article.belongsTo(Category);

module.exports = Article;