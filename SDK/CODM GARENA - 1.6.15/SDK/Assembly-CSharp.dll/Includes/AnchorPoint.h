#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnchorPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnchorPoint"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& relative() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& absolute() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& targetCam() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToNearest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetToNearest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHorizontal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVertical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Set(float relative, float absolute) {
		return ((T (*)(AnchorPoint*, float, float))(Il2CppBase() + 0x2F98448))(this, relative, absolute);
	}
	template <typename T = void> T Set_1(uintptr_t target, float relative, float absolute) {
		return ((T (*)(AnchorPoint*, uintptr_t, float, float))(Il2CppBase() + 0x2F98568))(this, target, relative, absolute);
	}
	template <typename T = void> T SetToNearest(float abs0, float abs1, float abs2) {
		return ((T (*)(AnchorPoint*, float, float, float))(Il2CppBase() + 0x2F98694))(this, abs0, abs1, abs2);
	}
	template <typename T = void> T SetToNearest_1(float rel0, float rel1, float rel2, float abs0, float abs1, float abs2) {
		return ((T (*)(AnchorPoint*, float, float, float, float, float, float))(Il2CppBase() + 0x2F98784))(this, rel0, rel1, rel2, abs0, abs1, abs2);
	}
	template <typename T = void> T SetHorizontal(uintptr_t parent, float localPos) {
		return ((T (*)(AnchorPoint*, uintptr_t, float))(Il2CppBase() + 0x2F6E988))(this, parent, localPos);
	}
	template <typename T = void> T SetVertical(uintptr_t parent, float localPos) {
		return ((T (*)(AnchorPoint*, uintptr_t, float))(Il2CppBase() + 0x2F6EC68))(this, parent, localPos);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSides(uintptr_t relativeTo) {
		return ((T (*)(AnchorPoint*, uintptr_t))(Il2CppBase() + 0x2F72584))(this, relativeTo);
	}

};

}
