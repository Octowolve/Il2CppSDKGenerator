#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIStandards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIStandards"));
	}

	template <typename T = uintptr_t> static T& BoxA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
