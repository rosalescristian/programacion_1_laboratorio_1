/** \brief pide un entero
 *
 * \param char[] mensaje a ser mostrado
 * \return int el numero entero
 *
 */
int getInt(char[]);
/** \brief pide un caracter
 *
 * \param char[] mensaje a ser mostrado
 * \return char el caracter
 *
 */
char getChar(char[]);
/** \brief pide un flotante
 *
 * \param char[] mensaje a ser mostrado
 * \return float el numero flotante
 *
 */
float getFloat(char[]);

/** \brief verifica si es un numero
 *
 * \param char[] array a verificar
 * \return int 1 si es numero, 0 si no
 *
 */
int isNumeric(char[]);
/** \brief verifica si es un numero de telefono
 *
 * \param char[]  array a verificar
 * \return int 1 si es un telefono, 0 si no
 *
 */
int isPhone(char[]);
/** \brief verifica si es alfanumerico
 *
 * \param char[] array a verificar
 * \return int 1 si es alfanumerio, 0 si no
 *
 */
int isAlphanumeric(char[]);
/** \brief verifica si son solo letras
 *
 * \param char[] array a verificar
 * \return int 1 si son letras, 0 si no
 *
 */
int isLetters(char[]);
/** \brief verifica si es un numero flotante
 *
 * \param char[] array a verificar
 * \return int 1 si es numero flotante, 0 si no
 *
 */
int isFloat(char[]);

/** \brief pide un string
 *
 * \param char[] mensaje a ser mostrado
 * \param char[] lugar donde guardarlo
 * \return void
 *
 */
void getString(char[], char[]);
/** \brief pide un string y verifica si son solo letras
 *
 * \param char[] mensaje a ser mostrado
 * \param char[] lugar donde guardarlo
 * \return int 1 si se realizo, 0 si no
 *
 */
int getStringLetters(char[], char[]);
/** \brief pide un string y verifica si son solo numeros
 *
 * \param char[] mensaje a ser mostrado
 * \param char[] lugar donde guardarlo
 * \return int 1 si se realizo, 0 si no
 *
 */
int getStringNumber(char[], char[]);

/** \brief pide un string, verifica si es un entero y devuelve el numero en formato int
 *
 * \param char[] mensaje a ser mostrado
 * \return int el numero en formato int
 *
 */
int getIntOnly(char[]);
/** \brief pide un string y verifica si es solo letras
 *
 * \param char[] mensaje a ser mostrado
 * \param char[] lugar donde guardar el string
 * \return void
 *
 */
void getStringOnly(char[], char[]);
/** \brief pide un string, verifica que sea numero flotante y lo devuelve en formato float
 *
 * \param char[] mensaje a ser mostrado
 * \return float numero en formato float
 *
 */
float getFloatOnly(char[]);



