
var addon = require('node-cmake')('addon');

console.log(`2 + 3 = ${ addon.sum(2, 3) }`);

addon.runCB((arg) => console.log('callback:', arg));
