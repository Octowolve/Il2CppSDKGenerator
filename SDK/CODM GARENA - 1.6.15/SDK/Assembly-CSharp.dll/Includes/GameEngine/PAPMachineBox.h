#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PAPMachineBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PAPMachineBox"));
	}

	template <typename T = int32_t> static T& useTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& OpenBoxPlayerId() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& startSound() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& stopSound() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& PickSound() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& cachePickUpWeapon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ActivePAPEffect() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PAPModel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& bStartWeaponMove() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& targetPoint() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& OriginWeaponPrice() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& WeaponLvl() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& WeaponLvlCost() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& CurrentWeaponId() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T get_audioPlayer() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x27264B4))(this);
	}
	template <typename T = void> T setPickUpWeapon(uintptr_t pickup) {
		return ((T (*)(PAPMachineBox*, uintptr_t))(Il2CppBase() + 0x272657C))(this, pickup);
	}
	template <typename T = int32_t> T GetWeaponPrice() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2726804))(this);
	}
	template <typename T = uintptr_t> T DelayPlayWeaponAni() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2726760))(this);
	}
	template <typename T = void> T ShowPAPMachineBox(bool show) {
		return ((T (*)(PAPMachineBox*, bool))(Il2CppBase() + 0x2726970))(this, show);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2726AD4))(this);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2726DA8))(this);
	}
	template <typename T = void> T OnChangeState(int32_t value) {
		return ((T (*)(PAPMachineBox*, int32_t))(Il2CppBase() + 0x2727150))(this, value);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x27279A0))(this);
	}
	template <typename T = void> T OnGetButtonMessage(int32_t price) {
		return ((T (*)(PAPMachineBox*, int32_t))(Il2CppBase() + 0x27279A8))(this, price);
	}
	template <typename T = void> T OnGetPlayerIdMessage(int32_t PlayerId) {
		return ((T (*)(PAPMachineBox*, int32_t))(Il2CppBase() + 0x27279C4))(this, PlayerId);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x27279CC))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(PAPMachineBox*, float))(Il2CppBase() + 0x27279D4))(this, fDeltaTime);
	}
	template <typename T = void> T DoActiveBox() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x272738C))(this);
	}
	template <typename T = void> T DoHoldBox() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2727508))(this);
	}
	template <typename T = void> T DoHideBox() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2727384))(this);
	}
	template <typename T = bool> T NeedCheckBeforeInteractive() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2727E10))(this);
	}
	template <typename T = bool> T OnCheckBeforeInteractive() {
		return ((T (*)(PAPMachineBox*))(Il2CppBase() + 0x2727E18))(this);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(PAPMachineBox*, bool))(Il2CppBase() + 0x2727F30))(this, show);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(PAPMachineBox*, uintptr_t, bool))(Il2CppBase() + 0x2728398))(this, p, enter);
	}

};

}
