import Vue from 'vue';

import * as Bootstrap from 'bootstrap-umi';
import 'bootstrap-umi/dist/css/bootstrap.css';

Vue.use(Bootstrap);

import Router from '../router/index';

import Header from '../components/layouts/Header.vue';

const app = new Vue({
    el: ".app",
    router: Router,
    components: {
        'nav-bar': Header
    }
});