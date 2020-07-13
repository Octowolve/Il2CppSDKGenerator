#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class FuncBlockDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "FuncBlockDataStore"));
	}

	template <typename T = Il2CppDictionary<int32_t, bool>*> T& mBlockSettings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFuncBlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppDictionary<int32_t, bool>*> T get_BlockSettings() {
		return ((T (*)(FuncBlockDataStore*))(Il2CppBase() + 0x3689728))(this);
	}
	template <typename T = bool> T IsFuncBlocked(uintptr_t FuncType) {
		return ((T (*)(FuncBlockDataStore*, uintptr_t))(Il2CppBase() + 0x3689730))(this, FuncType);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(FuncBlockDataStore*))(Il2CppBase() + 0x3689834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(FuncBlockDataStore*))(Il2CppBase() + 0x3689908))(this);
	}

};

}
