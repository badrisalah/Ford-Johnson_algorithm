// try implimenting it your own way ;)
// enjoy :)

void fordJohnson(std::vector<int>& v)
{
    if (v.size() <= 1)
        return;

    std::vector<std::pair<int, int> > pairs;
    int odd = -1;

    for (size_t i = 0; i + 1 < v.size(); i += 2)
    {
        // if bigger swap them
        pairs.push_back(std::make_pair(a, b));
    }
    std::vector<int> larger;
    for (size_t i = 0; i < pairs.size(); i++)
        larger.push_back(pairs[i].second);
    fordJohnson(larger);
    
    // First part is sorted ...
    
    std::vector<std::pair<int, int> > sortedPairs;
    for (size_t i = 0; i < larger.size(); i++)
    {
        //Find each number its pair
    }
    pairs = sortedPairs;

    // generate jajacobsthal
    std::vector<size_t> jacobsthal;
    jacobsthal.push_back(1);
    jacobsthal.push_back(3);
    while (jacobsthal.back() < pairs.size())
    {
        size_t n = jacobsthal.size();
        jacobsthal.push_back(jacobsthal[n - 1] + 2 * jacobsthal[n - 2]);
    }
    
    for (size_t i = 1; i < jacobsthal.size(); i++)
    {
          //scal the jacobsthal sequence to the array's size ...
    }

    for (size_t i = 0; i < order.size(); i++)
    {
        // main insertion using jackobstal's sequence with binary search 
        std::vector<int>::iterator pos =
            std::lower_bound(larger.begin(),partner,small);
        // range is always between [0,partner] to minimize the range as possible ...
    
}
