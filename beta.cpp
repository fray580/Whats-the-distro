#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include <map>


int main(){
    //для кодер с cli и прочее (gentoo arch  bomjara alpin)
    int c = 0;
    //для любителей кастома прям дикого кастома) (evandor arch debian gentoo)
    int k = 0;
    //Обычный пользователь которому достаточно нормальной системы (ubuntu mint fedora cash OS)
    int n = 0;
    //мазахисты (bomjara gentoo windows wbuntu redStar OS )
    int m = 0;
    //боятся кернел паника (и скорее всего терминала) (debian alpin )
    int s = 0;
    
    
    
    int a;
    std::cout << "выберите язык/Select Language" << std::endl;
    sleep(1);
    std::cout << "1)русский 2)English" << std::endl;
    std::cout<< "Введите цифру/Enter a digit: ";
    std::cin >> a;
    if(a == 2){
        int b;
        std::cout << "Welcome to my program! With it, you'll be able to figure out which Linux distribution is best for you!" << std::endl;
        sleep(1);
        std::cout << "Question 1: How much do you like to customize everything?" << std::endl;
        sleep(0.9);
        std::cout << "1)REALLY GIVE ME MORE CUSTOMIZATION  2)Well, average I like it when a beautiful and convenient system 3)Well, I don't give a I'm love cli  " << std::endl;
        sleep(0.9);
        std::cout << "write here: ";
        std::cin >> b;
        if(b == 1){k++; m++;}
        if(b == 2){n++;s++;}
        if(b == 3){c++;}
        b = 0;
        std::cout << "Good" << std::endl;
        sleep (0.9);
        std::cout << "Question 2: How important is the system's ability for you?" << std::endl;
        sleep(0.9);
        std::cout << "1)I don't give a about stability, and in general I like to fix bugs and the like  2)I love stability, but if the system is a little unstable, then it's not a problem for me  3)I love absolute stability " << std::endl;
        sleep(0.9);
        std::cout << "write here: ";
        std::cin >> b;
        if(b == 1){c++; m++;}
        if(b == 2){n++;}
        if(b == 3){s++;}
        b = 0;
        std::cout << "Good" << std::endl;
        sleep(0.9);
        std::cout << "Question 3: How comfortable is the thereminal for you?" << std::endl;
        sleep(0.9);
        std::cout << "1)I am very comfortable in the terminal  2)I don't like the terminal, it's complicated!  3)that's all I use the GUI for weaklings" << std::endl;
        sleep(0.9);
        std::cout << "write here: ";
        std::cin >> b;
        if(b == 1){n++;}
        if(b == 2){s++;} 
        if(b == 3){c++; m++;}
        b = 0;
        std::cout << "Good" << std::endl;
        sleep(0.9);
        std::cout << "Question 4: How close are you to programming?" << std::endl;
        sleep(0.9);
        std::cout << "1)Well, it's average  2)no way lol  3)I mainly write configs for customizing the system 4)bruh I JUST LOVE TO CODE" << std::endl;
        sleep(0.9);
        std::cout << "write here: ";
        std::cin >> b;
        if(b == 1){n++;}
        if(b == 2){s++;}
        if(b == 3){k++;}
        if(b == 4){c++; m++;}
        b = 0;
        std::cout << "Good" << std::endl;
        sleep(0.9);
        std::cout << "Question 5: Which do you like more CLI or GUI" << std::endl;
        sleep(0.9);
        std::cout << "1)I like the GUI more  2)Well, I can sit on pure Arch Linux, or I can install Hyprland  3)CLI only! MINIMUM GUI MAXIMUM CLI" << std::endl;
        sleep(0.9);
        std::cout << "write here: ";
        std::cin >> b;
        if(b == 1){s++;}
        if(b == 2){n++;}
        if(b == 3){c++; m++;}
        std::cout << std::endl;
        sleep(0.9);
        //std::cout << "кодер или cli = " << c << " любитель кастома = " << k << " обычный пользователь = " << n << " мазахисты = " << m << " боятся терминала (или кернел паника) = " << s;
        if (c >= k && c >= n && c >= m && c >= s) {
             std::cout << "Suitable for you:Arch Linux" << std::endl;
          }
          else if (k >= c && k >= n && k >= m && k >= s) {
             std::cout << "Suitable for you:EndeavourOS" << std::endl;
          }
         else if (n >= c && n >= k && n >= m && n >= s) {
              std::cout << "Suitable for you:Ubuntu" << std::endl;
          }
         else if (m >= c && m >= k && m >= n && m >= s) {
             std::cout << "Suitable for you:Gentoo" << std::endl;
         }
         else if (s >= c && s >= k && s >= n && s >= m) {
             std::cout << "Suitable for you:Debian Stable" << std::endl;
          }
          else {
              std::cout << "Suitable for you:Ubuntu or Fedora" << std::endl;
            }
    }   
    if (a == 1){
        int b;
        std::cout << "Добро пожаловать в мою программу! С ним вы сможете понять, какой дистрибутив Linux подходит именно вам!" << std::endl;
        sleep(1);
        std::cout << "Вопрос 1: Насколько вам нравится кастомизировать всё?" << std::endl;
        sleep(0.8);
        std::cout << "1)ДАЙТЕ МНЕ БОЛЬШЕ КАСТОМИЗАЦИИ  2)Ну, средне мне нравится, когда система красивая и удобная 3)мне не нужна кастомизация я люблю cli " << std::endl;
        sleep(1);
        std::cout << "Пишите здесь: ";
        std::cin >> b;
        if(b == 1){k++; m++;}
        if(b == 2){n++;s++;}
        if(b == 3){c++;}
        b = 0;
        std::cout << "Хорошо" << std::endl;
        sleep (1);
        std::cout << "Вопрос 2: Насколько для вас важна стабильность системы?" << std::endl;
        sleep(1);
        std::cout << "1)Мне всё равно на стабильность, и вообще я люблю исправлять баги и тому подобное  2)Я люблю стабильность, но если система немного нестабильна, то для меня это не проблема  3)Я люблю абсолютную стабильность " << std::endl;
        sleep(1);
        std::cout << "Пишите здесь: ";
        std::cin >> b;
        if(b == 1){c++; m++;}
        if(b == 2){n++;}
        if(b == 3){s++;}
        b = 0;
        std::cout << "Хорошо" << std::endl;
        sleep(1);
        std::cout << "Вопрос 3: Насколько терменал удобен для вас?" << std::endl;
        sleep(1);
        std::cout << "1)Мне очень комфортно в терминале  2)Мне не нравится терминал, он сложный!  3)все кто использую GUI слабые" << std::endl;
        sleep(1);
        std::cout << "Пишите здесь: ";
        std::cin >> b;
        if(b == 1){n++;}
        if(b == 2){s++;} 
        if(b == 3){c++; m++;}
        b = 0;
        std::cout << "Хорошо" << std::endl;
        sleep(1);
        std::cout << "Вопрос 4: Насколько вы близки к программированию?" << std::endl;
        sleep(1);
        std::cout << "1)Ну я немного умею  2)ниак лол 3)я делаю конфиги для кастомизации системы 4)брух Я ОЧЕНЬ ЛЮБЛЮ КОДИТЬ!" << std::endl;
        sleep(1);
        std::cout << "Пишите здесь: ";
        std::cin >> b;
        if(b == 1){n++;}
        if(b == 2){s++;}
        if(b == 3){k++;}
        if(b == 4){c++; m++;}
        b = 0;
        std::cout << "Хорошо" << std::endl;
        sleep(1);
        std::cout << "Вопрос 5: Что вам больше нравится — CLI или GUI" << std::endl;
        sleep(1);
        std::cout << "1)Мне больше нравится графический интерфейс 2)Ну, я могу сидеть на чистом Arch Linux или установить Hyprland  3)Только CLI! чем меньше GUI тем лучше!" << std::endl;
        sleep(1);
        std::cout << "Пишите здесь: ";
        std::cin >> b;
        if(b == 1){s++;}
        if(b == 2){n++;}
        if(b == 3){c++; m++;}
        std::cout << std::endl;
        sleep(1);
        //std::cout << "кодер или cli = " << c << " любитель кастома = " << k << " обычный пользователь = " << n << " мазахисты = " << m << " боятся терминала (или кернел паника) = " << s;
        if (c >= k && c >= n && c >= m && c >= s) {
             std::cout << "Тебе подходит:Arch Linux" << std::endl;
          }
          else if (k >= c && k >= n && k >= m && k >= s) {
             std::cout << "Тебе подходит:EndeavourOS" << std::endl;
          }
         else if (n >= c && n >= k && n >= m && n >= s) {
              std::cout << "Тебе подходит:Ubuntu" << std::endl;
          }
         else if (m >= c && m >= k && m >= n && m >= s) {
             std::cout << "Тебе подходит:Gentoo" << std::endl;
         }
         else if (s >= c && s >= k && s >= n && s >= m) {
             std::cout << "Тебе подходит:Debian Stable" << std::endl;
          }
          else {
              std::cout << "Ubuntu или Fedora" << std::endl;
            }

    }    
        
}
