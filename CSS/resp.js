burger = document.querySelector('.burger')
navbar = document.querySelector('.navbar')
items = document.querySelector('.items')
rightnav = document.querySelector('.right-nav')



burger.addEventListener('click', ()=>{
    rightnav.classList.toggle('v-class')
    items.classList.toggle('v-class')
    navbar.classList.toggle('h-nav')
}
)