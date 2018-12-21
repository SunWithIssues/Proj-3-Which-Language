# Which Language - Coding Project for CS141

### Project Description
Uses analysis of already known language documents (that is Macbeth in 9 languages: English, Finnish, French, German, Hungarian, Italian, Portuguese, Spanish, and Esperanto) to find an alphabetic frequency counts for each language. 
The frequency counts are then used to correctly guess which language is given when the language is unknown.
This project was originally done during my CS141 class at UIC.

### Changes From UIC Project
I made some slight changes from the original UIC project. Added the Esperanto language. The information gathered from the known language documents (that is Macbeth documents) are not visible to the user, anymore. 
The user's only interaction is giving the unknown language, and the computer responds with a guess.

### Excution and Flaws
When the program first runs, the user is prompted to give a paragraph of one of the 9 languages listed.

<img src="https://github.com/SunWithIssues/Proj-3-Which-Language/blob/master/img/first-run.JPG" alt="prompt">

Longer texts are guessed correctly, but shorter texts are often wrong. Example cases drawn from the English <a href="https://en.wikipedia.org/wiki/Eminent_domain_in_the_United_States" target="_blank">Wikipedia page</a> on Eminent domain in the United States.

This case below is guessed correctly.
<img src="https://github.com/SunWithIssues/Proj-3-Which-Language/blob/master/img/right-assessment.JPG" alt="correct-example">
However, this slightly smaller case is guessed incorrectly.
<img src="https://github.com/SunWithIssues/Proj-3-Which-Language/blob/master/img/wrong-assessment.JPG" alt="wrong-example">

### Program Environment
The program was originally written for the Codio environment (codio.com). It can work in the Dev-C++. I believe there should be no real restrictions with other environments, though I have not checked.

### Sources
"MacbethEsperanto.txt" was taken from <a href="http://www.gutenberg.org/files/47913/47913-0.txt" target="_blank">gutenburg project</a>. All other Macbeth documents were retrieved from Professor Reed Dale with the original project description. The files "Text for testing.txt" and "countInputCharsFromFile.cpp" also came with the original project description by Professor Reed Dale.

### License
MIT © SunWithIssues

