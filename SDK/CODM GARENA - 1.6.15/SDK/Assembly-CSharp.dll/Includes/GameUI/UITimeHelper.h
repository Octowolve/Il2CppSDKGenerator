#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITimeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITimeHelper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T GetTimeStr(int32_t date, int32_t time) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2A08E50))(0, date, time);
	}

};

}
