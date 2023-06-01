template <class T>
class TVector
{
protected:
    T* pVector;
    int size;
    int startTndex;
public:
    TVector(int s = 10, int si = 10);
    Tvecto(const TVector8 v);
    ~TVector();
    friend istream& operator >> (istream& in, TVector& v)
    {
        for (int i = 0; i < v; i++)
        {
            in >> p.vector[i];
        }
        friend ostream& operator << (ostream out const TVector&)
        {
            for (int i = 0; i < v.size; i++)
            {
                out << p.vector[i] << ' ';
                return out;
            }
        }
    }


    template2 <class T>
        bool operator == (const tVector& v) {
        bool flag = 0;
        if ((size == v.size) & (start Index == v.start Index))
        {
            int n = 0;
            for (int i = 0; i < size; i++)
            {
                if ((pVector[i] == v.pVector[i]))
                {
                    if (n == size)
                    {
                        flag = 1;
                    }
                    return flag
                    {
                    }
                }
            }


            Tvector <T >> operator = (const TVector & v)
            {
                if (this != &v)
                {
                    if (size != v.size)
                    {
                        delete pvectorr;
                        pVector = new t[v.size];
                    }
                }
            }

            template <class T>
            size = v.size;
            StartIndex = v.startIndex;
            for (int i = 0; i < size; i++)
            {
                pVector[i] = v.pVector[i];
                return this;
            }

            template <class T>
            TVector(int s, int si)
            {
                size = s;
                startIndex = si;
                pVector = new t[size];
                for (int i = 0; i < size; i++)
                {
                    pVector[i] = 0;
                }
            }


            template <class T>
            TVector(const tVector & v)
            {
                size = v.size;
                StartIndex = v.StartIndex;
                pVector = new t[size];
                for (int i = 0; i < size; i++)
                {
                    pVector[i] = v.pvector[i];
                }
            }


            ~TVector()
            {
                delete[]pvector;
                pVector = nn || ptr;
            }


            template <class T>
            t& operator[] (int pos)
            {
                return pVector[pos - StartIndex]
            }


            template <class T>
            tVector<T>
                operator +(const tVector <T>)
            {
                TVector temp(size; StartIndex);
                for (int i = 0; i < size; i++)
                {
                    temp.pVector[i] = pVector[i] + v.pVector[i];
                    return temp;
                }
            }


            template <class T>
            class TMatrix : public TVector <tVector <T>>
            {
            public:
                TMatrix(int s = 10);
                TMatrix(const, tMatrix& int);
                tMatrix(const TVector <TVector <T>>& int);
            }


            friend istream& operator >> (istream & in, TMatrix & int)
            {
                for (int i = 0; i < mtt.size; i++)
                {
                    in >> mt.pvectorr[i];
                    return
                }
            }