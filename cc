* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'poppins', sans-serif;
}

html {
  scroll-behavior: smooth;
}

body {
    background: #1f242d;
}

a {
    color: #fff;
    text-decoration: none;
}

.navbar {
    display: flex;
    justify-content: space-between;
    left: 0;
    top: 0;
    width: 100%;
    padding: 25px 5.5%;
    align-items: center;
    z-index: 100;
}

.navbar .logo {
    font-size: 28px;
    font-weight: 700;
}

.navbar ul {
    display: flex;
}

.navbar ul li {
    list-style: none;
    margin-left: 35px;
}

.navbar ul li a {
    font-size: 18px;
    font-weight: 500;
    transition: .5s;
}

.navbar ul li:hover a, 
.navbar ul li.active a {
    color: #7cf03d;
}

/* home */

.home {
    display: flex;
    align-items: center;
    height: 80vh;
    padding: 8px 6% 0;
    color: #fff;
}
 .home-info h1 {
    font-size: 40px;
    /* margin-top: 20px; */
 }

 .home-info h2 {
    display: inline-block;
    font-size: 26px;
    margin-top: 10px;
 }

 .home-info h2 span {
    color: #7cf03d;
 }

 @media (max-width: 768px) {
    .home-info h2 {
        font-size: 12px;
    }
    .home-info h1 {
      font-size: 18px;
    }
}

 @media (max-width: 480px) {
    .home-info h2 {
        font-size: 18px;
    }
    .home-info h1 {
      font-size: 28px;
    }
    .home-info p {
      font-size: px;
    }
   }

 /* .home-info h2 span {
    position: relative;
    display: inline-block;
    color: transparent;
    -webkit-text-stroke: .7px #7cf03d;
    animation: display-text 8s linear infinite;
    animation: show-content 1.5s linear forwards;
    animation-delay: cale(-4s * var(--i));

 }

 @keyframes display-text {
    25%,
    100% {
        display: none;
    }

 } */

 /* .home-info h2 span::before {
    content: attr(data-text);
    position: absolute;
    width: 0;
    border-right: 2px solid #7cf03d;
    color: #7cf03d;
    white-space: nowrap;
    overflow: hidden;
    animation: fill-text 4s linear infinite;

 }

 @keyframes fill-text {
    10%,
    100% {
        width: 0;
    }
    70%,
    90% {
        width: 100%;
    }
 } */

 .home-info p {
    font-size: 16px;
    margin: 10px 0 25px;
    line-height: 1.6;
    width: 800px;
    /* margin-top: 10px; */
 }

 @media (max-width: 480px) {
    .home-info p {
      font-size: 14px;
    }
   }

 .home-info .btn-sci {
    display: flex;
    align-items: center;
 }

 .btn {
    display: inline-block;
    padding: 10px 30px;
    background: #7cf03d;
    border: 2px solid #7cf03d;
    border-radius: 40px;
    box-shadow: 0 0 10px #7cf03d;
    font-size: 16px;
    color: #1f242d;
    font-weight: 600;
    transition: .5s;
 }

 /* @media (max-width: 480px) {
    .home-info .btn-sci {
        font-size: 28px;
    }
} */

 .btn:hover {
    background: transparent;
    color: #7cf03d;
    box-shadow: none;
 }

 .home-info .btn-sci .sci {
    margin-left: 20px;
 }

 .home-info .btn-sci .sci a {
    display: inline-flex;
    padding: 8px;
    border: 2px solid #7cf03d;
    border-radius: 50%;
    font-size: 20px;
    color: #7cf03d;
    margin: 0 8px;
    transition: .5s;
 }

 .home-info .btn-sci .sci a:hover {
    background: #7cf03d;
    color: #1f242d;
    box-shadow: 0 0 10px #7cf03d;
 }

 /* img */

 .home-img .img-box {
    position: relative;
    width: 26vw;
    height: 26vw;
    border-radius: 50%;
    padding: 3px;
    display: flex;
    justify-content: center;
    align-items: center;
    overflow: hidden;
 }

 .home-img .img-box::before,
 .home-img .img-box::after {
    content: '';
    position: absolute;
    width: 500px;
    height: 500px;
    background: conic-gradient(transparent, transparent,
    transparent, #7cf03d);
    transform: rotate(0deg);
    animation: rotate-border 10s linear infinite;

 }

 .home-img .img-box::after {
    animation-delay: -5s;
 }

 @keyframes rotate-border {
    100% {
        transform: rotate(360deg);
    }
 }

 .home-img .img-box .img-item {
    position: relative;
    width: 100%;
    height: 100%;
    background: #1f242d;
    border-radius: 50%;
    border: .1px solid #1f242d;
    display: flex;
    justify-content: center;
    z-index: 1;
    overflow: hidden;
 }

 .home-img .img-box .img-item img {
    position: absolute;
    top: 30px;
    display: block;
    width: 85%;
    object-fit: cover;
    mix-blend-mode: lighten;
 }

 /* About */

 .about {
   /* background-color: #7cf03d; */
   width: 95%;
   padding: 70px 0px;
   background-color: #1f242d;
 }

 .about img {
   height: 340px;
   width: 260px;
   border-radius: 8px;
 }

 .about-text {
   width: 700px;
   /* width: 700px; */
 }

 .main {
   width: 1130px;
   max-width: 900%;
   margin: 0 auto;
   display: flex;
   align-items: center;
   justify-content: space-around;
 }

 .about-text h2 {
   color: #fff;
   font-size: 34px;
   text-transform: capitalize;
   margin-bottom: 20px;
 }

 .about-text h5 {
   color: #fff;
   letter-spacing: 2px;
   font-size: 18px;
   text-transform: capitalize;
   margin-bottom: 25px;
 }

 .about-text h5 span {
   color: #7cf03d;
 }

 .about-text p {
   color: #fcfc;
   letter-spacing: 1px;
   line-height: 26px;
   font-size: 14px;
   margin-bottom: 28px;
 }

 button {
    display: inline-block;
    padding: 10px 30px;
    background: #7cf03d;
    border: 2px solid #7cf03d;
    border-radius: 40px;
    box-shadow: 0 0 10px #7cf03d;
    font-size: 14px;
    color: #1f242d;
    font-weight: 600;
    transition: .5s;
 }

 button:hover {
    background: transparent;
    color: #7cf03d;
    box-shadow: none;
 }

 .service {
  width: 100%;
  padding: 50px 0;
  background-image: 
    linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)),  /* overlay gradient */
    url('images/bb.jpeg'); /* main image */
  background-size: cover;
  background-repeat: no-repeat;
  background-position: center;
}


 /* .service {
   background-image: url('images/bg.png');
   background-repeat: no-repeat;
   width: 100%;
   padding: 60px 0px;
 } */

 .title h2 {
   color: #fff;
   font-size: 40px;
   width: 1130px;
   margin: 30px auto;
   text-align: center;
 }

 .box {
   display: flex;
   justify-content: center;
   align-items: center;
   min-height: 400px;
 }


 .card {
   height: 365px;
   width: 335px;
   padding: 20px 35px;
   background: #1f242d;
   border-radius: 20px;
   margin: 15px;
   position: relative;
   overflow: hidden;
   text-align: center;
 }

 .card i {
   font-size: 50px;
   display: block;
   text-align: center;
   margin: 25px 0px;
   color: #7cf03d;
 }

 h5 {
   color: #fff;
   font-size: 18px;
   margin-bottom: 15px;
 }

 .pra p {
   color: antiquewhite;
   font-size: 16px;
   line-height: 27px;
   margin-bottom: 25px;
 }

 .card .button {
    display: inline-block;
    padding: 5px 20px;
    background: #7cf03d;
    border: 1px solid #7cf03d;
    border-radius: 40px;
    box-shadow: 0 0 10px #7cf03d;
    font-size: 14px;
    color: #1f242d;
    font-weight: 200;
    transition: .5s;
 }

 .button:hover {
    background: transparent;
    color: #7cf03d;
    box-shadow: none;
 }

 /* contact */

 .contact-me {
   width: 100%;
   height: 290px;
   background-image: 
    linear-gradient(rgba(0,0,0,0.5), rgba(0,0,0,0.5)),  /* overlay gradient */
    url('images/tt.jpg');
   background-size: cover;
   background-repeat: no-repeat;
   background-position: center;
   display: flex;
   align-items: center;
   flex-direction: column;
   justify-content: center;
 }

 .contact-me p {
   color: #fff;
   font-size: 30px;
   font-weight: bold;
   margin-bottom: 25px;
 }

 @media (max-width: 480px) {
    .contact-me p {
      font-size: 16px;
    }
   }

 .contact-me .button-two {
   display: inline-block;
    padding: 10px 30px;
    background: #7cf03d;
    border: 1px solid #7cf03d;
    border-radius: 40px;
    box-shadow: 0 0 10px #7cf03d;
    font-size: 18px;
    color: #1f242d;
    font-weight: 200;
    transition: .5s;
 }
 .contact-me .button-two:hover {
   background: transparent;
    color: #7cf03d;
    box-shadow: none;
 }

 /* contact */

 /* Reset & basic styling */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Poppins', sans-serif;
}

body {
    background-color: #1f242d;
    color: #fff;
}

/* Contact Section */
.contact-section {
    display: flex;
    justify-content: center;
    align-items: center;
    padding: 80px 20px;
}

.contact-container {
    max-width: 600px;
    width: 100%;
    background-color: #2c323c;
    padding: 40px;
    border-radius: 12px;
    box-shadow: 0 0 8px rgba(124, 240, 61, 0.3);
    text-align: center;
}

.contact-container h2 {
    font-size: 32px;
    margin-bottom: 10px;
    color: #7cf03d;
}

.contact-container p {
    font-size: 16px;
    margin-bottom: 30px;
    color: #ccc;
}

.contact-form .form-group {
    margin-bottom: 20px;
    text-align: left;
}

.contact-form label {
    display: block;
    margin-bottom: 5px;
    font-size: 14px;
    color: #fff;
}

.contact-form input,
.contact-form textarea {
    width: 100%;
    padding: 12px 15px;
    border-radius: 8px;
    border: 1px solid #7cf03d;
    background-color: #1f242d;
    color: #fff;
    font-size: 14px;
}

.contact-form input:focus,
.contact-form textarea:focus {
    outline: none;
    border-color: #7cf03d;
    box-shadow: 0 0 10px #7cf03d;
}

.btn-send {
    background-color: #7cf03d;
    color: #1f242d;
    padding: 12px 30px;
    border: none;
    border-radius: 40px;
    cursor: pointer;
    font-size: 16px;
    font-weight: 600;
    transition: 0.4s;
}

.btn-send:hover {
    background-color: transparent;
    border: 1px solid #7cf03d;
    color: #7cf03d;
}

/* Responsive */
@media (max-width: 768px) {
    .contact-me {
        padding: 30px 20px;
    }
}

@media (max-width: 480px) {
    .contact-me .button {
        font-size: 28px;
    }
}

/* Responsive */
@media (max-width: 768px) {
    .contact-container {
        padding: 30px 20px;
    }
}

@media (max-width: 480px) {
    .contact-container h2 {
        font-size: 28px;
    }

    .btn-send {
        width: 100%;
        padding: 12px;
    }
}


 /* footer */

 /* @import url('https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css'); */

.footer {
  background-color: #1f242d;
  color: #fff;
  padding: 40px 20px 20px;
  text-align: center;
}

.footer-container {
  display: flex;
  flex-wrap: wrap;
  justify-content: space-around;
  gap: 40px;
  margin-bottom: 50px;
}

.footer-container div {
  flex: 1 1 250px;
}

.footer h2 {
  color: #7cf03d;
  margin-bottom: 15px;
  font-size: 20px;
}

.footer p {
  color: #ccc;
  line-height: 1.6;
}

.footer-links ul {
  list-style: none;
  padding: 0;
}

.footer-links li {
  margin: 8px 0;
}

.footer-links a {
  color: #ccc;
  text-decoration: none;
  transition: 0.3s;
}

.footer-links a:hover {
  color: #7cf03d;
}

.footer-contact i {
  color: #7cf03d;
  margin-right: 8px;
}

.footer-bottom {
  border-top: 1px solid #333;
  padding-top: 15px;
  font-size: 14px;
  color: #888;
}
