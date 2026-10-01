const quotes=[
    "The Silent Death of an Artist pushes the downfall of Society."
    "Jack of all trades, master of none, but often better than master of one."
    "I am gonna make him an offer he cant refuse"
    "Fredo, youre my older brother and I love you. But dont ever take sides with anyone against the family."
    "Say hello to my little friend"
    "THE LAW IS SACRED. IF YOU ABUSE THAT POWER PEOPLE GET HURT."
];
function getrndQuote(){
    const rndIndex=Math.floor(Math.random()* quotes.length);
    return quotes[rndIndex];
}
console.log(getrndQuote());
console.log(getrndQuote());
