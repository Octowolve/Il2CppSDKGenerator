#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class RBTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Generic", "RBTree"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hlp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& cached_path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Collections_Generic_RBTree_Node_GetEnumerator() {
		return ((T (*)(RBTree*))(Il2CppBase() + 0x4C97EEC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(RBTree*))(Il2CppBase() + 0x4C97FC4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T alloc_path() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C9807C))(0);
	}
	template <typename T = void> static T release_path(Il2CppList<uintptr_t>* path) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C98180))(0, path);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(RBTree*))(Il2CppBase() + 0x4C982D8))(this);
	}
	template <typename T = uintptr_t> T Intern(uintptr_t key, uintptr_t new_node) {
		return ((T (*)(RBTree*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21D4B00))(this, key, new_node);
	}
	template <typename T = uintptr_t> T Remove(uintptr_t key) {
		return ((T (*)(RBTree*, uintptr_t))(Il2CppBase() + 0x21D4F28))(this, key);
	}
	template <typename T = uintptr_t> T Lookup(uintptr_t key) {
		return ((T (*)(RBTree*, uintptr_t))(Il2CppBase() + 0x21D4E18))(this, key);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(RBTree*))(Il2CppBase() + 0x4C982F0))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(RBTree*))(Il2CppBase() + 0x4C97FA4))(this);
	}
	template <typename T = int32_t> T find_key(uintptr_t key, Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E63850))(this, key, path);
	}
	template <typename T = uintptr_t> T do_insert(int32_t in_tree_cmp, uintptr_t current, Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, int32_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C98340))(this, in_tree_cmp, current, path);
	}
	template <typename T = uintptr_t> T do_remove(Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C98798))(this, path);
	}
	template <typename T = void> T rebalance_insert(Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C98594))(this, path);
	}
	template <typename T = void> T rebalance_delete(Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C98DB0))(this, path);
	}
	template <typename T = void> T rebalance_insert__rotate_final(int32_t curpos, Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C98F94))(this, curpos, path);
	}
	template <typename T = void> T rebalance_delete__rotate_final(int32_t curpos, Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C994D8))(this, curpos, path);
	}
	template <typename T = int32_t> T ensure_sibling_black(int32_t curpos, Il2CppList<uintptr_t>* path) {
		return ((T (*)(RBTree*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C991EC))(this, curpos, path);
	}
	template <typename T = void> T node_reparent(uintptr_t orig_parent, uintptr_t orig, uint32_t orig_size, uintptr_t updated) {
		return ((T (*)(RBTree*, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4C98C58))(this, orig_parent, orig, orig_size, updated);
	}
	template <typename T = uintptr_t> static T right_most(uintptr_t current, uintptr_t sibling, Il2CppList<uintptr_t>* path) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C98B80))(0, current, sibling, path);
	}

};

}
