*{
    margin: 0;
    padding: 0;
}

.main{
    width: 100%;
    background-position: center;
    background-size: cover;
    height: 100vh;
    position: relative;
    font-family: sans-serif;
}

.navbar{
    width: 86%;
    display: flex;
    margin: auto;
    padding: 15px 0;
    align-items: center;
    justify-content: space-between;
}

.navbar .logo{
    width: 160px;
    cursor: pointer;
    margin-top: -3%;
    margin-left: -2%;
}

ul{
    margin-top: -4%;
}

ul li{
    list-style: none;
    display: inline-block;
    padding: 10px 16px;
}

ul li a{
    font-size: 16px;
    font-weight: bold;
    text-decoration: none;
    color: darkslategray;
    margin-top: -3%;
    transition: .4s ease;

}

ul li a:hover{
    color: rgb(230,104,59);
}

.info{
    margin-left: 7%;
    margin-top: 6%;
}

.info h1{
    font-size: 65px;
    color: rgb(36,32,30);
}

.info h3{
    font-size: 18px;
    letter-spacing: 1px;
    line-height: 24px;
}

.info span{
    color: rgb(230,104,59);
}

.info a{
    text-decoration:  none;
    color: #fff;
    background: rgb(36,32,30);
    margin: 26px 0;
    padding: 10px 18px;
    border-radius: 10px;
    display: inline-block;
    transition: .4s ease;
}

.info a:hover{
    background: rgb(59,174,209);
}

.image{
    width: 30%;
    height: 60%;
    position: absolute;
    right: 100px;
    bottom: 0;
}

.image img{
    position: absolute;
    height: 140%;
    left: 40%;
    transform: translate(-55%);
    bottom: 0;
    transition: left 2s ease;
}


.icons a{
    text-decoration: none;
    color: #000;
}

.icons ion-icon{
    margin-left: 7%;
    color: #000;
    margin-right: -60px;
    font-size: 40px;
    transition: .4s ease;
    
}

.icons ion-icon:hover{
    color: rgb(59,174,209);
}
