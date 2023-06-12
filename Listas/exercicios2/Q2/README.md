## O que é "git cherry-pick"?
2.1) cherry-pick tem como tradução "selecionar a dedo". No git, o comando permite selecionar um commit específico
para ser inserido no código, ao invés de realizar o merge completo de uma brench, por exemplo. Assim, o desenvolvedor consegue selecionar alterações específicas de código para mesclar com seu trabalho, possuindo mais controle sobre as alterações e evitando possíveis conflitos que possa identificar.
    sintaxe: git cherry-pick <commit-hash>
    Uma vez informado o hash do commit, ele será aplicado na branch atual, criando um novo commit com as alterações do commit especificado.
## Você pode explicar o que “git reset” faz?
2.3) Desfaz um conjunto especificado de alterações em um repositório git. Podendo ser usado para desfazer
ações em um commit, ou uma branch, ou em todos os commits realizados.
    sintaxe: git reset <commit-hash>
    Uma vez informado o hash do commit para o qual queremos reverter a branch, o git irá desfazer todas as alterações posteriores a esse commit indicado.
## O que é o "HEAD" no Git?
2.4) O HEAD é uma espécie de ponteiro individual de cada máquina que marca o trabalho atual, ou seja, a branch em que estamos no momento. Mesmo que duas pessoas estejam trabalhando em uma mesma branch,
elas ainda possuem um HEAD diferente um do outro.  
    Exemplo de utilização:
    git reset HEAD~1
    com a utilização da referência de HEAD, a referência passada diz respeito ao commit anterior ao commit atual, marcado pelo HEAD. Com isso é feito o reset para essa indicação, conforme explicado logo acima.
## Qual é a diferença entre um 'fork' e um 'branch'?
2.6) Uma branch é criada como uma ramificação do projeto, ainda estando ligada a ele, de modo que outras pessoas a consigam acessar. Com fork, isso não é necessáriamente verdade uma vez que trata-se de uma cópia independente do repositório na conta de quem realizou o fork.
    Exemplo de utilização:
    Imaginando um cenário de exemplo. Ao contribuir com um projeto open-source, se possuímos privilégios de colaborador, podemos criar uma branch a partir de um determinado commit e fazer nossas alterações no mesmo repositório do projeto.
    Por outro lado, se não possuímos tal privilégio e fazemos um fork, é feita uma cópia completa do repositório para a conta do usuário. De modo que ele possa fazer seus próprias branches e alterações.
## O que é um 'stash'?
2.8) Um stash é uma forma de salvar temporariamente modificações em uma branch, sem necessáriamente ter
que fazer um commit para salva-las. Com o uso da stash, o desenvolvedor pode verificar verificar o código em outras branches, e depois voltar ao trabalho original, recuperando as alterações guardadas.
    Exemplo de utilização:
    Ao precisar fazer alterações rápidas em uma outra branch, é possível salvar temporariamente as alterações que você já fez na sua branch atual.
    git stash
    git checkout outra_branch
    ... correção de bugs ...
    git checkout minha_branch
    git stash apply
    Com git stash apply, as mudanças salvas são trazidas de volta.
