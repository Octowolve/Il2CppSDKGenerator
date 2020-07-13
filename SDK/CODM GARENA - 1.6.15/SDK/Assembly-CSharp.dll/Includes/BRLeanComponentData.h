#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRLeanComponentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRLeanComponentData"));
	}

	template <typename T = float> T& LeftAngleZOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RightAngleZOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& LeftPosOffsetX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& RightPosOffsetX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& LeftPosAimingOffsetX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RightPosAimingOffsetX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& LeftPosAimingOffsetY() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& RightPosAimingOffsetY() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& LeanSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(BRLeanComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x52F46F4))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(BRLeanComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x52F4C4C))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
