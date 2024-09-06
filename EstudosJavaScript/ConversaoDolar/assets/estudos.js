let idade = 19 //numero
let nome = "Rodrigo" //string
let logado = true //booleano




// array 

let ingredientes = ["Farinaha", "Ovo", "Leite"]

// console.log(ingredientes[1])

//objeto

let personagem = {
    nome:"Irineu",
    nivel: 10,
    vida: 100,
}

// console.log(personagem.nome)

function somar(a, b){
    let res = a + b
    return res
}

// console.log(somar(15,3))

let somar2 = (a, b) => { 
    let res = a + b
    return res
}

// console.log(somar2(2,321))




if(idade >= 18){
    console.log("Maior didade")
}
else{
    console.log("Menor didade")
}

if(nome == "Rodrigo"){
    console.log("Olá Rodrigo")
}
else{
    console.log("Ola, voce nao é rodrigo")
}

 


let lista = ["Farinha, Ovo, Cocaína"]

for(let i of lista){

    console.log("Ingrediente: " + i)

}


function avisar(){
    alert("Opa, gosei")
}


let bot = document.querySelector("#bottom")

bottom.addEventListener("click", avisar)


let usdInput = document.querySelector("#usd")
let brlInput = document.querySelector("#brl")

usdInput.addEventListener("keyup", () => {

    console.log(usdInput.value)
    
})

brlInput.addEventListener("keyup", () => {

    console.log(brlInput.value)
    
})