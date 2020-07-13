#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Room {

class SpvpMultiSelectTipWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Room", "SpvpMultiSelectTipWindowView"));
	}

	template <typename T = uintptr_t> T& BtnOK() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
