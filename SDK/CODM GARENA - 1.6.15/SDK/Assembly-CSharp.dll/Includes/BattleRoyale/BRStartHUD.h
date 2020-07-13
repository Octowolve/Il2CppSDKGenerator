#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRStartHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRStartHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Lines() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TopFrame() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BottomFrame() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Line() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _canPausePrint() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& _PrintMessageCoroutine() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _HideMessageCoroutine() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& _HideStartTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isAnimating() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_test() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowStartMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideStartMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintMessageAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRStartHUD*))(Il2CppBase() + 0x260BE88))(this);
	}
	template <typename T = void> T test() {
		return ((T (*)(BRStartHUD*))(Il2CppBase() + 0x260BE90))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRStartHUD*))(Il2CppBase() + 0x260BF8C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRStartHUD*, float))(Il2CppBase() + 0x260C46C))(this, dt);
	}
	template <typename T = void> T ResetLayer() {
		return ((T (*)(BRStartHUD*))(Il2CppBase() + 0x260C5A8))(this);
	}
	template <typename T = void> T ShowStartMessage(float displayInterval, float disappearTime, float hideSpeed, Il2CppArray<uintptr_t>* messageLines) {
		return ((T (*)(BRStartHUD*, float, float, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x260C6CC))(this, displayInterval, disappearTime, hideSpeed, messageLines);
	}
	template <typename T = void> T HideStartMessage(float hideSpeed) {
		return ((T (*)(BRStartHUD*, float))(Il2CppBase() + 0x260CEEC))(this, hideSpeed);
	}
	template <typename T = uintptr_t> T HideMessage(float hideSpeed) {
		return ((T (*)(BRStartHUD*, float))(Il2CppBase() + 0x260D0A8))(this, hideSpeed);
	}
	template <typename T = uintptr_t> T PrintMessage(float displayInterval, float disappearTime, float hideSpeed, Il2CppArray<uintptr_t>* messageLines) {
		return ((T (*)(BRStartHUD*, float, float, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x260CDB8))(this, displayInterval, disappearTime, hideSpeed, messageLines);
	}
	template <typename T = uintptr_t> T PrintMessageAR(float displayInterval, float disappearTime, float hideSpeed, Il2CppArray<uintptr_t>* messageLines) {
		return ((T (*)(BRStartHUD*, float, float, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x260CC84))(this, displayInterval, disappearTime, hideSpeed, messageLines);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRStartHUD*))(Il2CppBase() + 0x260D1BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRStartHUD*, float))(Il2CppBase() + 0x260D1C4))(this, P0);
	}

};

}
