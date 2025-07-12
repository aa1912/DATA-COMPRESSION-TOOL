# DATA-COMPRESSION-TOOL

"COMPANY" : CODTECH IT SOLUTIONS

"NAME" : ATHARVA AGRAWAL

"INTERN ID" : CT04DG1361

"DOMAIN" : C PROGRAMMING

"DURATION" : 4 WEEKS

"MENTOR" : NEELA SANTOSH

##Since I wrote the code before my laptop broke so when I tried it in a new laptop I did it in online compiler so the output picture has erroe opening file but it works if you have file saved.This project was to make a data compression tool using RLE which means run length encoding. It's one of the basic ways to compress data where if some char repeats many times, we just store the char and how many times it came. Like aaaabb becomes a4b2. I wrote the program in C language and made it able to both compress and decompress text files using files and file pointers. It was part of the internship deliverables from CodTech. The instructions said to make a compression tool and I think this meets the goal.So I created two main functions in the code, one called comp (short for compress) and other decomp (for decompress). I didn’t name them properly but I thought short names will save time. In comp I opened the input file and read it char by char and counted how many times a char repeats. If a new char comes I print the previous one and count. I used fprintf to write the result to output file. It writes like x5y3z1 format. For decompression I used fscanf to read char and number and then a loop to print that char that many times to output file.
In main I made a menu with 3 options. You can compress, decompress or exit. It asks for input and output file name and calls the right function. I didn’t add validation or if file doesn’t exist messages in fancy way but I wrote some basic printf lines like “cant open” or “done compressing”. It's not too user-friendly but I think it shows how compression works and how RLE is used.At first my decompression was not working right because I was reading char and then not reading int properly, so I fixed it by checking fscanf return and making sure format was correct. Also forgot to flush files in beginning so the output wasn’t saving, later I remembered to close the files. I also tried with some small test files like with aaaaabbbbcccc and it gave correct result like a5b4c4.

#OUTPUT

<img width="327" height="173" alt="Image" src="https://github.com/user-attachments/assets/c2605180-918f-4f3c-b3a3-1b5cf19391d2" />

