#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class HardPointVolumeViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "HardPointVolumeViewItem"));
	}

	template <typename T = uintptr_t> T& OccupySprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ConflintObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ChangeEffectAlpha() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ChangeEffectScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ChangeEffectSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_HPAreaInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_HPManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Self() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_Enemy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_SpriteName_None() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_Icon_blue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_Icon_red() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_Icon_white() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_Icon_confict() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHardPointAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHardPointManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayeOccupiedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetHardPointAreaInfo() {
		return ((T (*)(HardPointVolumeViewItem*))(Il2CppBase() + 0x402E060))(this);
	}
	template <typename T = uintptr_t> T GetHardPointManager() {
		return ((T (*)(HardPointVolumeViewItem*))(Il2CppBase() + 0x402DFC0))(this);
	}
	template <typename T = bool> T CheckAreaInfo() {
		return ((T (*)(HardPointVolumeViewItem*))(Il2CppBase() + 0x402EE88))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HardPointVolumeViewItem*))(Il2CppBase() + 0x402F01C))(this);
	}
	template <typename T = Il2CppString*> T GetIconName(uintptr_t state) {
		return ((T (*)(HardPointVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x402F3E0))(this, state);
	}
	template <typename T = Il2CppString*> T GetSpriteName(uintptr_t state) {
		return ((T (*)(HardPointVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x402F29C))(this, state);
	}
	template <typename T = void> T PlayeOccupiedEffect() {
		return ((T (*)(HardPointVolumeViewItem*))(Il2CppBase() + 0x402C644))(this);
	}

};

}
