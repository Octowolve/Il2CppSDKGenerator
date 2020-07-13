#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightMapSetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightMapSetter"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& LightMapInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LightProbeInfoList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLightMapSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLightMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LightMapSetter*))(Il2CppBase() + 0x49375C8))(this);
	}
	template <typename T = void> T ApplyLightMapSetting() {
		return ((T (*)(LightMapSetter*))(Il2CppBase() + 0x493766C))(this);
	}
	template <typename T = uintptr_t> T GetLightMapInfo(int32_t index) {
		return ((T (*)(LightMapSetter*, int32_t))(Il2CppBase() + 0x49379CC))(this, index);
	}

};

}
