typedef struct date {     //原有的struct
    int month;
    int day;
    int year;
} Date;                  // struct的别名

Date d = {9, 1, 2005};

// 给struct一个别名date，就能像int一样使用struct