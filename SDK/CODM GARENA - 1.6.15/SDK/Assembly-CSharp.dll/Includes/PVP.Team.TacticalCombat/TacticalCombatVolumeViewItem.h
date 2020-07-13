#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatVolumeViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatVolumeViewItem"));
	}

	template <typename T = int32_t> T& VolIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OccupySprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CurrentSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ConflintObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RedEffectObj() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ChangeEffectAlpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ChangeEffectScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ChangeEffectSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mRenderWidget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& RenderWidgetAlpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& lastOccupyCamp() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> static T& mOccupySpriteNameString_Blue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& mOccupySpriteNameString_Red() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& mOccupiedSpriteNameString_Blue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& mOccupiedSpriteNameString_Red() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& mOccupiedSpriteNameString_White() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mColorBlue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mColorRed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mColorWhite() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_TCGameInfo() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_TCGame() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetNameColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOccupySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_RenderWidget() {
		return ((T (*)(TacticalCombatVolumeViewItem*))(Il2CppBase() + 0x3D881AC))(this);
	}
	template <typename T = uintptr_t> T get_TCGameInfo() {
		return ((T (*)(TacticalCombatVolumeViewItem*))(Il2CppBase() + 0x3D882AC))(this);
	}
	template <typename T = uintptr_t> T get_TCGame() {
		return ((T (*)(TacticalCombatVolumeViewItem*))(Il2CppBase() + 0x3D883B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TacticalCombatVolumeViewItem*))(Il2CppBase() + 0x3D884C4))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentSpriteName() {
		return ((T (*)(TacticalCombatVolumeViewItem*))(Il2CppBase() + 0x3D88968))(this);
	}
	template <typename T = void> T AutoSetNameColor() {
		return ((T (*)(TacticalCombatVolumeViewItem*))(Il2CppBase() + 0x3D88BA8))(this);
	}
	template <typename T = Il2CppString*> T GetOccupySpriteName() {
		return ((T (*)(TacticalCombatVolumeViewItem*))(Il2CppBase() + 0x3D88F08))(this);
	}

};

}
