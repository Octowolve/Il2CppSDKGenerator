#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightProbeOverrideArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightProbeOverrideArea"));
	}

	template <typename T = float> T& overrideIntensity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& iblSH() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_area() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_iblCubemap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& effectProbePosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_DisplayArea() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAreaSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIBLcubemap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecalculateIblSHfromcubemap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_IBLcubemap() {
		return ((T (*)(LightProbeOverrideArea*))(Il2CppBase() + 0x4938188))(this);
	}
	template <typename T = uintptr_t> T get_area() {
		return ((T (*)(LightProbeOverrideArea*))(Il2CppBase() + 0x4938190))(this);
	}
	template <typename T = void> T SetAreaSize(Il2CppVector3 position, Il2CppVector3 size) {
		return ((T (*)(LightProbeOverrideArea*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x49381A8))(this, position, size);
	}
	template <typename T = void> T SetIBLcubemap(uintptr_t iblCubemap) {
		return ((T (*)(LightProbeOverrideArea*, uintptr_t))(Il2CppBase() + 0x49383A0))(this, iblCubemap);
	}
	template <typename T = void> T RecalculateIblSHfromcubemap() {
		return ((T (*)(LightProbeOverrideArea*))(Il2CppBase() + 0x4938450))(this);
	}

};

}
