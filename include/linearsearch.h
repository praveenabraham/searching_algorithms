#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_

namespace searching {
  template <typename It, typename Val, typename Pred=std::equal_to<typename std::iterator_traits<It>::value_type>>
  bool LinearSearch(It begin, It end, Val value, Pred pred=Pred())
  {
    for (auto it=begin; it!=end; ++it){
      if (pred(*it, value))
        return true;
    }
    return false;
  }
}

#endif
