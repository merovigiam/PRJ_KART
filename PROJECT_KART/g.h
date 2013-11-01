#ifndef G_H
#define G_H
#include <string>
#include <QMessageBox>
#include <QDialog>

using namespace std;

/**********************************************************************************************//**
 * \class	G
 *
 * \brief	Class General, intended to have only static functions needed in other classes, like the MessageBox functionality
 *
 * \author	A 13102966
 * \date	31/10/2013
 **************************************************************************************************/

class G
{
private:
    G();
public:


    /**********************************************************************************************//**
     * \fn	static void G::messageDialog(string title, string message, QWidget* form);
     *
     * \brief	Method to quickly display a message to the user, like warning messages.
     *
     * \author	A 13102966
     * \date	31/10/2013
     *
     * \param	title  	The desired title to the message.
     * \param	message	The desired message.
     * \param	form   	The parent form.
     **************************************************************************************************/

    static void messageDialog(string title, string message, QWidget* form);

	/**********************************************************************************************//**
     * \fn	static bool G::askYesNo(string title, string message, QWidget* form);
	 *
	 * \brief	Method that prompts the user a "yes" or "no" question. The default answer is true, that means yes.
	 *
	 * \author	A 13102966
	 * \date	31/10/2013
	 *
	 * \param	title  	The desired title.
	 * \param	message	The desired message.
	 * \param	form   	The parent form.
	 *
	 * \return	true if the user clicks YES, false if it NO.
	 **************************************************************************************************/

    static bool askYesNo(string title, string message, QWidget* form);


};

#endif // G_H
