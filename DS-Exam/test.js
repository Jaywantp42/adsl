function operation()
{
    var pername = document.getElementById("Name1").innerHTML;

    if(pername == null || pername == "")
    {
        alert("NAme cannot be empty");
    }
    else{
        console.log(pername);
    }
}