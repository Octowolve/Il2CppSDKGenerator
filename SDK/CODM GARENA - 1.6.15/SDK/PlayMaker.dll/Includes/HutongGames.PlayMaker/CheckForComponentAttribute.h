#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class CheckForComponentAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "CheckForComponentAttribute"));
	}

	template <typename T = uintptr_t> T& type0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& type2() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Type0() {
		return ((T (*)(CheckForComponentAttribute*))(Il2CppBase() + 0x2EEBC54))(this);
	}
	template <typename T = uintptr_t> T get_Type1() {
		return ((T (*)(CheckForComponentAttribute*))(Il2CppBase() + 0x2EEBC5C))(this);
	}
	template <typename T = uintptr_t> T get_Type2() {
		return ((T (*)(CheckForComponentAttribute*))(Il2CppBase() + 0x2EEBC64))(this);
	}

};

}
