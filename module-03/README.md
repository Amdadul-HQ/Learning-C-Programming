A Small Space That Taught Me a Big Lesson in C Programming Today while solving a simple C programming problem, I faced something very unexpected — a single space made my whole program behave differently! 

I entered these inputs:
10
9999999999999
12.5
A

But the program didn’t show A at the end!!!!!!!!
 It looked like nothing was printed for the last value. 🤔

🧠 What Actually Happened
When we press Enter after typing a number, a hidden newline character (\n) stays in the input buffer.

So when scanf("%c", &d); runs, it doesn’t wait for your input — it takes that leftover newline instead of the real character 'A'.

That’s why it prints nothing!

✅ The Simple Fix

Add a space before %c:
scanf(" %c", &d);

That space tells C to ignore any blank space or newline before reading the character.
 Now it works perfectly! 

🧩 What I Learned
C is a low-level language, which means it doesn’t hide what’s happening inside the computer.

 Even a small thing like a space or a newline can change how your program works.
This small bug helped me understand how input, memory, and data actually flow in C — and that’s what makes learning it so powerful. 

Have you ever faced a tiny mistake that taught you a big lesson? 
Share it below — I’d love to hear! 
