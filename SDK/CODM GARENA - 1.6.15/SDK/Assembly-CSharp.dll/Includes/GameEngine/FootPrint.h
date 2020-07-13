#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FootPrint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FootPrint"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ManualAnimEventSettings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PrintDecal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LeftFootSocket() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& RightFootSocket() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ReserveNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mLastTimeLeft() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mLastTimeRight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mDetectDist() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mLastPrint() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mActivePrints() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mDeactivePrints() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualAddAnimEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrintFromPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFootPrint_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFootPrint_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FootPrint*))(Il2CppBase() + 0x51BFF30))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(FootPrint*))(Il2CppBase() + 0x51C01A8))(this);
	}
	template <typename T = void> T ManualAddAnimEvent() {
		return ((T (*)(FootPrint*))(Il2CppBase() + 0x51C04DC))(this);
	}
	template <typename T = uintptr_t> T GetPrintFromPool() {
		return ((T (*)(FootPrint*))(Il2CppBase() + 0x51C0844))(this);
	}
	template <typename T = void> T OnFootPrint_Right() {
		return ((T (*)(FootPrint*))(Il2CppBase() + 0x51C0A44))(this);
	}
	template <typename T = void> T OnFootPrint_Left() {
		return ((T (*)(FootPrint*))(Il2CppBase() + 0x51C0E40))(this);
	}

};

}
