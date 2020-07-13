#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderMultMaterialManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderMultMaterialManager"));
	}

	template <typename T = int32_t> T& SubMeshNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Round() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_EnableRenderer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsStaticBatchRender() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Manual() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_EnableRenderer() {
		return ((T (*)(RenderMultMaterialManager*))(Il2CppBase() + 0x412941C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RenderMultMaterialManager*))(Il2CppBase() + 0x41294DC))(this);
	}
	template <typename T = uintptr_t> T AddMaterial(uintptr_t mat) {
		return ((T (*)(RenderMultMaterialManager*, uintptr_t))(Il2CppBase() + 0x4129A74))(this, mat);
	}
	template <typename T = void> T RefreshRound() {
		return ((T (*)(RenderMultMaterialManager*))(Il2CppBase() + 0x412993C))(this);
	}
	template <typename T = bool> T RemoveMaterial(uintptr_t mat) {
		return ((T (*)(RenderMultMaterialManager*, uintptr_t))(Il2CppBase() + 0x4129E58))(this, mat);
	}

};

}
