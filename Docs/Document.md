# PROJECT 01 

### Breif

I always wanted to do this. I want to make a kind of pseudo operating system simulator thingy. What that means is that I want to make my own Operating System almost, but without any kernal. Because writing a kernal is hard. Very, very hard.
What I will be doing is just write a graphical system that will have its own runtime environment. In simple words, I will make something like Symbian, without the kernal, but with more features than Symbian itself. I will also add support for other people to write their own apps, frameworks, you name it. It's gonna be open source, duh. It will run as a normal app on the host operating system and all of its capabilities are depended upon the host kernal itself. A simulator, but less complex and also more complex at the same time. What I want to say is, I suck at hardware. So I wont be touching that at all. 

### Details

I think I explained the main goal very well in the section above. Now, into the technical details.

Library : OpenGL/SFML (I'll probably change to SDL but thats for later)
Language: C/C++ (And some pseudo-scripting maybe)
Network : SFML has network modules so maybe.
Audio   : Duh
Graphics: Duh x2
___
Now its time to write the Engine. Let's make the prototype.

### Application pipeline

| /home/asif/Pictures/image.png |
  