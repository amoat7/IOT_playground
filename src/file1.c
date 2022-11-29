extern int mainPrivateData;
void change_clock(int system_clock);

void file1_myfun1(void)
{
    mainPrivateData = 900;
    change_clock(100);
}