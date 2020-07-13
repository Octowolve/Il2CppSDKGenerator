#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMBuffMachineHUDOwningItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMBuffMachineHUD_OwningItem"));
	}

	template <typename T = int32_t> T& NoneIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NoneRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NormalRootWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NoneRootWidget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& AddLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_BuffUniqueId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_MachineHUD() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuffId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualClickBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoneBuffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMBuffMachineHUDOwningItem*))(Il2CppBase() + 0x2A4D05C))(this);
	}
	template <typename T = int32_t> T GetBuffId() {
		return ((T (*)(ZMBuffMachineHUDOwningItem*))(Il2CppBase() + 0x2A44D30))(this);
	}
	template <typename T = void> T SetContent(int32_t buffUniqueId, uintptr_t hud) {
		return ((T (*)(ZMBuffMachineHUDOwningItem*, int32_t, uintptr_t))(Il2CppBase() + 0x2A48BB8))(this, buffUniqueId, hud);
	}
	template <typename T = void> T ManualClickBuff() {
		return ((T (*)(ZMBuffMachineHUDOwningItem*))(Il2CppBase() + 0x2A44C6C))(this);
	}
	template <typename T = void> T OnBuffClick(uintptr_t obj) {
		return ((T (*)(ZMBuffMachineHUDOwningItem*, uintptr_t))(Il2CppBase() + 0x2A4D2F0))(this, obj);
	}
	template <typename T = void> T OnNoneBuffClick(uintptr_t obj) {
		return ((T (*)(ZMBuffMachineHUDOwningItem*, uintptr_t))(Il2CppBase() + 0x2A4D218))(this, obj);
	}
	template <typename T = void> T SetSelectState(int32_t uniqueBuffId) {
		return ((T (*)(ZMBuffMachineHUDOwningItem*, int32_t))(Il2CppBase() + 0x2A4A51C))(this, uniqueBuffId);
	}

};

}
