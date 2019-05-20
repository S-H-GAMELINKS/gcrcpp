module.exports = {
    entry: './src/index.js',
    output: {
        filename: 'index.js',
        path: `${__dirname}`
    },
    resolve: {
        alias: {
            'vue$': 'vuew/dist/vue.esm.js'
        }
    }
}