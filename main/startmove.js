function startMove(obj, att, target) {
    clearInterval(obj.timer)
    var speed = 0;
    var current = 0;
    obj.timer = setInterval(function(){
        if(att=='opacity'){
            current = parseInt(getstyle(obj,att)*100)
        }
        else{
            current = getstyle(obj, att);
        }
        speed = (target - current) / 7
        speed = speed > 0 ? Math.ceil(speed) : Math.floor(speed);
        current += speed;
        if(current == target){
            clearInterval(obj.timer);
        }
        else{
            if(att == 'opacity'){
                obj.style.opacity = current/100;
            }
            else{
                obj.style[att] = current + 'px';
            }
        }
    }, 30)
}
function getstyle(obj, att) {
    return parseInt(window.getComputedStyle(obj)[att])
}