#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRChipMachineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRChipMachineManager"));
	}

	template <typename T = uintptr_t> T& ChipMachineSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChipMachineSpriteList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChipMachineEffectList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_BRGame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& chipMachineRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& hasInit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitChipMachineRelativePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpriteInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChipMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChipMachineRootPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRelativePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30B84FC))(this);
	}
	template <typename T = void> T InitChipMachineRelativePos() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30B87AC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30B916C))(this);
	}
	template <typename T = uintptr_t> T CreateSpriteInstance(uintptr_t spriteTemplate) {
		return ((T (*)(TacticalBRChipMachineManager*, uintptr_t))(Il2CppBase() + 0x30B8F38))(this, spriteTemplate);
	}
	template <typename T = void> T UpdateChipMachine() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30B94D0))(this);
	}
	template <typename T = void> T UpdateChipMachineRootPosition() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30B9320))(this);
	}
	template <typename T = void> T UpdateRelativePosition() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30B9C50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30BA1A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30BA1AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRelativePosition() {
		return ((T (*)(TacticalBRChipMachineManager*))(Il2CppBase() + 0x30BA1B4))(this);
	}

};

}
