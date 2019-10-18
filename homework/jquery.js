function $(str){
if (typeof str === 'string'){
    return document.getElementById(str);
                            }
else if(typeof str === 'function')
                            {
    window.onload = str ;
                            }
}
function getstyle(object,att){
    return getComputedStyle(object)[att];
}