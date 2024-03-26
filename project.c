#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define NUM_JOKES 31

#define NUM_SIGNS 12

typedef enum
{
    ARIES,
    TAURUS,
    GEMINI,
    CANCER,
    LEO,
    VIRGO,
    LIBRA,
    SCORPIO,
    SAGITTARIUS,
    CAPRICORN,
    AQUARIUS,
    PISCES
} ZodiacSign;

const char *horoscopes[NUM_SIGNS] = {
    "Today, you may find yourself feeling more confident and energetic. It's a great day to take on new challenges and pursue your goals. Embrace opportunities for growth and success.",
    "You might feel a strong sense of determination today, Taurus. Trust your instincts and stay focused on your objectives. Your hard work will pay off in the long run.",
    "Communication is key today, Gemini. Share your thoughts and ideas with others, and don't be afraid to express yourself. Your wit and charm will help you navigate any situation.",
    "You may experience a surge of creativity and emotion today, Cancer. Use this energy to connect with your inner self and explore your passions. Don't be afraid to let your feelings guide you.",
    "Today is a day for leadership and self-expression, Leo. Take charge of your destiny and show the world what you're capable of. Your charisma will inspire others to follow your lead.",
    "Attention to detail will serve you well today, Virgo. Focus on the little things and strive for perfection in everything you do. Your hard work and dedication will be rewarded.",
    "Balance is key today, Libra. Find harmony between work and play, and prioritize self-care. Take time to relax and recharge your batteries.",
    "You may feel a deep sense of introspection today, Scorpio. Use this time to reflect on your goals and aspirations. Trust your intuition to guide you in the right direction.",
    "Today, you may feel a sense of wanderlust and adventure, Sagittarius. Embrace opportunities to explore new places and expand your horizons. You never know what exciting discoveries await.",
    "Hard work pays off today, Capricorn. Stay focused on your objectives and don't let distractions derail your progress. Your determination will lead to success.",
    "You may feel a strong sense of community and connection today, Aquarius. Spend time with loved ones and cherish the bonds that unite you. Together, you can accomplish great things.",
    "You may experience a wave of intuition and empathy today, Pisces. Trust your instincts and be open to receiving guidance from the universe. Pay attention to your dreams and inner wisdom."};

// Function to get the user's zodiac sign based on their birth month and day
ZodiacSign getZodiacSign(int month, int day)
{
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
    {
        return ARIES;
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
    {
        return TAURUS;
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
    {
        return GEMINI;
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
    {
        return CANCER;
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
    {
        return LEO;
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
    {
        return VIRGO;
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
    {
        return LIBRA;
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
    {
        return SCORPIO;
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
    {
        return SAGITTARIUS;
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
    {
        return CAPRICORN;
    }
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
    {
        return AQUARIUS;
    }
    else
    {
        return PISCES;
    }
}

// Function to display the daily horoscope for a given zodiac sign
void displayHoroscope(ZodiacSign sign)
{
    printf("Daily Horoscope for ");
    system("espeak \"Daily Horoscope for\"");
    switch (sign)
    {
    case ARIES:
        printf("Aries:\n");
        system("espeak \"Aries\"");
        break;
    case TAURUS:
        printf("Taurus:\n");
        system("espeak \"Taurus\"");
        break;
    case GEMINI:
        printf("Gemini:\n");
        system("espeak \"Gemini\"");
        break;
    case CANCER:
        printf("Cancer:\n");
        system("espeak \"Cancer\"");
        break;
    case LEO:
        printf("Leo:\n");
         system("espeak \"Leo\"");
        break;
    case VIRGO:
        printf("Virgo:\n");
         system("espeak \"Virgo\"");
        break;
    case LIBRA:
        printf("Libra:\n");
         system("espeak \"Libra\"");
        break;
    case SCORPIO:
        printf("Scorpio:\n");
         system("espeak \"Scorpio\"");
        break;
    case SAGITTARIUS:
        printf("Sagittarius:\n");
         system("espeak \"Sagittarius\"");
        break;
    case CAPRICORN:
        printf("Capricorn:\n");
         system("espeak \"Capricorn\"");
        break;
    case AQUARIUS:
        printf("Aquarius:\n");
         system("espeak \"Aquarius\"");
        break;
    case PISCES:
        printf("Pisces:\n");
         system("espeak \"Pisces\"");
        break;
    }

    printf("%s\n", horoscopes[sign]);
    char command[1000];
    sprintf(command, "espeak \"%s\"", horoscopes[sign]);
    system(command);
    

    printf("\n\n");
    // Print the random joke
    // printf("Random Joke:\n%s\n", jokes[randomIndex]);
    
}

// Function to get the daily horoscope based on user's birth month and day
void getDailyHoroscope(int month, int day)
{
    // Get user's zodiac sign
    ZodiacSign userSign = getZodiacSign(month, day);

    // Display daily horoscope
    displayHoroscope(userSign);
}

const char *jokes[NUM_JOKES] = {
    "Why don't scientists trust atoms? Because they make up everything!",
    "Did you hear about the mathematician who's afraid of negative numbers? He will stop at nothing to avoid them!",
    "Why did the scarecrow win an award? Because he was outstanding in his field!",
    "What did one ocean say to the other ocean? Nothing, they just waved!",
    "Why don't skeletons fight each other? They don't have the guts!",
    "Why did the programmer always carry a flashlight? Because they preferred to work in 'debugging' mode!",
    "Why did the programmer break up with their calculator? Because it had too many issues with commitment and kept multiplying their problems!",
    "Why was the computer cold? It left its Windows open!",
    "Why do programmers always mix up Christmas and Halloween? Because Oct 31 equals Dec 25 in hexadecimal!",
    "Why was the JavaScript developer sad? Because he didn't 'React' well to criticism.",
    "Why was the database administrator nervous? Because he couldn't SQL his way out of a paper bag!",
    "Why did the programmer plant a tree? Because they wanted to branch out!",
    "Why did the programmer go broke? Because he used up all his cache and couldn't afford to buy RAMen noodles.",
    "Why don't programmers like to play hide and seek? Because good players are always encapsulated!",
    "Why did the programmer get stuck in the shower? Because the instructions said: Lather, Rinse, Repeat, but they were stuck in an infinite loop!",
    "Why do programmers prefer dark mode? Because light attracts bugs and they prefer to code in the shadows.",
    "Why was the function so popular at parties? Because it always had a return!",
    "Why do programmers prefer dogs? Because dogs have fetching methods!",
    "Why did the programmer quit smoking? Because they didn't want to deal with uncaught exceptions!",
    "Why did the programmer put on a warm sweater? Because they were feeling a bit chilly-squared!",
    "Why do programmers always mix up Christmas and Halloween? Because Oct 31 equals Dec 25 in binary!",
    "Why did the programmer go to therapy? Because they had too many objects stored in their memory!",
    "Why don't programmers like to go to the beach? Because of the constant 'shell' scripting!",
    "Why did the programmer bring a ladder to work? Because they heard the code needed to be debugged line by line!",
    "Why did the programmer always wear headphones? Because he didn't want to be disturbed while he was coding in his own 'byte'!",
    "Why do programmers always mix up Christmas and Halloween? Because Oct 31 equals Dec 25 in octal"};

// Function to display a random joke
void displayRandomJoke()
{
    // Generate a random index within the range of the jokes array
    int randomIndex = rand() % NUM_JOKES;

    printf("%s\n", jokes[randomIndex]);
    // Print the random joke
    // printf("Random Joke:\n%s\n", jokes[randomIndex]);
    char command[1000];
    sprintf(command, "espeak \"%s\"", jokes[randomIndex]);
    system(command);
}

#define MAX_EVENTS 50
#define MAX_EVENT_LENGTH 100

typedef struct
{
    char description[MAX_EVENT_LENGTH];
    time_t time;
} Event;

void addEvent(Event events[], int *eventCount)
{
    if (*eventCount >= MAX_EVENTS)
    {
        printf("Maximum number of events reached.\n");
        return;
    }

    printf("Enter event description: ");
    system("espeak \"Enter event description\"");
    
    scanf(" %[^\n]", events[*eventCount].description);

    // Set event time (for simplicity, let's say events are today)
    time_t currentTime = time(NULL);
    struct tm *localTime = localtime(&currentTime);
    localTime->tm_hour = 12; // Set event time to 12:00 PM
    localTime->tm_min = 0;
    localTime->tm_sec = 0;
    events[*eventCount].time = mktime(localTime);

    (*eventCount)++;
    printf("Event added successfully.\n");
    system("espeak \"Event added successfully\"");
}

void displayEvents(Event events[], int eventCount)
{
    if (eventCount == 0)
    {
        printf("No events available.\n");
        system("espeak \"No events available\"");
        return;
    }

    printf("\n--- Events ---\n");
    for (int i = 0; i < eventCount; i++)
    {
        printf("%d. %s\n", i + 1, events[i].description);

        // Print event time
        struct tm *eventTime = localtime(&events[i].time);
        printf("   Date: %02d/%02d/%d  Time: %02d:%02d\n",
               eventTime->tm_mday, eventTime->tm_mon + 1, eventTime->tm_year + 1900,
               eventTime->tm_hour, eventTime->tm_min);
    }
}

void remindUpcomingEvents(Event events[], int eventCount)
{
    time_t currentTime = time(NULL);
    printf("\n--- Upcoming Events ---\n");
    system("espeak \"Upcoming Events\"");
    for (int i = 0; i < eventCount; i++)
    {
        // Check if event time is within the next 24 hours
        if (events[i].time - currentTime <= 24 * 3600)
        { // 24 hours in seconds
            printf("%s - happening soon!\n", events[i].description);
        }
    }
}

void calendarIntegration(Event events[], int *eventCount)
{
    int choice;

    printf("Welcome to Calendar Integration!\n");
    system("espeak \"Welcome to Calendar Integration\"");
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add a new event\n");
        printf("2. View all events\n");
        printf("3. Remind upcoming events\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEvent(events, eventCount);
            break;
        case 2:
            displayEvents(events, *eventCount);
            break;
        case 3:
            remindUpcomingEvents(events, *eventCount);
            break;
        case 4:
            printf("Exiting...\n");
            system("espeak \"Exiting...\"");
            return; // Return from the function
        default:
            printf("Invalid option. Please try again.\n");
            system("espeak \"Invalid option. Please try again\"");
        }
    }
}

void delay(int milliseconds)
{
    for (int i = 0; i < milliseconds * 10000; i++)
    {
        // Adjust the loop condition and the multiplication factor as needed
    }
}

int getRandomNumber(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void getRandomFactOrQuote()
{
    // Array of facts or quotes
    const char *factsOrQuotes[] = {
        // "The Earth's atmosphere is composed of approximately 78% nitrogen, 21% oxygen, and 1% other gases.",
        "Failure is simply the opportunity to begin again, this time more intelligently - Henry Ford", 
        // "Isaac Newton formulated the laws of motion and universal gravitation.",
        "Success is stumbling from failure to failure with no loss of enthusiasm - Winston Churchill" ,
        // "The human brain is the most energy-consuming organ in the body.",
        "Failure is the condiment that gives success its flavor - Truman Capote",
        "“The only way to do great work is to love what you do.” - Steve Jobs",
        // "The Great Wall of China is over 13,000 miles long.",
        "Success is not the absence of failure; it's the persistence through failure.",
        "Failure is a detour, not a dead-end street - Zig Ziglar",
        "Success is not about avoiding failure, but learning from it and moving forward.",
        "Failure is not falling down but refusing to get up - Chinese Proverb" ,
        "Success is walking from failure to failure with no loss of enthusiasm - Winston Churchill",
        "Failure is the path of least persistence; success is the road of endless perseverance.",
        "Success is not measured by how many times you fall, but by how many times you rise after each fall.",
        "Failure is a temporary detour, not a dead-end street.",
        "Success is not the absence of failure, but the ability to recover from it quickly.",
        "Failure is the opportunity to begin again more intelligently- Henry Ford",
        "Success is the result of perfection, hard work, learning from failure, loyalty, and persistence - Colin Powell",
        "Failure is the stepping stone to success; it's the lessons learned that pave the way.",
        "Success is not determined by how many times you've failed, but by how you've risen above each setback.",
        // "A group of flamingos is called a flamboyance.",
        // "Honey never spoils. Archaeologists have found pots of honey in ancient Egyptian tombs that are over 3,000 years old and still perfectly edible.",
        "“Success is not final, failure is not fatal: It is the courage to continue that counts.” - Winston Churchill",
        "The only way to do great work is to love what you do - Steve Jobs",
        "The only thing necessary for the triumph of evil is for good men to do nothing. - Edmund Burke",
        "In the end, we will remember not the words of our enemies, but the silence of our friends.- Martin Luther King Jr",
        "Be yourself; everyone else is already taken.- Oscar Wilde",
        "The only true wisdom is in knowing you know nothing.- Socrates ",
        "Life is what happens when you're busy making other plans.- John Lennon ",
        "The greatest glory in living lies not in never falling, but in rising every time we fall.- Nelson Mandela",
        "I have not failed. I've just found 10,000 ways that won't work.- Thomas Edison",
        "The best way to predict the future is to invent it.- Alan Kay",
        "Success is not final, failure is not fatal: It is the courage to continue that counts.-Winston Churchill",
        // "The Eiffel Tower can be 15 cm taller during the summer due to thermal expansion",
        // "The first computer virus was created in 1983 and was called the Elk Cloner.",
        // "Cleopatra VII of Egypt lived closer in time to the moon landing than to the construction of the Great Pyramid of Giza",
        // "The original name of Bank of America was Bank of Italy.",
        // "The longest time between two twins being born is 87 days.",
        // "Bananas are berries, but strawberries aren't",
        // "The average person will spend six months of their life waiting for red lights to turn green",
        // "Bees can recognize human faces.",
        // "The electric chair was invented by a dentist",
        // "The longest word in the English language is pneumonoultramicroscopicsilicovolcanoconiosis, which is a lung disease caused by inhaling very fine silicate or quartz dust.",
        // "The original name of Google was Backrub.",

    };

    // Get the total number of facts or quotes
    int numFactsOrQuotes = sizeof(factsOrQuotes) / sizeof(factsOrQuotes[0]);

    // Generate a random index
    int randomIndex = getRandomNumber(0, numFactsOrQuotes - 1);

    // Print the random fact or quote
    printf("%s\n", factsOrQuotes[randomIndex]);

    char command[1000];
    sprintf(command, "espeak \"%s\"", factsOrQuotes[randomIndex]);
    system(command);
}
void printWithDelay(const char *text)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        printf("%c", text[i]);
        fflush(stdout);
        delay(500); // Adjust the delay duration as needed

        if (text[i] == ' ')
        {
            printf(" ");
            fflush(stdout);
            delay(250);
        }
    }
}
#define MAX_TASKS 100
#define MAX_TASK_LENGTH 50

char tasks[MAX_TASKS][MAX_TASK_LENGTH];
int numTasks = 0;

void task()
{
    int choice, taskIndex;
    char taskInput[MAX_TASK_LENGTH];

    printf("Welcome to Todo List\n");
    system("espeak \"Welcome to To do List\"");
    
    while (1)
    {
        printf("\n1. Add Task\n");
        system("espeak \"Add Task\"");
        printf("2. Display Tasks\n");
        system("espeak \"Display Tasks\"");
        printf("3. Delete Task\n");
        system("espeak \"Delete Task\"");
        printf("4. Exit\n");
        system("espeak \"Exit\"");
        printf("Enter your choice: ");
        system("espeak \"Enter your choice\"");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter task: ");
            getchar(); // Clearing the input buffer
            fgets(taskInput, sizeof(taskInput), stdin);
            taskInput[strcspn(taskInput, "\n")] = '\0'; // Removing the trailing newline character
            if (numTasks < MAX_TASKS)
            {
                strcpy(tasks[numTasks], taskInput);
                numTasks++;
                printf("Task added successfully.\n");
                system("espeak \"Task added successfully\"");
            }
            else
            {
                printf("Cannot add more tasks. Todo list is full.\n");
                system("espeak \"Cannot add more tasks. Todo list is full\"");
            }
            break;
        case 2:
            if (numTasks == 0)
            {
                printf("Todo list is empty.\n");
                system("espeak \"Todo list is empty\"");
            }
            else
            {
                printf("Todo list:\n");
                system("espeak \"Todo list\"");
                for (int i = 0; i < numTasks; i++)
                {
                    printf("%d. %s\n", i + 1, tasks[i]);
                }
            }
            break;
        case 3:
            printf("Enter index of task to delete: ");
             system("espeak \"Enter index of task to delete\"");
            scanf("%d", &taskIndex);
            if (taskIndex > 0 && taskIndex <= numTasks)
            {
                for (int i = taskIndex - 1; i < numTasks - 1; i++)
                {
                    strcpy(tasks[i], tasks[i + 1]);
                }
                numTasks--;
                printf("Task deleted successfully.\n");
                system("espeak \"Task deleted successfully\"");
            }
            else
            {
                printf("Invalid task index.\n");
                system("espeak \"Invalid task index\"");
            }
            break;
        case 4:
            printf("Exiting...\n");
            system("espeak \"Exiting...\"");
            return;
        default:
            printf("Invalid choice. Please try again.\n");
            system("espeak \"Invalid choice. Please try again\"");
        }
    }
}
void greetings()
{
    time_t now = time(NULL);
    struct tm *timeinfo = localtime(&now);

    if (timeinfo->tm_hour < 12)
    {
        printf("Good Morning \n");
        system("espeak \"Good Morning \"");
        printf("\nHello I am phoenix and I am your personal assistant\n");
        system("espeak \"Hello I am phoenix and I am your personal assistant\"");
    }
    else if (timeinfo->tm_hour >= 12 && timeinfo->tm_hour < 17)
    {
        printf("Good Afternoon\n");
        system("espeak \"Good Afternoon \"");
        printf("\nHello I am phoenix and I am your personal assistant\n");
        system("espeak \"Hello I am Montu and I am your personal assistant   \"");
    }
    else
    {
        printf("Good Evening \n");
        system("espeak \"Good Evening\"");
        printf("\nHello I am phoenix and I am your personal assistant\n");
        system("espeak \"Hello I am phoenix and I am your personal assistant   \"");
    }
}

void datetime()
{
    time_t now = time(NULL);
    char *dt = ctime(&now);
    printf("The date and time is \n%s\n", dt);
}

void openYouTube()
{
    printf("Opening YouTube\n");
    system("espeak \"opening youtube\"");
    system("start https://www.youtube.com");
}

void closeYouTube()
{
    printf("Closing YouTube...\n");
    system("espeak \"closing youtube\"");
    system("taskkill /IM chrome.exe /F"); // Change "chrome.exe" to the actual browser process name if using a different browser
}

void openGoogle()
{
    printf("Opening Google\n");
    system("espeak \"opening google\"");
    system("start https://www.google.com");
}

void closeGoogle()
{
    printf("Closing Google...\n");
    system("taskkill /IM chrome.exe /F"); // Change "chrome.exe" to the actual browser process name if using a different browser
}

void openLinkedin()
{
    printf("Opening LinkedIn\n");
    system("espeak \"opening linkedin\"");
    system("start https://www.linkedin.com");
}

void openChatGPT()
{
    printf("Opening ChatGPT\n");
    system("espeak \"opening chatgpt\"");
    system("start https://www.chatgpt.com");
}

void openMaps()
{
    printf("Opening Maps\n");
    system("espeak \"opening maps\"");
    system("start https://www.google.com/maps");
}
// gmail,facebook,twitter,ins
void openMeet()
{
    printf("Opening Meet\n");
    system("espeak \"opening meet\"");
    system("start https://meet.google.com/");
}

void openGmail()
{
    printf("Opening Gmail\n");
    system("espeak \"opening gmail\"");
    system("start https://mail.google.com/");
}

void openFacebook()
{
    printf("Opening Facebook\n");
    system("espeak \"opening facebook\"");
    system("start https://www.facebook.com/");
}

void openTwitter()
{
    printf("Opening Twitter\n");
    system("espeak \"opening twitter\"");
    system("start https://twitter.com/");
}

void openInstagram()
{
    printf("Opening Instagram\n");
    system("espeak \"opening instagram\"");
    system("start https://www.instagram.com/");
}

void openGithub()
{
    printf("Opening Github\n");
    system("espeak \"opening github\"");
    system("start https://github.com/");
}

void openWhatsapp()
{
    printf("Opening Whatsapp\n");
    system("espeak \"opening whatsapp\"");
    system("start https://web.whatsapp.com/");
}

void openTelegram()
{
    printf("Opening Telegram\n");
    system("espeak \"opening telegram\"");
    system("start https://t.me/");
}

void openDiscord()
{
    printf("Opening Discord\n");
    system("espeak \"opening discord\"");
    system("start https://discord.com/");
}

void openDiscordBot()
{
    printf("Opening Discord Bot\n");
    system("espeak \"opening discord bot\"");
    system("start https://discord.com/api/oauth2/authorize?client_id=8011111111111111&permissions=8&scope=bot");
}

void openInstagramBot()
{
    printf("Opening Instagram Bot\n");
    system("espeak \"opening instagram bot\"");
    system("start https://instagram.com/bot/");
}

void openWhatsappBot()
{
    printf("Opening Whatsapp Bot\n");
    system("espeak \"opening whatsapp bot\"");
    system("start https://web.whatsapp.com/bot/");
}

void openTelegramBot()
{
    printf("Opening Telegram Bot\n");
    system("espeak \"opening telegram bot\"");
    system("start https://t.me/bot/");
}

void openGithubBot()
{
    printf("Opening Github Bot\n");
    system("espeak \"opening github bot\"");
    system("start https://github.com/bot/");
}

void openLinkedinBot()
{
    printf("Opening Linkedin Bot\n");
    system("espeak \"opening linkedin bot\"");
    system("start https://www.linkedin.com/bot/");
}

void openGmailBot()
{
    printf("Opening Gmail Bot\n");
    system("espeak \"opening gmail bot\"");
    system("start https://mail.google.com/bot/");
}

void openFacebookBot()
{
    printf("Opening Facebook Bot\n");
    system("espeak \"opening facebook bot\"");
    system("start https://www.facebook.com/bot/");
}

void openTwitterBot()
{
    printf("Opening Twitter Bot\n");
    system("espeak \"opening twitter bot\"");
    system("start https://twitter.com/bot/");
}

void openMylinkedin()
{
    printf("Opening My LinkedIn\n");
    system("espeak \"opening my linkedin\"");
    system("start https://www.linkedin.com/in/syed-muhammad-minhal-rizvi-0807962a4/");
}

void openMygithub()
{
    printf("Opening My Github\n");
    system("espeak \"opening my github\"");
    system("start https://github.com/Minhal128");
}

void openMyinstagram()
{
    printf("Opening My Instagram\n");
    system("espeak \"opening my instagram\"");
    system("start https://www.instagram.com/syedmuhammadminhal9/");
}

void openMymedium()
{
    printf("Opening My Medium\n");
    system("espeak \"opening my medium\"");
    system("start https://medium.com/@rizvi4600779");
}

void openNetflix()
{
    printf("Opening Netflix\n");
    system("espeak \"opening netflix\"");
    system("start https://www.netflix.com/");
}

void openAmazon()
{
    printf("Opening Amazon\n");
    system("espeak \"opening amazon\"");
    system("start https://www.amazon.com/");
}

void openGooglePlay()
{
    printf("Opening Google Play\n");
    system("espeak \"opening google play\"");
    system("start https://play.google.com/");
}

void openAmazonPrime()
{
    printf("Opening Amazon Prime\n");
    system("espeak \"opening amazon prime\"");
    system("start https://prime.amazon.com/");
}

void NEDweb()
{
    printf("Opening NED Website\n");
    system("espeak \"opening n e d Website\"");
    system("start https://cct.neduet.edu.pk/");
}
void NEDAi()
{
    printf("Opening Artificial Intelligence Timetable\n");
    system("espeak \"opening Artificial Intelligence Time table\"");
    system("start https://cct.neduet.edu.pk/sites/default/files/csit/Time%20Tables/Spring%202024/CS-AI1.pdf");
}
void NEDDs()
{
    printf("Opening Data Science Timetable\n");
    system("espeak \"Opening Data Science Time table\"");
    system("start https://cct.neduet.edu.pk/sites/default/files/csit/Time%20Tables/Spring%202024/CS-DS1.pdf");
}
void NEDCr()
{
    printf("Opening Cyber Security Timetable\n");
    system("espeak \"Opening Cyber Security Time table\"");
    system("start https://cct.neduet.edu.pk/sites/default/files/csit/Time%20Tables/Spring%202024/CS-CR1.pdf");
}
void NEDGa()
{
    printf("Opening Gaming Animation Timetable\n");
    system("espeak \"Opening Gaming Animation Time table\"");
    system("start https://cct.neduet.edu.pk/sites/default/files/csit/Time%20Tables/Spring%202024/CS-GA.pdf");
}
void NEDCs()
{
    printf("Opening Computer Science (BCIT) Timetable\n");
    system("espeak \"opening CS time table\"");
    system("start https://cct.neduet.edu.pk/sites/default/files/csit/Time%20Tables/Spring%202024/CS1.pdf");
}

void nedadmission()
{
    printf("Opening NED Admission\n");
    system("espeak \"opening NED admission\"");
    system("start https://cct.neduet.edu.pk/admission_ms");
}
void openBlogonPA() 
{
    printf("Opening Blog on PHOENIX\n");
    system("espeak \"opening blog on phoenix\"");
    system("start https://blog.minhal128.com/");
}
void openMedium()
{
    printf("Opening My Medium\n");
    system("espeak \"opening my medium\"");
    system("start https://medium.com/");
}

void openMyblog()
{

    printf("Opening My Blog on PHOENIX\n");
    system("espeak \"opening my blog on PHOENIX\"");
    system("start https://medium.com/@rizvi4600779/phoenix-bridging-pythons-ease-with-c-s-power-for-high-performance-personal-assistance-87e21919ea75");
}

// void intro()
// {
//     printf
// }
void openTextReaderMode()
{
    printf("Opening Text Reader Mode\n");
    system("espeak \"Opening Text Reader Mode\"");
    printf("--------------------------------\n");
    printf("Enter the text reader mode command: ");
    system("espeak \"Enter the text reader mode command\"");

    char readmode[1000];
    fgets(readmode, sizeof(readmode), stdin);
    readmode[strcspn(readmode, "\n")] = '\0';
    char espeak_command[1100]; // To accommodate the command and readmode
    sprintf(espeak_command, "espeak \"%s\"", readmode);
    system(espeak_command);
}

void resumeTips()
{
    printf("RESUME WRITING TIPS:\n");
    system("espeak \"RESUME WRITING TIPS\"");
    printf("- Highlight your most relevant skills and experiences.\n");
    system("espeak \"Highlight your most relevant skills and experiences\"");
    printf("- Use action verbs to describe your accomplishments.\n");
    system("espeak \"Use action verbs to describe your accomplishments\"");
    printf("- Keep your resume concise and easy to read.\n");
    system("espeak \"Keep your resume concise and easy to read\"");
    printf("- Tailor your resume for each job application.\n");
    system("espeak \"Tailor your resume for each job application\"");
    printf("\n");
}

// Function to provide interview preparation tips
void interviewTips()
{
    printf("INTERVIEW PREPARATION TIPS:\n");
    system("espeak \"INTERVIEW PREPARATION TIPS\"");
    printf("- Research the company and the position you're applying for.\n");
    system("espeak \"Research the company and the position you're applying for\"");
    printf("- Practice common interview questions and answers.\n");
    system("espeak \"Practice common interview questions and answers\"");
    printf("- Dress professionally and arrive on time.\n");
    system("espeak \"Dress professionally and arrive on time\"");
    printf("- Prepare questions to ask the interviewer.\n");
    system("espeak \"Prepare questions to ask the interviewer\"");
    printf("\n");
}

// Function to search for job openings
void searchJobOpenings()
{
    printf("SEARCHING FOR JOB OPENINGS:\n");
    system("espeak \"SEARCHING FOR JOB OPENINGS\"");
    printf("- Use online job boards such as Indeed, LinkedIn, or Glassdoor.\n");
    system("espeak \"Use online job boards such as Indeed, LinkedIn, or Glassdoor\"");
    printf("- Network with professionals in your field.\n");
    system("espeak \"Network with professionals in your field\"");
    printf("- Attend job fairs and career events.\n");
    system("espeak \"Attend job fairs and career events\"");
    printf("- Check company websites for career opportunities.\n");
    system("espeak \"Check company websites for career opportunities\"");
    printf("\n");
}

// Function to notify users of relevant job opportunities
void notifyJobOpportunities()
{
    printf("NOTIFYING JOB OPPORTUNITIES:\n");
    system("espeak \"NOTIFYING JOB OPPORTUNITIES\"");
    printf("- Set up job alerts on job search websites.\n");
    system("espeak \"Set up job alerts on job search websites\"");
    printf("- Subscribe to industry-specific newsletters.\n");
    system("espeak \"Subscribe to industry-specific newsletters\"");
    printf("- Follow companies on social media for job postings.\n");
    system("espeak \"Follow companies on social media for job postings\"");
    printf("- Network with peers who may inform you about job openings.\n");
    system("espeak \"Network with peers who may inform you about job openings\"");
    printf("\n");
}

// Function to encapsulate the job search assistance system
void jobSearchAssistance()
{
    int choice;
    bool exitProgram = false;

    printf("Welcome to Job Search Assistance System\n");
    system("espeak \"Welcome to Job Search Assistance System\"");
    while (!exitProgram)
    {
        printf("Choose an option:\n");
        system("espeak \"Choose an option\"");
        printf("1. Resume Writing Tips\n");
        system("espeak \"Resume Writing Tips\"");
        printf("2. Interview Preparation Tips\n");
        system("espeak \"Interview Preparation Tips\"");
        printf("3. Search for Job Openings\n");
        system("espeak \"Search for Job Openings\"");
        printf("4. Notify Job Opportunities\n");
        system("espeak \"Notify Job Opportunities\"");
        printf("5. Exit\n");
        system("espeak \"Exiting..\"");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            resumeTips();
            break;
        case 2:
            interviewTips();
            break;
        case 3:
            searchJobOpenings();
            break;
        case 4:
            notifyJobOpportunities();
            break;
        case 5:
            printf("Thank you for using Job Search Assistance System. Goodbye!\n");
            system("espeak \"Thank you for using Job Search Assistance System. Goodbye!\"");
            exitProgram = true;
            break;
        }
    }
}

void playPeace1()
{
    printf("How is your feeling today?\n");
    system("espeak \"How is your feeling today?\"");
    char mood[2000];
    scanf("%s", mood);
    if (strcmp(mood, "happy") == 0)
    {
        printf("Opening sura e Rehmaan\n");
        system("espeak \"Opening sura e Rehmaan\"");
        system("start \"\" \"rehman.mp3\"");
    }
    else if (strcmp(mood, "sad") == 0)
    {
        printf("Opening sura e Duha\n");
        system("espeak \"Opening sura e Duha\"");
        system("start \"\" \"duha.mp3\"");
    }

    else if (strcmp(mood, "fear") == 0)
    {
        printf("Opening sura e falaq\n");
        system("espeak \"Opening sura e falaq\"");
        system("start \"\" \"falaq.mp3\"");
    }

    else if (strcmp(mood, "anger") == 0)
    {
        printf("Opening sura e isra\n");
        system("espeak \"Opening sura e isra\"");
        system("start \"\" \"isra.mp3\"");
    }

    else if (strcmp(mood, "surprise") == 0)
    {
        printf("Opening sura e takwir\n");
        system("espeak \"Opening sura e takwir\"");
        system("start \"\" \"takwir.mp3\"");
    }

    else if (strcmp(mood, "disgust") == 0)
    {
        printf("Opening sura e masad\n");
        system("espeak \"Opening sura e masad\"");
        system("start \"\" \"masad.mp3\"");
    }

    else if (strcmp(mood, "guidance") == 0)
    {
        printf("Opening sura e fatiha\n");
        system("espeak \"Opening sura e fatiha\"");
        system("start \"\" \"fatiha.mp3\"");
    }

    else if (strcmp(mood, "gratitude") == 0)
    {
        printf("Opening sura e Insan\n");
        system("espeak \"Opening sura e insan\"");
        system("start \"\" \"insan1.mp3\"");
    }

    else if (strcmp(mood, "unity") == 0)
    {
        printf("Opening sura e Hujraat\n");
        system("espeak \"Opening sura e hujrat\"");
        system("start \"\" \"hujrat.mp3\"");
    }

    else if (strcmp(mood, "faith") == 0)
    {
        printf("Opening sura e Talaq\n");
        system("espeak \"Opening sura e talaaq\"");
        system("start \"\" \"talaq.mp3\"");
    }

    else if (strcmp(mood, "protection") == 0)
    {
        printf("Opening sura e Nas\n");
        system("espeak \"Opening sura e nas\"");
        system("start \"\" \"nas.mp3\"");
    }

    else if (strcmp(mood, "protection in travelling") == 0)
    {
        printf("Opening sura e Mulk\n");
        system("espeak \"Opening sura e mulk\"");
        system("start \"\" \"mulk.mp3\"");
    }

    else if (strcmp(mood, "forgiveness") == 0)
    {
        printf("Opening sura e Ikhlaas\n");
        system("espeak \"Opening sura e Ikhlaas\"");
        system("start \"\" \"ikhlas.mp3\"");
    }

    else if (strcmp(mood, "spiritual consolation") == 0)
    {
        printf("Opening sura e Kafiroon\n");
        system("espeak \"Opening sura e kafiroon\"");
        system("start \"\" \"kafiroon.mp3\"");
    }

    else if (strcmp(mood, "discipline") == 0)
    {
        printf("Opening sura e Fajar\n");
        system("espeak \"Opening sura e fajar\"");
        system("start \"\" \"fajar.mp3\"");
    }

    else if (strcmp(mood, "enlightenment") == 0)
    {
        printf("Opening sura e Jin\n");
        system("espeak \"Opening sura e Jin\"");
        system("start \"\" \"jin.mp3\"");
    }
    else if (strcmp(mood, "seekingWish") == 0)
    {
        printf("Opening Ziyarat e Ashura\n");
        system("espeak \"Opening Ziyarat e Ashura\"");
        system("start \"\" \"ashora.mp3\"");
    }
    else if (strcmp(mood, "repentance") == 0)
    {
        printf("Opening Ziyarat e Warisa\n");
        system("espeak \"Opening Ziyarat e Warisa\"");
        system("start \"\" \"wairsa.mp3\"");
    }
    else if (strcmp(mood, "patience") == 0)
    {
        printf("Opening Dua e Imam E Zamana \n");
        system("espeak \"opening Dua e Imam E Zamana\"");
        system("start \"\" \"zamana.mp3\"");
    }
    else if (strcmp(mood, "forGoodRelation") == 0)
    {
        printf("Opening Suraah e Kausar \n");
        system("espeak \"opening Suraah e Kausar\"");
        system("start \"\" \"kosar.mp3\"");
    }
}

int main()
{
    printf("\t<###################################  PERSONAL ASSISTANT  ###################################>\n\n");
    srand(time(NULL));
    char password[50];
    char command[1000];
    int press;
    int month, day;
    char readmode[1000];
    Event events[MAX_EVENTS];
    srand(time(NULL));
    int eventCount = 0;
    char intro[] = "I'm Phoenix, meticulously crafted by Minhal Rizvi \nP for programming\nH for Holography\nO for Oracle\nE for Encryption\nN for Nano technology\nI for Intelligence\nX for Xenon ";
    // Task task;
    char mood[100000];
    do
    {
        printf("******************************************************\n");
        printf("            | ENTER THE PASSWORD Please|\n");
        printf("******************************************************\n\n");
        system("espeak \"ENTER THE PASSWORD \"");

        printf(" PASSWORD--> : ");
        fgets(password, sizeof(password), stdin);
        password[strcspn(password, "\n")] = '\0';

        if (strcmp(password, "Minhal") == 0)
        {
            greetings();
            printf("\n");
            printf("\nQuote of the day\n");
            system("espeak \"Quote of the day?\"");
            getRandomFactOrQuote();
            printf("\nJoke of the day\n");
            system("espeak \"Joke of the day\"");
            displayRandomJoke();
            do
            {
                printf("\nphoenix here ===> ");
                fgets(command, sizeof(command), stdin);
                command[strcspn(command, "\n")] = '\0';

                if (strcmp(command, "hello") == 0 || strcmp(command, "hi") == 0)
                {
                    printf("Hello Minhal.. How are you\n");
                    system("espeak \"Hello Minhaal... How are you?\"");
                }
                else if (strcmp(command, "what is the time") == 0)
                {
                    datetime();
                }
                else if (strcmp(command, "open youtube") == 0)
                {
                    openYouTube();
                }
                else if (strcmp(command, "close youtube") == 0)
                {
                    closeYouTube();
                }
                else if (strcmp(command, "open google") == 0)
                {
                    openGoogle();
                }
                else if (strcmp(command, "close google") == 0)
                {
                    closeGoogle();
                }
                else if (strcmp(command, "open linkedin") == 0)
                {
                    openLinkedin();
                }
                else if (strcmp(command, "open chatgpt") == 0)
                {
                    openChatGPT();
                }
                else if (strcmp(command, "open maps") == 0)
                {
                    openMaps();
                }
                else if (strcmp(command, "close all") == 0)
                {
                    printf("Closing all Tabs...\n");
                    system("espeak \"closing all tabs...\"");
                    system("taskkill /IM chrome.exe /F");
                }
                else if (strcmp(command, "task") == 0)
                {
                    printf("opening TODO TASK\n");
                    system("espeak \"opening todo task\"");
                    task();
                }
                else if (strcmp(command, "open ned website") == 0)
                {
                    NEDweb();
                }
                else if (strcmp(command, "open ned ai timetable") == 0)
                {
                    NEDAi();
                }
                else if (strcmp(command, "open ned ds timetable") == 0)
                {
                    NEDDs();
                }
                else if (strcmp(command, "open ned cr timetable") == 0)
                {
                    NEDCr();
                }
                else if (strcmp(command, "open ned ga timetable") == 0)
                {
                    NEDGa();
                }
                else if (strcmp(command, "open ned cs timetable ") == 0)
                {
                    NEDCs();
                }
                else if (strcmp(command, "open ned admission") == 0)
                {
                    nedadmission();
                }
                 else if(strcmp(command, "open my blog on PHOENIX")==0)
                 {
                  
                    openMyblog();
                 }
                else if (strcmp(command, "close all") == 0)
                {
                    printf("Closing all Tabs...\n");
                    system("espeak \"closing all tabs...\"");
                    system("taskkill /IM chrome.exe /F");
                }

                else if (strcmp(command, "open text reader mode") == 0)
                {
                    openTextReaderMode();
                }

                else if (strcmp(command, "who are you") == 0 || strcmp(command, "phoneix tell me about yourself") == 0)
                {
                    printWithDelay(intro);
                    printf("\nPress 1 for text to speech\n");
                    system("espeak \"Press one for text to speech\"");
                    scanf("%d", &press);
                    switch (press)
                    {
                    case 1:
                        system("espeak \"I'm Phoenix  meticulously crafted by Minhaal Rizvi.\"");
                        system("espeak \"PHOENIX stand for\"");
                        system("espeak \"P for programming\"");
                        system("espeak \"H for Holography\"");
                        system("espeak \"O for Oracle\"");
                        system("espeak \"E for Encryption\"");
                        system("espeak \"N for Nano technology\"");
                        system("espeak \"I for Intelligence\"");
                        system("espeak \"X for Xenon\"");
                        break;
                    }
                    continue;
                }
                else if (strcmp(command, "mark events") == 0)
                {
                    calendarIntegration(events, &eventCount);
                }
                else if (strcmp(command, "tell me a joke") == 0 || strcmp(command, "phoenix light up my mood") == 0)
                {
                    displayRandomJoke();
                }
                else if (strcmp(command, "horoscope") == 0)
                {
                    printf("Please enter your birth month (1-12): ");
                    system("espeak \"Please enter your birth month (1-12)\"");
                    scanf("%d", &month);
                    printf("Please enter your birth day (1-31): ");
                    system("espeak \"Please enter your birth day (1-31)\"");
                    scanf("%d", &day);
                    getDailyHoroscope(month, day);
                }
                else if (strcmp(command, "assist me for jobs") == 0)
                {
                    jobSearchAssistance();
                }

                else if (strcmp(command, "play peace") == 0 || strcmp(command, "phoenix play peace") == 0)
                {
                    playPeace1();
                }
                

                
                if (strcmp(command, "bye") == 0 || strcmp(command, "goodbye") == 0)
                {
                    printf("Nice To meet you...Goodbye\n");
                    system("espeak \"Nice To meet you...Goodbye\"");
                    break;
                }


            } while (1);
        }
        break;
    } while (1);

    return 0;
}