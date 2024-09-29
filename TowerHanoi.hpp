#ifndef TOWERHANOIHPP
#define TOWERHANOIHPP

class TowerHanoi 
{
    private:
        int n_moves, n_disks;
        std::list<int> A, B, C; // Pegs are represented by lists
    
    public:

        // Constructor defined by the number of disks:
        TowerHanoi(int n) : n_moves(0), n_disks(n)
        {
            for (int i = 1; i <= n_disks; i++)
            {
                A.push_front(i);
            }
            printState();
        }

        // Solve the puzzle recursively
        void rec_solve(int n, std::list<int>& origin, std::list<int>& spare, std::list<int>& target)
        {
            if (n == 1) 
            {
                target.push_back(origin.back());
                origin.pop_back();
                n_moves++;
                printState();
            }
            else 
            {
                rec_solve(n - 1, origin, target, spare);          
                target.push_back(origin.back());
                origin.pop_back();
                n_moves++;
                printState();
                rec_solve(n - 1, spare, origin, target);
            }
        }

        // Print state after every move:
        void printState() const
        {
            std::cout << "Move number " << n_moves << ": ";

            std::cout << "A = {";
            for (const auto& el : A)
            {
                if (el == A.back()) 
                {
                    std::cout << el;
                    break;
                }
                std::cout << el << ", ";
            }
            std::cout << "}, ";

            std::cout << "B = {";
            for (const auto& el : B)
            {
                if (el == B.back()) 
                {
                    std::cout << el;
                    break;
                }
                std::cout << el << ", ";
            }
            std::cout << "}, ";

            std::cout << "C = {";
            for (const auto& el : C)
            {
                if (el == C.back()) 
                {
                    std::cout << el;
                    break;
                }
                std::cout << el << ", ";
            }
            std::cout << "}\n";
        }

        // Solve friend function calling rec_solve:
        friend void solve(TowerHanoi& th);
};

void solve(TowerHanoi& th)
{
    th.rec_solve(th.n_disks, th.A, th.B, th.C);
}

#endif