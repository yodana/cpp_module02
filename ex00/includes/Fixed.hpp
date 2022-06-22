#ifndefine FIXED_H
# define FIXED_H

class Fixed{
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const &src);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
       int _valeur;
       static int const _bits = 8;
};

#endif