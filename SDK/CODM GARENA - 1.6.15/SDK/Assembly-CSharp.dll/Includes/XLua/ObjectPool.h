#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ObjectPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ObjectPool"));
	}

	template <typename T = int32_t> static T& LIST_END() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ALLOCED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& freelist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(ObjectPool*, int32_t))(Il2CppBase() + 0xF536B8))(this, i);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0xF53714))(this);
	}
	template <typename T = void> T extend_capacity() {
		return ((T (*)(ObjectPool*))(Il2CppBase() + 0xF537B8))(this);
	}
	template <typename T = int32_t> T Add(uintptr_t obj) {
		return ((T (*)(ObjectPool*, uintptr_t))(Il2CppBase() + 0xF538E4))(this, obj);
	}
	template <typename T = bool> T TryGetValue(int32_t index, uintptr_t* obj) {
		return ((T (*)(ObjectPool*, int32_t, uintptr_t*))(Il2CppBase() + 0xF53A08))(this, index, obj);
	}
	template <typename T = uintptr_t> T Get(int32_t index) {
		return ((T (*)(ObjectPool*, int32_t))(Il2CppBase() + 0xF53AB8))(this, index);
	}
	template <typename T = uintptr_t> T Remove(int32_t index) {
		return ((T (*)(ObjectPool*, int32_t))(Il2CppBase() + 0xF53B14))(this, index);
	}
	template <typename T = uintptr_t> T Replace(int32_t index, uintptr_t o) {
		return ((T (*)(ObjectPool*, int32_t, uintptr_t))(Il2CppBase() + 0xF53C04))(this, index, o);
	}
	template <typename T = int32_t> T Check(int32_t check_pos, int32_t max_check, void* checker, Il2CppDictionary<uintptr_t, int32_t>* reverse_map) {
		return ((T (*)(ObjectPool*, int32_t, int32_t, void*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0xF45530))(this, check_pos, max_check, checker, reverse_map);
	}

};

}
