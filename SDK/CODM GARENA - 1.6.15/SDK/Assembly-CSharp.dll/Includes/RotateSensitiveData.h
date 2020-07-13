#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateSensitiveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateSensitiveData"));
	}

	template <typename T = float> T& mRotateSensitive() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& DefalutValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& mRotateSensitiveKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SensitiveConfig() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefalut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T set_RotateSensitive(float value) {
		return ((T (*)(RotateSensitiveData*, float))(Il2CppBase() + 0x414498C))(this, value);
	}
	template <typename T = float> T get_RotateSensitive() {
		return ((T (*)(RotateSensitiveData*))(Il2CppBase() + 0x4144A78))(this);
	}
	template <typename T = void> T SetConfig(uintptr_t config) {
		return ((T (*)(RotateSensitiveData*, uintptr_t))(Il2CppBase() + 0x4144A80))(this, config);
	}
	template <typename T = void> T SetDefalut() {
		return ((T (*)(RotateSensitiveData*))(Il2CppBase() + 0x4144C70))(this);
	}
	template <typename T = float> T GetDefaultRotateSensitive() {
		return ((T (*)(RotateSensitiveData*))(Il2CppBase() + 0x4144BB8))(this);
	}

};

}
