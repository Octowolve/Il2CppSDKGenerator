#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SlotMachineItemHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SlotMachineItemHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Icons() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Texts() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BackGrids() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& StopCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& SpriteNames() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& IconTextNames() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& TargetSpriteName() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& TargetIconTextName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& m_NextSpriteName() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& m_NextIconTextName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenNextItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Roll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T get_SpriteNames() {
		return ((T (*)(SlotMachineItemHUD*))(Il2CppBase() + 0x3C9F25C))(this);
	}
	template <typename T = void> T set_SpriteNames(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(SlotMachineItemHUD*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x3C9F264))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_IconTextNames() {
		return ((T (*)(SlotMachineItemHUD*))(Il2CppBase() + 0x3C9F26C))(this);
	}
	template <typename T = void> T set_IconTextNames(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(SlotMachineItemHUD*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x3C9F274))(this, value);
	}
	template <typename T = Il2CppString*> T get_TargetSpriteName() {
		return ((T (*)(SlotMachineItemHUD*))(Il2CppBase() + 0x3C9F27C))(this);
	}
	template <typename T = void> T set_TargetSpriteName(Il2CppString* value) {
		return ((T (*)(SlotMachineItemHUD*, Il2CppString*))(Il2CppBase() + 0x3C9F284))(this, value);
	}
	template <typename T = Il2CppString*> T get_TargetIconTextName() {
		return ((T (*)(SlotMachineItemHUD*))(Il2CppBase() + 0x3C9F28C))(this);
	}
	template <typename T = void> T set_TargetIconTextName(Il2CppString* value) {
		return ((T (*)(SlotMachineItemHUD*, Il2CppString*))(Il2CppBase() + 0x3C9F294))(this, value);
	}
	template <typename T = void> T StartRoll(uintptr_t callback) {
		return ((T (*)(SlotMachineItemHUD*, uintptr_t))(Il2CppBase() + 0x3C9F29C))(this, callback);
	}
	template <typename T = void> T GenNextItem() {
		return ((T (*)(SlotMachineItemHUD*))(Il2CppBase() + 0x3C9F400))(this);
	}
	template <typename T = uintptr_t> T Roll() {
		return ((T (*)(SlotMachineItemHUD*))(Il2CppBase() + 0x3C9F5F8))(this);
	}

};

}
