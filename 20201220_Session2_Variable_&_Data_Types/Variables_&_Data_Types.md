<h6>Variable</h6> are nothing but the human readable/understandable world which can store the data (not actually)
</br>
data is stored into a specific memory location and variable are used to refers to that memory location.
</br>
each Variable has a primitive data type assigned to it</br>
data type tells the compile what type of data it is, such character, integer, decimal etc...
</br>
below are the few data types </br>
int = integer</br>
char = character</br>
double float = decimal point value.</br>

int has size of 4 byte (size = how much memory it takes from actual main memory)
</br>
char = 1 byte range 2^8</br>
int  = 4 byte range -2^31 to  2^31 (1 bit is used to represent +ve & -ve value)</br>
float = 4 byte range -2^31 to  2^31 (1 bit is used to represent +ve & -ve value)</br>
double = 8 byte range -2^31 to  2^31 (1 bit is used to represent +ve & -ve value)</br>

<i>some others are </i></br>
long  = 4 byte</br>
long long = 8 byte</br>
short = 2 byte</br>
above data types can be used as below</br>
long double, short int</br>

one can use <b>unsigned</b> to use full size of data type (ignoring 1 bit reserved for +ve & -ve sign)</br>

size of unsigned int is 0 to 2^32</br>
you can unsigned as prefix with any of other data type, except char</br>

<h2>syntax of declaring varible</h2></br>
char var = 'A';</br>
int variable = 5;</br>
double pi = 3.14;</br>

<h6>Character</h6>character data is represent with data type <b>char</b> has size of 1 byte
character can store number as well. but that number will be converted to ASCI character at time of execution, i.e. char var = 65; //will consider as <b>"A"</b> </br>

<h6>Float & Double</h6>
float and double are almost same the only difference is size and hence range.</br>
to distinguish float from double one can use suffix <b>f</b> after value
i.e. float a = 3.14<b><i>f</b></i>;</br>

<h6>Boolean</h6>
Boolean value is represent with data type bool. bool is used to store decision (I'll say ) decision in the sense True or False.</br>
actually it is 1 or 0 </br>
True  = 1;
False  = 0;
it can be represent with <b>"1 bit"</b> however, bool has a size of <b>1 byte.</b>
<i>Why? you asked ?</i>
cause processor (CPU) can not represent/assign address to 1 bit of memory, it requires minimum 1 byte of to assign address to it </br>


<b><i>Note: one can use sizeof function (or one can say operator) to find the size of each data type </i></b>
</br>
