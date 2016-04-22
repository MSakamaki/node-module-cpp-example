
var addon = require('node-cmake')('addon');

console.log(`2 + 3 = ${ addon.sum(2, 3) }`);

addon.callback((arg) => {

  console.log('callback:', arg);
})
