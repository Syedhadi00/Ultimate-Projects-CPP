// Small library management
// including interesting 5 books
// S A H
#include <iostream>
using namespace std;
class library
{
public:
    int choice;
    library() // using constructor
    {
        cout << "<.=.> Welcome To Our Library <.=.>" << endl
             << endl;
    }
    void choose()
    {
        cout << "   ========== BOOKS ==========   " << endl
             << endl;
        cout << "< 1 > Kali Linux Basic Commands. " << endl;
        cout << "< 2 > Basic Computer Networking. " << endl;
        cout << "< 3 > All Cyber Security Domains. " << endl;
        cout << "< 4 > All Office Software Management." << endl;
        cout << "< 5 > All Computer Science Careers in 2026." << endl
             << endl;
        cout << "Enter Your Choice :" << endl;
        cin >> choice;
    }
    void manage()
    {
        if (choice == 1)
        {
            // All knowledge about commands
            cout << "=== Book : Kali Linux Commands ===" << endl
                 << endl;
            cout << "1. pwd - Show the current working directory" << endl;
            cout << "2. ls - List files and directories" << endl;
            cout << "3. cd - Change directory" << endl;
            cout << "4. mkdir - Create a new directory" << endl;
            cout << "5. touch - Create a new empty file" << endl;
            cout << "6. cp - Copy files or directories" << endl;
            cout << "7. mv - Move or rename files or directories" << endl;
            cout << "8. rm - Remove files or directories" << endl;
            cout << "9. cat - Display file contents" << endl;
            cout << "10. nano - Edit a text file" << endl;
            cout << "11. clear - Clear the terminal screen" << endl;
            cout << "12. whoami - Display the current username" << endl;
            cout << "13. sudo - Execute a command with elevated privileges" << endl;
            cout << "14. apt - Manage software packages" << endl;
            cout << "15. man - Display a command's manual page" << endl
                 << endl;
            cout << "========== The End ==========" << endl;
        }

        else if (choice == 2)
        {
            // All knowledge about networking
            cout << "=== Book : Basic Computer Networking ===" << endl
                 << endl;
            cout << "1. IP Address - Identifies a device on a network" << endl;
            cout << "2. MAC Address - Identifies a network interface" << endl;
            cout << "3. Router - Connects different networks" << endl;
            cout << "4. Switch - Connects devices within a network" << endl;
            cout << "5. Hub - Sends data to all connected devices" << endl;
            cout << "6. Firewall - Monitors and controls network traffic" << endl;
            cout << "7. DNS - Converts domain names into IP addresses" << endl;
            cout << "8. DHCP - Automatically assigns IP addresses to devices" << endl;
            cout << "9. NAT - Translates private IP addresses to public IP addresses" << endl;
            cout << "10. VPN - Creates a secure connection over a network" << endl;
            cout << "11. LAN - Local Area Network" << endl;
            cout << "12. WAN - Wide Area Network" << endl;
            cout << "13. TCP - Provides reliable data transmission" << endl;
            cout << "14. UDP - Provides faster connectionless data transmission" << endl;
            cout << "15. HTTP - Protocol used to transfer web pages" << endl
                 << endl;
            cout << "========== The End ==========" << endl;
        }
        else if (choice == 3)
        {
            // All knowledge about domains
            cout << "=== Book : All CyberSecurity Domains ===" << endl
                 << endl;
            cout << "1. Network Security - Protects computer networks from attacks and unauthorized access" << endl;
            cout << "2. Web Application Security - Protects websites and web applications from security vulnerabilities" << endl;
            cout << "3. Penetration Testing - Tests systems for security weaknesses" << endl;
            cout << "4. Cloud Security - Protects cloud-based systems, services, and data" << endl;
            cout << "5. Application Security - Protects software applications from security threats" << endl;
            cout << "6. Endpoint Security - Protects computers, laptops, and other endpoint devices" << endl;
            cout << "7. Digital Forensics - Investigates and analyzes digital evidence" << endl;
            cout << "8. Incident Response - Detects, handles, and recovers from security incidents" << endl;
            cout << "9. Security Operations - Monitors systems and responds to security threats" << endl;
            cout << "10. Cryptography - Protects information using encryption and related techniques" << endl;
            cout << "11. Identity and Access Management - Controls user identities and access to resources" << endl;
            cout << "12. Malware Analysis - Studies malicious software to understand its behavior" << endl;
            cout << "13. Vulnerability Management - Identifies, assesses, and manages security vulnerabilities" << endl;
            cout << "14. Security Auditing - Reviews systems and controls to identify security issues" << endl;
            cout << "15. IoT Security - Protects Internet of Things devices and networks" << endl;
            cout << "========== The End ==========" << endl;
        }
        else if (choice == 4)
        {
            // All knowledge about softwares
            cout << "=== Book : All Office Management Softwares ===" << endl
                 << endl;
            cout << "1. Microsoft Word - Used for creating and editing documents" << endl;
            cout << "2. Microsoft Excel - Used for spreadsheets, calculations, and data management" << endl;
            cout << "3. Microsoft PowerPoint - Used for creating presentations" << endl;
            cout << "4. Microsoft Outlook - Used for email, calendar, and contacts" << endl;
            cout << "5. Microsoft Access - Used for database management" << endl;
            cout << "6. Microsoft Teams - Used for communication and online meetings" << endl;
            cout << "7. Google Docs - Used for creating and editing documents online" << endl;
            cout << "8. Google Sheets - Used for spreadsheets and data management online" << endl;
            cout << "9. Google Slides - Used for creating presentations online" << endl;
            cout << "10. Adobe Acrobat Reader - Used for viewing PDF documents" << endl;
            cout << "11. OneDrive - Used for storing and sharing files online" << endl;
            cout << "12. Google Drive - Used for storing and sharing files online" << endl;
            cout << "13. Zoom - Used for online meetings and video conferencing" << endl;
            cout << "14. Slack - Used for workplace communication and collaboration" << endl;
            cout << "15. Trello - Used for task and project management" << endl
                 << endl;
            cout << "========== The End ==========" << endl;
        }
        else if (choice == 5)
        {
            // All knowledge about careers
            cout << "=== Book : All Computer Science Careers In 2026 ===" << endl
                 << endl;
            cout << "1. Software Engineering - Develops and maintains software applications" << endl;
            cout << "2. Web Development - Develops and maintains websites and web applications" << endl;
            cout << "3. Mobile App Development - Develops applications for mobile devices" << endl;
            cout << "4. Cybersecurity - Protects systems, networks, applications, and data" << endl;
            cout << "5. Artificial Intelligence - Develops intelligent computer systems and applications" << endl;
            cout << "6. Machine Learning - Develops systems that learn from data" << endl;
            cout << "7. Data Science - Uses data to find insights and support decision-making" << endl;
            cout << "8. Cloud Computing - Designs and manages cloud-based systems and services" << endl;
            cout << "9. DevOps Engineering - Automates and improves software development and deployment" << endl;
            cout << "10. Network Engineering - Designs and manages computer networks" << endl;
            cout << "11. Database Administration - Manages and maintains databases" << endl;
            cout << "12. IT Support - Provides technical support for computer systems and software" << endl;
            cout << "13. Systems Administration - Manages servers, operating systems, and IT infrastructure" << endl;
            cout << "14. Software Testing and QA - Tests software to find defects and ensure quality" << endl;
            cout << "15. UI/UX Design - Designs user interfaces and improves user experience" << endl;
            cout << "16. Game Development - Develops computer, console, and mobile games" << endl;
            cout << "17. Blockchain Development - Develops applications using blockchain technology" << endl;
            cout << "18. Embedded Systems - Develops software for hardware and electronic devices" << endl;
            cout << "19. Robotics Engineering - Develops and programs robotic systems" << endl;
            cout << "20. Computer Graphics - Creates and processes digital images, animations, and visual content" << endl;
            cout << "========== The End ==========" << endl;
        }
        else
        {
            cout << "Try Again (You Are Entering Wrong Number)." << endl;
        }
    }
};
int main()
{
    library h1;
    h1.choose();
    h1.manage();
    return 0;
}