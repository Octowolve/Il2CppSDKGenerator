#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DomVolumeViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DomVolumeViewItem"));
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
	template <typename T = uintptr_t> T& m_DomAreaInfo() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDomAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAreaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetNameColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOccupySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_RenderWidget() {
		return ((T (*)(DomVolumeViewItem*))(Il2CppBase() + 0x2B37500))(this);
	}
	template <typename T = uintptr_t> T GetDomAreaInfo() {
		return ((T (*)(DomVolumeViewItem*))(Il2CppBase() + 0x2B36578))(this);
	}
	template <typename T = bool> T CheckAreaInfo() {
		return ((T (*)(DomVolumeViewItem*))(Il2CppBase() + 0x2B37600))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DomVolumeViewItem*))(Il2CppBase() + 0x2B37788))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentSpriteName(uintptr_t camp) {
		return ((T (*)(DomVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x2B37EB0))(this, camp);
	}
	template <typename T = void> T AutoSetNameColor(uintptr_t camp) {
		return ((T (*)(DomVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x2B38050))(this, camp);
	}
	template <typename T = Il2CppString*> T GetOccupySpriteName(uintptr_t camp) {
		return ((T (*)(DomVolumeViewItem*, uintptr_t))(Il2CppBase() + 0x2B382B0))(this, camp);
	}

};

}
