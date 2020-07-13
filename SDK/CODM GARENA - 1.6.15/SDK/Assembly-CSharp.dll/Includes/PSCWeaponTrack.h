#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PSCWeaponTrack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PSCWeaponTrack"));
	}

	template <typename T = float> static T& DelayDestroyTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BasicDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LineRenders() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& WidthFactor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& FadeOut() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& FixWidth() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = uintptr_t> T& StartColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& EndColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowWeaponTrack(Il2CppVector3 startPos, Il2CppVector3 endPos, Il2CppVector3 camPos, float basicThickness) {
		return ((T (*)(PSCWeaponTrack*, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4CE0DD4))(this, startPos, endPos, camPos, basicThickness);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PSCWeaponTrack*))(Il2CppBase() + 0x4CE1344))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PSCWeaponTrack*))(Il2CppBase() + 0x4CE1460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PSCWeaponTrack*))(Il2CppBase() + 0x4CE1644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(PSCWeaponTrack*))(Il2CppBase() + 0x4CE164C))(this);
	}

};

}
