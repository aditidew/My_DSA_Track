push(10);
push(20);
push(30);
display();        // Display after pushing 10, 20, 30

cout << "Top element is: " << peek() << endl;

pop();            // Pops 30
display();        // Display after popping 30

pop();            // Pops 20
pop();            // Pops 10
pop();            // Attempt to pop (causes underflow)

Check if empty
