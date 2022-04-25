# How to use

<ol>
    <li> Rename the file to have a .hpp file extention </li>
    <li> Include the header file in your main file (or file of choise) </li>
    <li> All classes in this file are prefixed with the "qb" namespace </li>
    <li> Make an instance of the "question" class with the parameters being the the question you want. </li>
    <li> To show results, make an instance of the "results" class with the results type you wish (only one is "word" at the moment) </li>
</ol>

# Other information

<ul>
    <li> To configure the result text for the "word" result type, you must call the configure function from the result class, the parameters are the kind of result text to change (options being:)

        lowest 
        lower 
        low 
        neutral 
        high 
        higher 
        highest

and what you want to change it to.
    </li>
    <li> Graph result options may be coming in the future </li>
</ul>

