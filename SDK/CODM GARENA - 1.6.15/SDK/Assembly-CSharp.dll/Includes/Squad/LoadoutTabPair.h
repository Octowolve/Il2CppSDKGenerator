#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class LoadoutTabPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "LoadoutTabPair"));
	}

	template <typename T = uintptr_t> T& mTabType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& mTabNameLocId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(LoadoutTabPair*))(Il2CppBase() + 0x391E984))(this);
	}

};

}
