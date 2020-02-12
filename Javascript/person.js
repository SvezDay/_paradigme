
function Person(first){
    this.first = first;
    // set rename(str) {
    //     first = str;
    // }
}

Person.prototype.name = function(){
    return this.first;
}

var me = new Person("bill");
// me.rename("rud");
var res = me.name();
console.log(res);
