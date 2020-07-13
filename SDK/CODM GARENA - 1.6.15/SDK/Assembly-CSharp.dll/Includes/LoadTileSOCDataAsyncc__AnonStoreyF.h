#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadTileSOCDataAsynccAnonStoreyF
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadTileSOCDataAsync>c__AnonStoreyF"));
	}

	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& key() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t sobj) {
		return ((T (*)(LoadTileSOCDataAsynccAnonStoreyF*, uintptr_t))(Il2CppBase() + 0x2B781FC))(this, sobj);
	}

};

}
