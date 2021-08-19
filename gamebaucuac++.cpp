#include <bits/stdc++.h>
#include <ctime>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    system("Color 0A");
    int n;
    int x, y, z;
    int a[10];
    int score = 10000;
    int score2 = 0;
    int t = 20;
    // srand(time(NULL));
    // int res = rand() % (50 - 3 + 1) + 3;
    string s;
    std::cout << "Vui long nhap ten cua ban ;): ";
    getline(cin, s);
    std::cout << "\n";
    std::cout << "Chao mung " << s << " den voi Casino HaoVoxx deeptry(slogan lieu an nhieu khong lieu di ve!) va tro choi Bau Cua, ban dang co 10000 VND hay co len nhe"
              << "\n";
    while (t--)
    {
        std::cout << "%ok";
        Sleep(50);
    }
    t = 10;
    std::cout << "\n";
    Sleep(1000);
    system("cls");
    srand(time(NULL));
    int c = rand() % (100 - 1 + 1) + 1;
    Sleep(50);
    std::cout << "Hien tai " << s << " dang o ban so #" << c << " chuc " << s << " may man nha!!\n";
    Sleep(50);
    while (t--)
    {
        std::cout << "%ok";
        Sleep(50);
    }
    t = 10;
    std::cout << "\n";
    Sleep(1000);
    system("cls");
    while (score != 0)
    {
        do
        {
            std::cout << "Moi ban " << s << " chon so o ban muon dat cuoc 1-10 :";
            cin >> n;
            std::cout << "\n";
        } while (n > 10);
        for (int i = 0; i < n; i++)
        {
            if (score > 0)
            {
                srand(time(NULL));
                x = rand() % (6 - 1 + 1) + 1;
                y = rand() % (6 - 1 + 1) + 1;
                z = rand() % (6 - 1 + 1) + 1;
                std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                std::cout << "Vui long chon o ban muon cuoc(1-6) va muc cuoc =)): "
                          << "\n";
                std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
                          << "\n";
                std::cout << "|| 1.Nai || 2.Bau || 3.Ga  ||"
                          << "\n";
                std::cout << "|| 4.Ca  || 5.Cua || 6.Tom ||"
                          << "\n";
                std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
                          << "\n";
                do
                {
                    cin >> a[i];
                    cin >> score2;
                } while (a[i] > 6 && score2 > score);
                std::cout << "\n";
                while (t--)
                {
                    std::cout << "%ok";
                    Sleep(50);
                }
                t = 10;
                std::cout << "\n";
                int d = x, f = y, g = z;
                if (x == a[i] || y == a[i] || z == a[i])
                {
                    if (x == y && y == z)
                    {
                        score2 *= 3;
                        std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                        while (t--)
                        {
                            std::cout << "%ok";
                            Sleep(50);
                        }
                        t = 10;
                        std::cout << "\n";
                        std::cout << "chuc mung ban da trung " << score2 << " VND"
                                  << "\n";
                        score += score2;
                        std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                    }
                    else if (x == y || y == z || z == x)
                    {
                        score2 *= 2;
                        std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                        while (t--)
                        {
                            std::cout << "%ok";
                            Sleep(50);
                        }
                        t = 10;
                        std::cout << "\n";
                        std::cout << "chuc mung ban da trung " << score2 << " VND"
                                  << "\n";
                        score += score2;
                        std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                    }
                    else
                    {
                        std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                        while (t--)
                        {
                            std::cout << "%ok";
                            Sleep(50);
                        }
                        t = 10;
                        std::cout << "\n";
                        std::cout << "chuc mung ban da trung " << score2 << " VND"
                                  << "\n";
                        score += score2;
                        std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                    }
                }
                else
                {
                    std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                    while (t--)
                    {
                        std::cout << "%ok";
                        Sleep(50);
                    }
                    t = 10;
                    std::cout << "\n";
                    std::cout << "Oi troi ban khong may man roi, chuc may man nhe"
                              << "\n";
                    score -= score2;
                    std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                }
                Sleep(2000);
                system("cls");
            }
            else
            {
                std::cout << "Thanks for playing, nhan enter de thoat, mong ban danh gia chung toi 5 sao ;)\n";
                std::system("pause");
                return 0;
            }
        }
    }

    std::cout << "Thanks for playing, nhan enter de thoat, mong ban danh gia chung toi 5 sao ;)\n";
    std::system("pause");
}
