#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartColor"));
	}

	template <typename T = uintptr_t> T& m_Sphere() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& PointScoreMax() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& PointCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PointCountText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& timeAccum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& parentName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& colorInspector() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isGuader() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isTraitor() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> T& GuaderColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TraitorColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& GuaderScore() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& TraitorScore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& GuaderCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& TraitorCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateColorAndCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SphereCountAndColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartSphereColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartSphereCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdateColorAndCount(bool bGuader) {
		return ((T (*)(StartColor*, bool))(Il2CppBase() + 0x394F5DC))(this, bGuader);
	}
	template <typename T = void> T SphereCountAndColor(float PointScore, int32_t count, uintptr_t camp) {
		return ((T (*)(StartColor*, float, int32_t, uintptr_t))(Il2CppBase() + 0x394FB7C))(this, PointScore, count, camp);
	}
	template <typename T = void> T SetStartSphereColor(float PointScore, uintptr_t camp) {
		return ((T (*)(StartColor*, float, uintptr_t))(Il2CppBase() + 0x394FC6C))(this, PointScore, camp);
	}
	template <typename T = void> T SetStartSphereCount(int32_t pointCount, uintptr_t camp) {
		return ((T (*)(StartColor*, int32_t, uintptr_t))(Il2CppBase() + 0x394FEC4))(this, pointCount, camp);
	}

};

}
