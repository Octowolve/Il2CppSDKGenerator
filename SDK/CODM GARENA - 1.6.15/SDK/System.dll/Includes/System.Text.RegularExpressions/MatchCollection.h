#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class MatchCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "MatchCollection"));
	}

	template <typename T = uintptr_t> T& current() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(MatchCollection*))(Il2CppBase() + 0x4ADA0CC))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(MatchCollection*))(Il2CppBase() + 0x4ADA28C))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(MatchCollection*, int32_t))(Il2CppBase() + 0x4ADA294))(this, i);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(MatchCollection*))(Il2CppBase() + 0x4ADA4B4))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(MatchCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4ADA4BC))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(MatchCollection*))(Il2CppBase() + 0x4ADA5C8))(this);
	}
	template <typename T = bool> T TryToGet(int32_t i) {
		return ((T (*)(MatchCollection*, int32_t))(Il2CppBase() + 0x4ADA3DC))(this, i);
	}
	template <typename T = uintptr_t> T get_FullList() {
		return ((T (*)(MatchCollection*))(Il2CppBase() + 0x4ADA1C8))(this);
	}

};

}
