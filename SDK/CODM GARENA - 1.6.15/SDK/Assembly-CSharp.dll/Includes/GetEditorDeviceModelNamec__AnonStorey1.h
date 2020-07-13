#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEditorDeviceModelNamecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetEditorDeviceModelName>c__AnonStorey1"));
	}

	template <typename T = Il2CppString*> T& resolution() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetEditorDeviceModelNamecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4641FAC))(this, e);
	}

};

}
