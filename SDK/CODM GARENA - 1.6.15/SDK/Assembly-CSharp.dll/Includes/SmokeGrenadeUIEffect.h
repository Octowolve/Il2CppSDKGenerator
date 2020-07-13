#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SmokeGrenadeUIEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SmokeGrenadeUIEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& materialColors() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RenderInfo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& UIAdaptor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& lastAlpha() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SmokeGrenadeUIEffect*))(Il2CppBase() + 0x390CFFC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SmokeGrenadeUIEffect*))(Il2CppBase() + 0x390D22C))(this);
	}
	template <typename T = void> T SetColor(float a) {
		return ((T (*)(SmokeGrenadeUIEffect*, float))(Il2CppBase() + 0x390D394))(this, a);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SmokeGrenadeUIEffect*))(Il2CppBase() + 0x390D648))(this);
	}

};

}
