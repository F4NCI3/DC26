len = 8
string = "        "
Serial = [Serial]  //whoami?

// YO "<yarn1>" <index> "<yarn2>"
// string1[index] = string2
// MAEK <var> [A] <type>

//generate random string to start, overwrite chars later
for (I = 0; I != 8; I++) {
  string = (string[I] = char(rand(0,95) + 32))
}

// s[1] = s[0] / 2
Serial[1] = char(max(32,(s[0] * 2)))

// Modulo the serial number to get it in the valid char range at s[2]
string[2] = char((Serial % 59) + 23)

// if s[3] > s[0]; s[4] = A, else s[4] = B
if (string[3] == (min(string[3], string[0]))) {
  string[5] = "A"
} else {
  string[4] = "8"
}

// s[56] = str(((s[1] + s[2] + s[3])))
//s R GNAW YO s 5 GNAW MAEK( SUM OF CUT s l AN SUM OF CUT s 2 AN CUT S 3) A YARN 0 2 0 7
//string is now substring(replace s[5] with yarn(s[l] + (s[2] + s[3]) 0 2 0 7))
string[5] = yarn(string[8] + (string[2] + string[3]) 0 2 0 7
