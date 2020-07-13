#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class BrandSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "BrandSignboard"));
	}

	template <typename T = uintptr_t> T& BrandBroadGO() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& SnipeRadius() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ContentLabel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_OriginalBoardGO() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_IsSniperInZomming() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowBrandGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOriginalGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBrandGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BrandSignboard*))(Il2CppBase() + 0x3955878))(this);
	}
	template <typename T = void> T SetContent(int32_t num, int32_t totalNum) {
		return ((T (*)(BrandSignboard*, int32_t, int32_t))(Il2CppBase() + 0x395591C))(this, num, totalNum);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BrandSignboard*))(Il2CppBase() + 0x3955AF4))(this);
	}
	template <typename T = bool> T NeedShowBrandGO() {
		return ((T (*)(BrandSignboard*))(Il2CppBase() + 0x3955D1C))(this);
	}
	template <typename T = void> T ShowOriginalGO() {
		return ((T (*)(BrandSignboard*))(Il2CppBase() + 0x395642C))(this);
	}
	template <typename T = void> T ShowBrandGO() {
		return ((T (*)(BrandSignboard*))(Il2CppBase() + 0x3956284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BrandSignboard*))(Il2CppBase() + 0x39565D8))(this);
	}

};

}
