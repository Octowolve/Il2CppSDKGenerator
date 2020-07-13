#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AirborneExtraNetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AirborneExtraNetData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertLauncherPartNetDatasArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T ConvertLauncherPartNetDatasArray(uintptr_t airborneExtParam, uintptr_t* count) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3B6EFC8))(0, airborneExtParam, count);
	}

};

}
