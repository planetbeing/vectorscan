#ifndef VS_ORDERED_H
#define VS_ORDERED_H

/**
 * \file
 * \brief Unordered set and map containers that default to using our own hasher.
 */

#include "tsl/robin_map.h"
#include "tsl/robin_set.h"
#include "robin_hood.h"

namespace vectorscan {

namespace unordered {

template<class Key, class Hash = robin_hood::hash<Key>, class KeyEqual = std::equal_to<Key>>
using set = tsl::robin_set<Key, Hash, KeyEqual>;

template<class Key, class T, class Hash = robin_hood::hash<Key>, class KeyEqual = std::equal_to<Key>>
using map = tsl::robin_map<Key, T, Hash, KeyEqual>;

template<class Key, class Hash = robin_hood::hash<Key>, class KeyEqual = std::equal_to<Key>>
using node_set = robin_hood::unordered_node_set<Key, Hash, KeyEqual>;

template<class Key, class T, class Hash = robin_hood::hash<Key>, class KeyEqual = std::equal_to<Key>>
using node_map = robin_hood::unordered_node_map<Key, T, Hash, KeyEqual>;

} // namespace unordered

} // namespace vectorscan


#endif // VS_ORDERED_H
