# Herança
Mecanismo existente em POO que permite que uma classe herde
membros (atributos e/ou métodos) de outra classe

membros comuns a diferentes classes são reunidos em uma única classe, conhecida
como classe base ou superclasse

a partir da classe base, outras classes (chamadas classes derivadas ou subclasses)
podem ser definidas possuindo os mesmos membros especificados na classe base
○ as classes derivadas podem conter membros que sejam particulares a elas, ou seja, não
são compartilhados com as outras classes derivadas
# Implementando

Além dos modificadores de acesso já apresentados (public e
private), existe um outro especificador relacionado estritamente ao
conceito de herança: protected
○ Um membro protected funciona como um membro privado (private) sob o
ponto de vista externo a classe
■ A diferença é que membros protected são visíveis pelas classes
derivadas, enquanto os privados (private) não o são.

As classes derivadas herdam uma classe base com
um modificador de acesso (tipicamente public)
operador : (dois-pontos)
class classe_derivada : (acesso) classe_base{
    //corpo da classe derivada
}

As classes derivadas podem ter novos atributos e métodos
além dos já existentes na classe base e que foram herdados
○ Os membros públicos e protegidos definidos na classe base são 
herdados pela classe derivada
● As classes derivadas podem sobrescrever métodos definidos 
na classe base
○ Método tem de ter a mesma assinatura
