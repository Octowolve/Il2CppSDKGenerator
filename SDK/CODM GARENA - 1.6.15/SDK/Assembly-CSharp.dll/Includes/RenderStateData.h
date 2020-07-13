#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderStateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderStateData"));
	}

	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& NearWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FarWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& FarDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& RimIntensity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& RimRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Style() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& PassType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RenderStateData*, uintptr_t))(Il2CppBase() + 0x412A204))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(RenderStateData*, uintptr_t))(Il2CppBase() + 0x412A3D8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RenderStateData*))(Il2CppBase() + 0x412A4F8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(RenderStateData*, uintptr_t))(Il2CppBase() + 0x412A62C))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(RenderStateData*))(Il2CppBase() + 0x412A634))(this);
	}

};

}
